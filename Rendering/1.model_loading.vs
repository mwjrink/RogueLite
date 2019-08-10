#version 430 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aNormal;
layout (location = 2) in vec2 aTexCoords;
layout (location = 3) in vec3 aTangent;
layout (location = 4) in vec3 aBitangent;
layout (location = 5) in ivec3 aJointIndices;
layout (location = 6) in vec3 aJointWeights;

out vec2 TexCoords;
//out vec3 VertexNormal;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

uniform mat4 jointTransforms[13];

void main()
{
	mat4 boneTransform = jointTransforms[aJointIndices[0]] * aJointWeights[0];
	boneTransform += jointTransforms[aJointIndices[1]] * aJointWeights[1];
	boneTransform += jointTransforms[aJointIndices[2]] * aJointWeights[2];

    TexCoords = aTexCoords;
    gl_Position = projection * view * model * boneTransform * vec4(aPos, 1.0);
}