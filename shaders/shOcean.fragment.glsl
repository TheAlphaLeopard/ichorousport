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
uniform float u_speed;
uniform float u_spread;
uniform float u_depth_scale;
uniform float u_ground_uv;
uniform float u_falloff;
uniform float u_light_spread;
uniform float u_is_under; // 1.0 = under draw, 0.0 = upper draw
uniform float u_thresh0;
uniform float u_thresh1;
uniform float u_thresh2;
uniform float u_thresh3;
uniform vec3  u_color0;
uniform vec3  u_color1;
uniform vec3  u_color2;
uniform vec2  u_player_uv;
uniform float u_shadow_radius;
uniform vec2  u_vendor_uv;
uniform float u_vendor_radius;
uniform float u_aspect;
uniform vec2  u_offering0_uv;
uniform float u_offering0_radius;
uniform vec2  u_offering1_uv;
uniform float u_offering1_radius;
uniform vec2  u_offering2_uv;
uniform float u_offering2_radius;

float hash(vec2 p) {
    return fract(sin(dot(p, vec2(127.1, 311.7))) * 43758.5453);
}

float vnoise(vec2 p) {
    vec2 i = floor(p);
    vec2 f = fract(p);
    vec2 u = f * f * f * (f * (f * 6.0 - 15.0) + 10.0);
    return mix(mix(hash(i + vec2(0,0)), hash(i + vec2(1,0)), u.x),
               mix(hash(i + vec2(0,1)), hash(i + vec2(1,1)), u.x), u.y);
}

float fbm(vec2 p) {
    vec2 warp = vec2(vnoise(p * 0.7 + vec2(1.7, 9.2)),
                     vnoise(p * 0.7 + vec2(8.3, 2.8)));
    p += warp * 0.8;
    float v = 0.0, a = 0.5;
    for (int i = 0; i < 3; i++) {
        v += a * (vnoise(p) * 2.0 - 1.0);
        p = p * 2.0 + vec2(5.3, 1.7);
        a *= 0.42;
    }
    return clamp(v * 0.5 + 0.5, 0.0, 1.0);
}

void main() {
    float sy = v_vTexcoord.y;
    float g  = u_ground_uv;

    // hard clip each call to its own side to prevent seam bleed
    if (u_is_under > 0.5 && sy > g) { frag_color = vec4(0.0, 0.0, 0.0, 1.0); return; }
    if (u_is_under < 0.5 && sy < g) { frag_color = vec4(0.0, 0.0, 0.0, 1.0); return; }

    float dist;
    float scale;

    if (sy <= g) {
        dist    = (g - sy) / g;
        float t = 1.0 - dist;
        scale   = min(1.0 / (t * t + 0.02), 80.0);
    } else {
        dist    = (sy - g) / (1.0 - g);
        scale   = min(1.0 / (1.0 - dist + 0.03), 5.0);
    }

    float wx = (v_vTexcoord.x - 0.5) * scale * u_spread;
    float wz = scale * u_depth_scale - u_time * u_speed;

    float ripple = sin(wz * 1.1 - u_time * u_speed * 4.0) * 0.45 * (1.0 - dist);
    wx += ripple;

    float n = fbm(vec2(wx, wz));

    float dx   = abs(v_vTexcoord.x - 0.5);
    float bias = dist * u_falloff + dx * u_light_spread;
    float val  = clamp(n - bias, 0.0, 1.0);

    float sh = 1.0;
    if (u_shadow_radius > 0.0) {
        float cy   = u_player_uv.y + (u_ground_uv - u_player_uv.y) * 0.12;
        float pdx  = (v_vTexcoord.x - u_player_uv.x) * u_aspect;
        float pdy  =  v_vTexcoord.y - cy;
        float pd   = length(vec2(pdx, pdy));
        float wave = sin(atan(pdy, pdx) * 5.0 + u_time * 3.0) * u_shadow_radius * 0.15;
        sh = min(sh, smoothstep(0.0, u_shadow_radius + wave, pd));
    }
    if (u_vendor_radius > 0.0) {
        float cy   = u_vendor_uv.y + (u_ground_uv - u_vendor_uv.y) * 0.12;
        float pdx  = (v_vTexcoord.x - u_vendor_uv.x) * u_aspect;
        float pdy  =  v_vTexcoord.y - cy;
        float pd   = length(vec2(pdx, pdy));
        float wave = sin(atan(pdy, pdx) * 5.0 + u_time * 3.0) * u_vendor_radius * 0.15;
        sh = min(sh, smoothstep(0.0, u_vendor_radius + wave, pd));
    }
    if (u_offering0_radius > 0.0) {
        float pdx  = (v_vTexcoord.x - u_offering0_uv.x) * u_aspect;
        float pdy  = (v_vTexcoord.y - u_offering0_uv.y) * 7.0;
        float pd   = length(vec2(pdx, pdy));
        float wave = sin(atan(pdy, pdx) * 5.0 + u_time * 3.0) * u_offering0_radius * 0.15;
        sh = min(sh, smoothstep(0.0, u_offering0_radius + wave, pd));
    }
    if (u_offering1_radius > 0.0) {
        float pdx  = (v_vTexcoord.x - u_offering1_uv.x) * u_aspect;
        float pdy  = (v_vTexcoord.y - u_offering1_uv.y) * 7.0;
        float pd   = length(vec2(pdx, pdy));
        float wave = sin(atan(pdy, pdx) * 5.0 + u_time * 3.0) * u_offering1_radius * 0.15;
        sh = min(sh, smoothstep(0.0, u_offering1_radius + wave, pd));
    }
    if (u_offering2_radius > 0.0) {
        float pdx  = (v_vTexcoord.x - u_offering2_uv.x) * u_aspect;
        float pdy  = (v_vTexcoord.y - u_offering2_uv.y) * 7.0;
        float pd   = length(vec2(pdx, pdy));
        float wave = sin(atan(pdy, pdx) * 5.0 + u_time * 3.0) * u_offering2_radius * 0.15;
        sh = min(sh, smoothstep(0.0, u_offering2_radius + wave, pd));
    }
    if (sh < 1.0) {
        float dark = u_is_under < 0.5 ? 0.25 : 0.65;
        val = val * mix(dark, 1.0, sh);
    }

    float graw       = fbm(vec2(wx * 1.5, wz * 4.0));
    bool  glint_on   = graw > u_thresh2 && dist < 0.5 && val > u_thresh1;
    bool  thresh_on  = val >= u_thresh2 && val < u_thresh3;

    vec3 col;
    if      (val < u_thresh0)           col = vec3(0.0);
    else if (glint_on || thresh_on)     col = u_color2;
    else if (val < u_thresh1)           col = u_color0;
    else                                col = u_color1;

    frag_color = vec4(col, 1.0);
}
