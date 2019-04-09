#version 460 core
out vec4 color;

in vec2 TexCoords;
in vec3 fSpriteColor;

uniform sampler2D image;

void main()
{    
    // gl_InstanceID
    color = vec4(fSpriteColor, 1.0) * texture(image, TexCoords);
	//color = texture(image, TexCoords);
	//color = vec4(TexCoords, 0.2f, 1.0f);
}  