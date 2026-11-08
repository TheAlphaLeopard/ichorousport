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
precision highp float;

const float PI = 3.14159265359;

varying vec2 v_vTexcoord;
varying vec4 v_vColor;

uniform vec2 u_vTexel;
uniform vec2 u_vShadowDelta;

const int u_iOutlineSamples = 4;
const int u_iOutlineSize    = 1;

float InsideTexture(vec2 point)
{
    vec2 result = step(0.0, point) - step(1.0, point);
    return result.x*result.y;   
}

float SampleAlpha(vec2 inTexcoord)
{
    vec2  texcoord;
    float alpha = 0.0;
    
    for(int iAngle = 0; iAngle < u_iOutlineSamples; iAngle++)
    {
        float angle = 2.0*PI*float(iAngle) / float(u_iOutlineSamples);
        for(int radius = 1; radius <= u_iOutlineSize; radius++)
        {
            texcoord = inTexcoord + u_vTexel*(float(radius)*vec2(cos(angle), sin(angle)));
            alpha = mix(alpha, 1.0, texture2D(gm_BaseTexture, texcoord).a*InsideTexture(texcoord));
        }
    }
    
    return alpha;
}

void main()
{
    if (all(equal(u_vShadowDelta, vec2(0.0))))
    {
        gl_FragColor = vec4(texture2D(gm_BaseTexture, v_vTexcoord).a,
                            SampleAlpha(v_vTexcoord),
                            0.0,
                            1.0);
    }
    else
    {
        gl_FragColor = vec4(texture2D(gm_BaseTexture, v_vTexcoord).a,
                            SampleAlpha(v_vTexcoord),
                            SampleAlpha(v_vTexcoord - u_vTexel*u_vShadowDelta),
                            1.0);
    }
}
