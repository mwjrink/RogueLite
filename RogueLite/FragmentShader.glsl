#version 330 core
out vec4 color;

in vec2 TexCoord;

uniform sampler2D image;
uniform vec3 spriteColor;

void main()
{    
    color = vec4(spriteColor, 1.0) * texture(image, TexCoord);
	//color = vec4(1.0f, 0.5f, 0.2f, 1.0f);
}  