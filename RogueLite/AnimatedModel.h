#pragma once

#include <glad/glad.h>
#include <string>
#include <vector>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "GLTexture.h"
#include "Joint.h"

class AnimatedModel
{
    gltexture::GLTexture texture;
    GLuint               model;
    Joint                rootJoint;
    int                  jointCount;

    // Animator animator;

    AnimatedModel(GLuint model, gltexture::GLTexture texture, Joint rootJoint, int jointCount);

    GLuint getModel();

    gltexture::GLTexture getTexture();

    Joint getRootJoint();

    // void delete ();

    // void doAnimation(Animation animation);

	void update();

    glm::mat4* getJointTransforms();

    void addJointsToArray(Joint rootJoint, glm::mat4* jointMatrices);
};