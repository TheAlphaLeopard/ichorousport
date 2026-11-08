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
varying vec2 v_vTexcoord;
varying vec4 v_vColour;

uniform sampler2D u_fogTex;

uniform float u_time;
uniform float u_radiusX;
uniform float u_radiusY;
uniform float u_distortAmp;
uniform float u_fade;
uniform float u_density;

uniform vec2 u_center;
uniform vec2 u_resolution;
uniform vec2 u_camPos;

float bayer4x4(vec2 pos) {
    mat4 m = mat4(
         0.0, 12.0,  3.0, 15.0,
         8.0,  4.0, 11.0,  7.0,
         2.0, 14.0,  1.0, 13.0,
        10.0,  6.0,  9.0,  5.0
    ) / 16.0;
    int xi = int(mod(pos.x, 4.0));
    int yi = int(mod(pos.y, 4.0));
    return m[xi][yi];
}

void main() {
    vec2 screenPos = v_vTexcoord * u_resolution;
    vec2 worldPos  = screenPos + u_camPos;
    vec2 local     = worldPos - u_center;

    float warp =
        sin(radians(local.x * 23.0) + radians(u_time)) +
        sin(radians(local.y * 19.0) + radians(u_time * 1.4));
    warp *= u_distortAmp;

    float effRX = u_radiusX + warp;
    float effRY = u_radiusY + warp;

    if (effRX <= 0.0 || effRY <= 0.0) discard;

    float dist2 =
        (local.x * local.x) / (effRX * effRX) +
        (local.y * local.y) / (effRY * effRY);

    if (dist2 > 1.0) discard;

    // world-anchored dither
    float dither    = bayer4x4(worldPos);
    float threshold = min(u_fade, clamp((1.0 - dist2) * u_density, 0.0, 1.0));
    if (dither >= threshold) discard;

    vec4 col = texture2D(u_fogTex, v_vTexcoord);
    gl_FragColor = col * v_vColour;
}
