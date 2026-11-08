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
varying vec2 v_vTexcoord;
varying vec2 v_vPos;

uniform vec2 u_vLightPos;
uniform vec2 u_vLightRadius;
uniform float u_fLightHighlightOnly;
uniform float u_fGlobalLightLevel;

//uniform vec2 u_vScreenSize;

void main()
{
	//vec2 sample = v_vPos / u_vScreenSize;
	
	float light_size = u_vLightRadius.x;
	float light_fade_size = u_vLightRadius.y*2.;
	vec2 light_pos = u_vLightPos;
	
	vec2 centered = v_vPos - light_pos;
	
	float dist = max(0., length(centered) - light_size);
	//vec2 light_normal = normalize(centered);
	//
    //vec2 screen_normal = texture2D( gm_BaseTexture, sample );
	//float face = gl_FragColor.b < 0.01 ? 0. : dot(light_normal, screen_normal.xy*2. - 1.);
	float light = max(0., 1. - dist/light_fade_size) * u_fGlobalLightLevel;// + face*.5;
	
	float light_spaced = light*5.;
	float light_stepped = floor(light_spaced*3.);
	
	//float light_gap = abs(light_stepped - light_spaced));// light_stepped*4.+1. - light_spaced);
	
	//light = (light_stepped + light_gap)/4.;
	
	float light_edge = float(mod(floor(light_spaced*3. + 1.), 3.) == 1.) * (1. - fract(light_spaced*3.));
	
	light = (floor(light_spaced) - light_edge);
	
	light = u_fLightHighlightOnly > .5 ? min(1., light) : light;
	
	light = light/4.;
	
	gl_FragColor = vec4(vec3(light),1.);
}
