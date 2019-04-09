#version 460 core
layout (location = 0) in vec3 vertex;
layout (location = 1) in vec2 aTexCoords;
layout (location = 2) in vec4 texture_uvs;
layout (location = 3) in vec3 spriteColor;
layout (location = 4) in mat4 model;

out vec2 TexCoords;
out vec3 fSpriteColor;

uniform mat4 view;
uniform mat4 projection;

void main()
{
    // gl_InstanceID
	fSpriteColor = spriteColor;
    TexCoords = aTexCoords * texture_uvs.zw + texture_uvs.xy;
    gl_Position = projection * view * model * vec4(vertex, 1.0);
    //gl_Position = vec4(vertex.x, vertex.y, vertex.z, 1.0);
}
