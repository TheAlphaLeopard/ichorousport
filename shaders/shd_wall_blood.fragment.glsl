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
//
// Simple passthrough fragment shader
//
#define Tolerance 0.004 

varying vec2 v_vTexcoord;
varying vec4 v_vColour;

varying vec2 v_vPos;

uniform vec2 u_vScreenSize;
uniform vec2 u_vTexel;

uniform sampler2D u_sBloodTexture;



uniform sampler2D u_palTexture;
uniform vec4 u_Uvs;
uniform vec2 u_paletteId;
uniform vec2 u_pixelSize;

vec4 findAltColor(vec3 inCol, vec2 corner, float pal_id)
{
    float dist;
    vec2 testPos;
    vec3 leftCol;
    for(float i = corner.y; i < u_Uvs.w; i+=u_pixelSize.y )
    {
			testPos = vec2(corner.x,i);
      leftCol = texture2D( u_palTexture, testPos).rgb;
        
			dist = distance(leftCol,inCol);

			if(dist < Tolerance)
      {
				testPos = vec2(corner.x + u_pixelSize.x * floor(pal_id + 1.0), i);
        return mix(texture2D(u_palTexture, vec2(testPos.x - u_pixelSize.x, testPos.y)), texture2D(u_palTexture, testPos), fract(pal_id));
      }
    }
    return vec4(inCol,1.);
}


void main()
{
	vec4 wall_sample = v_vColour * texture2D( gm_BaseTexture, v_vTexcoord );
    vec4 blood_sample = texture2D( u_sBloodTexture, v_vTexcoord );
	
	if(blood_sample.a < .5 || wall_sample.a < .5)
		discard;
	
	float right = texture2D( gm_BaseTexture, v_vTexcoord + vec2(u_vTexel.x*2., 0.)).a;
	float left = texture2D( gm_BaseTexture, v_vTexcoord - vec2(u_vTexel.x*2., 0.)).a;
	float down = texture2D( gm_BaseTexture, v_vTexcoord + vec2(0.,u_vTexel.y*2.)).a;
	float up = texture2D( gm_BaseTexture, v_vTexcoord - vec2(0.,u_vTexel.y*2.)).a;
	
	float edge = 1. - min(min(right,left),min(down,up));
	
	gl_FragColor = findAltColor(wall_sample.rgb, u_Uvs.xy, mix(u_paletteId.x,u_paletteId.y,edge) );
}
