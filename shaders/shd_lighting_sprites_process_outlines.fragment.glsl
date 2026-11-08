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
#extension GL_OES_standard_derivatives : enable

varying vec2 v_vTexcoord;
varying vec4 v_vColour;

uniform vec2 u_vTexel; 

uniform bool u_bIgnoreBlack;

float get_alpha(vec4 col){
	return float(col.a != 0.);//(u_bIgnoreBlack || length(col.rgb) > 0.01) && 
}

void main()
{
	    // 1. Calculate how the texture coordinates change across screen X and Y
    vec2 dTexX = vec2(dFdx(v_vTexcoord.x), dFdx(v_vTexcoord.y));
    vec2 dTexY = vec2(dFdy(v_vTexcoord.x), dFdy(v_vTexcoord.y));

    // 2. Normalize these to create a rotation matrix matching the screen orientation
    //vec2 screenRight = normalize(dTexX);
    //vec2 screenDown  = normalize(dTexY);

    // 3. Transform the base texel dimensions into dynamically rotated screen offsets
    // This scales the directional vectors based on the sprite's texture dimensions
    vec2 rotTexelX = dTexX*3.;
    vec2 rotTexelY = dTexY*3.;

	vec4 colCenter = v_vColour * texture2D(gm_BaseTexture, v_vTexcoord);
    float alphaCenter = get_alpha(colCenter);
	
	if(alphaCenter == 0.)
		discard;
    
    float alphaLeft  = get_alpha(v_vColour * texture2D(gm_BaseTexture, v_vTexcoord - rotTexelX));
    float alphaRight = get_alpha(v_vColour * texture2D(gm_BaseTexture, v_vTexcoord + rotTexelX));
    float alphaUp    = get_alpha(v_vColour * texture2D(gm_BaseTexture, v_vTexcoord - rotTexelY));
    float alphaDown  = get_alpha(v_vColour * texture2D(gm_BaseTexture, v_vTexcoord + rotTexelY));
	float outline = min(
		min(alphaLeft, alphaUp),
		min(alphaRight,alphaDown)
	);
	
    float diffLeft  = (alphaCenter - alphaLeft);
    float diffRight = (alphaCenter - alphaRight);
    float diffUp    = (alphaCenter - alphaUp);
    float diffDown  = (alphaCenter - alphaDown);
	
    float horizontalTotal = (alphaLeft == 0. && alphaLeft == alphaRight) ? diffLeft : diffLeft - diffRight;
    float verticalTotal   = (alphaUp == 0. && alphaUp == alphaDown) ? diffUp : diffUp - diffDown;
	
	if(length(colCenter.rgb) < 0.01 && outline == 0. && abs(horizontalTotal) + abs(verticalTotal) > .0 && !u_bIgnoreBlack)
		discard;
	
	vec2 normal = vec2(
        horizontalTotal*.5+.5,
        verticalTotal*.5+.5
	);
	
    gl_FragColor = vec4(
		normal.x,
		normal.y,
        length(colCenter.rgb),
        alphaCenter
    );
}
