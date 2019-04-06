#version 330 core
layout (location = 0) in vec3 vertex;

//out vec2 TexCoords;

uniform mat4 model;
uniform mat4 projection;

void main()
{
    //TexCoords = vec2(0.0f, 0.0f);//vertex.zw;
    gl_Position = projection * model * vec4(vertex, 1.0);
    //gl_Position = vec4(vertex.x, vertex.y, vertex.z, 1.0);
}