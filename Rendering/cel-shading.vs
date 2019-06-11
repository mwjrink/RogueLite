#version 430 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aNormal;
layout (location = 2) in vec2 aTexCoords;

out vec2 TexCoords;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
    TexCoords = aTexCoords;
	
	float scale = 0.1;

	//float width = 1.0;
	//mat4 offset = mat4(1.0);
	//offset[3][0] = aNormal.x * width;
	//offset[3][1] = aNormal.y * width;
	//offset[3][2] = aNormal.z * width;

	//vec4 position = vec4(1.0);
	//position.x = aPos.x * scale;
	//position.y = aPos.y * scale;
	//position.z = aPos.z * scale;

    gl_Position = projection * view * model * vec4(aPos, 1.0) + vec4(aNormal, 1.0)*scale;
}