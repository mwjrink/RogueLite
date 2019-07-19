#version 430 core
layout (location = 0) in vec3 vertex;
layout (location = 1) in vec2 aTexCoords;
layout (location = 2) in vec4 texture_uvs;
layout (location = 3) in vec3 spriteColor;
layout (location = 4) in mat4 model;

out vec2 TexCoords;
// TODO: pass the layout straight to the fragment shader if possible
out vec3 fSpriteColor;

uniform mat4 projection_view;

void main()
{
    // gl_InstanceID
	fSpriteColor = spriteColor;
    TexCoords = aTexCoords * texture_uvs.zw + texture_uvs.xy;
	// TODO: Maybe save time by projection_view * model on cpu, its a per object calculation
    gl_Position = projection_view * model * vec4(vertex, 1.0);
    //gl_Position = vec4(vertex.x, vertex.y, vertex.z, 1.0);
}
