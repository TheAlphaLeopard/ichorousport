precision mediump float;
#define LOWPREC lowp
// Uniforms look like they're shared between vertex and fragment shaders in GLSL, so we have to be careful to avoid name clashes

uniform sampler2D gm_BaseTexture;

uniform bool gm_PS_FogEnabled;
uniform vec4 gm_FogColour;
uniform bool gm_AlphaTestEnabled;
uniform float gm_AlphaRefValue;

void DoAlphaTest(vec4 SrcColour)
{
	if (gm_AlphaTestEnabled)
	{
		if (SrcColour.a <= gm_AlphaRefValue)
		{
			discard;
		}
	}
}

void DoFog(inout vec4 SrcColour, float fogval)
{
	if (gm_PS_FogEnabled)
	{
		SrcColour = mix(SrcColour, gm_FogColour, clamp(fogval, 0.0, 1.0)); 
	}
}

#define _YY_GLSLES_ 1
//
// Simple passthrough fragment shader
//
varying vec2 v_vTexcoord;
varying vec2 v_vPos;

uniform sampler2D u_sGame;

#define Transparent vec4(.0,.0,.0,.0)
#define Tolerance 0.004 

uniform vec2 u_vOffset;
uniform float u_fFlat;
uniform float u_fViewWidth;
uniform float u_fEdgeBand;
uniform vec2 u_pixelSize;
uniform vec4 u_Uvs;
uniform sampler2D u_palTexture;

vec4 findAltColor(vec4 inCol, vec2 corner, float u_paletteId)
{
    if(inCol.a == 0.) return Transparent;
    
    float dist;
    vec2 testPos;
    vec4 leftCol;
    for(float i = corner.y; i < u_Uvs.w; i+=u_pixelSize.y )
    {
		testPos = vec2(corner.x,i);
		leftCol = texture2D( u_palTexture, testPos);
		
		dist = distance(leftCol,inCol);
		
		if(dist < Tolerance)
		{
			testPos = vec2(corner.x + u_pixelSize.x * floor(u_paletteId + 1.0), i);
			return mix(texture2D(u_palTexture, vec2(testPos.x - u_pixelSize.x, testPos.y)), texture2D(u_palTexture, testPos), fract(u_paletteId));
		}
    }
    return inCol;
}

float getDitherValue(vec2 pixelPos) {
    vec2 bayerCoord = floor(mod(pixelPos, 4.0));
    int x = int(bayerCoord.x);
    int y = int(bayerCoord.y);

    //  4x4 Bayer Matrix row definitions
    vec4 row0 = vec4( 0.0, 12.0,  3.0, 15.0);
    vec4 row1 = vec4( 8.0,  4.0, 11.0,  7.0);
    vec4 row2 = vec4( 2.0, 14.0,  1.0, 13.0);
    vec4 row3 = vec4(10.0,  6.0,  9.0,  5.0);

    vec4 activeRow = vec4(0.0);
    if (y == 0) activeRow = row0;
    else if (y == 1) activeRow = row1;
    else if (y == 2) activeRow = row2;
    else if (y == 3) activeRow = row3;

    float value = 0.0;
    if (x == 0) value = activeRow.x;
    else if (x == 1) value = activeRow.y;
    else if (x == 2) value = activeRow.z;
    else if (x == 3) value = activeRow.w;

    return value / 16.0;
}

void main()
{
    vec4 screen = texture2D( u_sGame, v_vTexcoord );
    vec4 light_level = texture2D( gm_BaseTexture, v_vTexcoord )*4.;

	float level = u_fFlat > .5 ? 4. : light_level.r;
	float threshold = getDitherValue(v_vPos + u_vOffset);

	float edge_dist = min(v_vPos.x, u_fViewWidth - v_vPos.x);
	if (edge_dist < u_fEdgeBand) {
		float edge_level = max(0., edge_dist) / u_fEdgeBand * 4.;
		if (edge_level < level) {
			level = edge_level;
			threshold = getDitherValue(v_vPos);
		}
	}

	float final_light = fract(level)*1.1-.05 > threshold ? 1. : 0.;

	float pal = (4. - floor(level) - final_light);
	
	vec4 new_col = findAltColor(screen, u_Uvs.xy, pal);
	
	gl_FragColor = new_col;
}
