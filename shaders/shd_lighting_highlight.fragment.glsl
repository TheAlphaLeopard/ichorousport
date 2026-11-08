#version 120
#define LOWPREC 
#define lowp
#define mediump
#define highp
#define precision
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

#define _YY_GLSL_ 1
#define Transparent vec4(.0,.0,.0,.0)
#define Tolerance 0.004 

uniform vec2 u_pixelSize;
uniform vec4 u_Uvs;
uniform sampler2D u_palTexture;

varying vec2 v_vTexcoord;
varying vec4 v_vColour;
varying vec2 v_vPos;

uniform vec2 u_vLightPos;
uniform vec2 u_vOffset;
uniform float u_fLightRadius;

uniform sampler2D u_sGame;

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

const bool USE_DITHER = true;

float get_alpha(vec4 col){
	return float(col.b > 0.01);
}

uniform vec2 u_vScreenSize;

void main()
{
	vec2 sample = v_vPos / u_vScreenSize;
	
    gl_FragColor = texture2D( gm_BaseTexture, sample );
	
	if(gl_FragColor.a == 0.)
		discard;
		
	vec2 texelX = vec2(1. / u_vScreenSize.x, 0.);
	vec2 texelY = vec2(0., 1. / u_vScreenSize.y);

    float alphaLeft  = get_alpha(texture2D(gm_BaseTexture, sample - texelX));
    float alphaRight = get_alpha(texture2D(gm_BaseTexture, sample + texelX));
    float alphaUp    = get_alpha(texture2D(gm_BaseTexture, sample - texelY));
    float alphaDown  = get_alpha(texture2D(gm_BaseTexture, sample + texelY));
	float outline = min(
		min(alphaLeft, alphaUp),
		min(alphaRight,alphaDown)
	);
	
	float light_size = u_fLightRadius;
	vec2 light_pos = u_vLightPos;
	
	vec2 centered = v_vPos - light_pos;
	
	float dist = length(centered);
	vec2 normal = normalize(centered);
	
	float face = dot(normal, gl_FragColor.rg*2. - 1.);
	float light = max(0., 1. - dist/(light_size));
	float light1 = max(0., 1. - dist/(light_size*.4));
	
	float threshold = getDitherValue(v_vPos + u_vOffset);
	
	//float light_2 = (1. - dot(normal, vec2(0.))) * max(0., light*3. - 2.) * .5;
	
	//float final_light = max(
	//	light_2 > threshold ? 1. : 0.,
	//	face * (light > threshold ? 1. : 0.)
	//);
	
	float half_a = outline > .5 ? .5 : 1.;
	
	float final_light = face * (USE_DITHER ? (light * 2. > threshold ? 1. : 0.) : max(0., light*2. - 1.));
	float highlight = (light1 > threshold ? 1. : 0.);
	
	if(highlight == 0. && final_light < .1)
		discard;
	
    gl_FragColor = texture2D( u_sGame, sample);
	vec4 new_col = findAltColor(gl_FragColor, u_Uvs.xy, 1. + (final_light < .1 ? 0. : 1. - outline));
	if(distance(gl_FragColor.rgb,new_col.rgb) < .001)
		discard;
	
	gl_FragColor = new_col;
	//if(final_light < .1)
	//	gl_FragColor = vec4(0.,1.,1.,1.);
	
	//gl_FragColor.rgb = u_vLightColor/256. * half_a;
}
