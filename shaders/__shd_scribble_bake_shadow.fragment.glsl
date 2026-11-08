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
//   @jujuadams   v8.0.0   2021-12-15
precision highp float;

const float PI = 3.14159265359;

varying vec2 v_vTexcoord;
varying vec4 v_vColor;

uniform vec2 u_vTexel;
uniform vec4 u_vShadowColor;
uniform vec2 u_vShadowDelta;

float InsideTexture(vec2 point)
{
    vec2 result = step(0.0, point) - step(1.0, point);
    return result.x*result.y;   
}

void main()
{
    vec2 texcoord = v_vTexcoord - u_vTexel*u_vShadowDelta;
    vec4 newColor = vec4(u_vShadowColor.rgb, u_vShadowColor.a*texture2D(gm_BaseTexture, texcoord).a*InsideTexture(texcoord));
    vec4 sample = texture2D(gm_BaseTexture, v_vTexcoord);
    gl_FragColor = v_vColor*mix(newColor, sample, sample.a);
    gl_FragColor.a = max(newColor.a,sample.a);
}
