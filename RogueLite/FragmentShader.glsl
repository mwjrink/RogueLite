#version 460 core
out vec4 color;

in vec2 TexCoords;
in vec3 fSpriteColor;

uniform sampler2D image;

void main()
{    
    // gl_InstanceID
	//vec2 offset = vec2(0.5f, 0.5f)/textureSize(image,0);
    //color = vec4(fSpriteColor, 1.0) * texture(image, TexCoords+offset);

    color = vec4(fSpriteColor, 1.0) * texture(image, TexCoords);

	//color = texture(image, TexCoords);
	//color = vec4(TexCoords, 0.2f, 1.0f);
	//color = vec4(image, 0.0f, 0.0f, 1.0f);
}  
