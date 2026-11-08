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

uniform float u_time;
uniform vec2 u_resolution;
uniform float u_scrollY;
uniform float u_noiseCellSize;
uniform float u_noiseSpeed;
uniform float u_noiseAmount;
uniform float u_threshold1;
uniform float u_threshold2;
uniform float u_marginPx;
uniform vec3 u_colorNear;
uniform vec3 u_colorMid;
uniform vec3 u_colorFar;

vec4 mod289(vec4 x) { return x - floor(x * (1.0 / 289.0)) * 289.0; }
vec4 permute(vec4 x) { return mod289(((x * 34.0) + 1.0) * x); }
vec4 taylorInvSqrt(vec4 r) { return 1.79284291400159 - 0.85373472095314 * r; }
vec2 fade(vec2 t) { return t * t * t * (t * (t * 6.0 - 15.0) + 10.0); }

float cnoise(vec2 P)
{
    vec4 Pi = floor(P.xyxy) + vec4(0.0, 0.0, 1.0, 1.0);
    vec4 Pf = fract(P.xyxy) - vec4(0.0, 0.0, 1.0, 1.0);
    Pi = mod289(Pi);
    vec4 ix = Pi.xzxz;
    vec4 iy = Pi.yyww;
    vec4 fx = Pf.xzxz;
    vec4 fy = Pf.yyww;
    vec4 i = permute(permute(ix) + iy);
    vec4 gx = 2.0 * fract(i * 0.0243902439) - 1.0;
    vec4 gy = abs(gx) - 0.5;
    vec4 tx = floor(gx + 0.5);
    gx = gx - tx;
    vec2 g00 = vec2(gx.x, gy.x);
    vec2 g10 = vec2(gx.y, gy.y);
    vec2 g01 = vec2(gx.z, gy.z);
    vec2 g11 = vec2(gx.w, gy.w);
    vec4 norm = taylorInvSqrt(vec4(dot(g00, g00), dot(g01, g01), dot(g10, g10), dot(g11, g11)));
    g00 *= norm.x;
    g01 *= norm.y;
    g10 *= norm.z;
    g11 *= norm.w;
    float n00 = dot(g00, vec2(fx.x, fy.x));
    float n10 = dot(g10, vec2(fx.y, fy.y));
    float n01 = dot(g01, vec2(fx.z, fy.z));
    float n11 = dot(g11, vec2(fx.w, fy.w));
    vec2 fade_xy = fade(Pf.xy);
    vec2 n_x = mix(vec2(n00, n01), vec2(n10, n11), fade_xy.x);
    float n_xy = mix(n_x.x, n_x.y, fade_xy.y);
    return 2.3 * n_xy;
}

void main()
{
    vec2 uv = v_vTexcoord;
    float halfWidth = max(u_resolution.x * 0.5 - u_marginPx, 1.0);
    float dist = abs(uv.x * u_resolution.x - u_resolution.x * 0.5) / halfWidth;

    vec2 pixelPos = vec2(uv.x * u_resolution.x, uv.y * u_resolution.y + u_scrollY);
    vec2 noiseUV = pixelPos / u_noiseCellSize;

    float n1 = cnoise(noiseUV + vec2(0.0, u_time * u_noiseSpeed));
    float n2 = cnoise(noiseUV * 2.3 - vec2(u_time * u_noiseSpeed * 0.6, 0.0));
    float n3 = cnoise(noiseUV * 5.0 + vec2(u_time * u_noiseSpeed * 1.3, u_time * u_noiseSpeed * 0.4));
    float n4 = cnoise(noiseUV * 11.0 - vec2(u_time * u_noiseSpeed * 0.8, u_time * u_noiseSpeed * 0.5));
    float noise = n1 * 0.5 + n2 * 0.25 + n3 * 0.15 + n4 * 0.1;

    float edge = dist + noise * u_noiseAmount;

    vec3 col = u_colorNear;
    if (edge >= u_threshold1) col = u_colorMid;
    if (edge >= u_threshold2) col = u_colorFar;

    gl_FragColor = vec4(col, 1.0);
}
