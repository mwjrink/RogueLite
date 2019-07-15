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

uniform float outline_width;

uniform mat4 jointTransforms[13];

void main()
{
	vec4 totalLocalPos = vec4(0.0);
	// Normals are for lighting
	vec4 totalNormal = vec4(0.0);

	for(int i=0; i<3; i++){
		mat4 jointTransform = jointTransforms[aJointIndices[i]];

		vec4 posePosition = jointTransform * vec4(aPos, 1.0);
		totalLocalPos += posePosition * aJointWeights[i];

		vec4 worldNormal = jointTransform * vec4(aNormal, 1.0);
		totalNormal += worldNormal * aJointWeights[i];
	}

    TexCoords = aTexCoords;
    gl_Position = projection * view * model * totalLocalPos + projection * view * model * totalNormal * outline_width;
}