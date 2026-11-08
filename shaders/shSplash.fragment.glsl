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
precision highp float;

#if __VERSION__ >= 130
    out vec4 frag_color;
    #define varying in
    #define texture2D texture
#else
    #define frag_color gl_FragColor
#endif

varying vec2 v_vTexcoord;

uniform float u_time;
uniform vec4  u_uv_bounds;     // atlas (u0, v0, u1, v1) of sprite content
uniform float u_waterline_v;   // atlas V of water line
uniform float u_splash_height; // atlas V height of splash band
uniform vec3  u_color;

void main() {
    vec4 spr = texture2D(gm_BaseTexture, v_vTexcoord);
    if (spr.a < 0.5) { frag_color = vec4(0.0); return; }

    float vy  = v_vTexcoord.y;
    float top = u_waterline_v - u_splash_height;

    if (vy < top || vy > u_waterline_v) { frag_color = vec4(0.0); return; }

    // Normalize X across sprite content width (handles flipped sprites fine)
    float nx = (v_vTexcoord.x - u_uv_bounds.x) / (u_uv_bounds.z - u_uv_bounds.x);

    // t: 0 at top of splash band, 1 at water line
    float t = (vy - top) / u_splash_height;

    float wave = sin(nx * 30.0 + u_time * 4.0) * 0.18
               + sin(nx * 13.0 - u_time * 2.5) * 0.09;

    float foam = smoothstep(0.45 + wave, 0.72 + wave, t);

    frag_color = vec4(u_color, foam * spr.a);
}
