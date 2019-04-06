#version 330 core
layout (location = 0) in vec3 vertex;
layout (location = 1) in vec2 aTexCoord;

out vec2 TexCoord;

uniform mat4 model;
uniform mat4 projection;

uniform vec4 texture_uvs;

void main()
{
    TexCoord = aTexCoord * texture_uvs.zw + texture_uvs.xy;
    gl_Position = projection * model * vec4(vertex, 1.0);
    //gl_Position = vec4(vertex.x, vertex.y, vertex.z, 1.0);
}