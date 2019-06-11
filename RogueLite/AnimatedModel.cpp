#include "AnimatedModel.h"

AnimatedModel::AnimatedModel(GLuint model, gltexture::GLTexture texture, Joint rootJoint, int jointCount)
    : model(model), texture(texture), rootJoint(rootJoint), jointCount(jointCount)
{
    rootJoint.calcInverseBindTransform(glm::mat4());

	// VAO
	/*
	static Vao createVao(MeshData data)
    {
        Vao vao = Vao.create();
        vao.bind();
        vao.createIndexBuffer(data.getIndices());
        vao.createAttribute(0, data.getVertices(), 3);
        vao.createAttribute(1, data.getTextureCoords(), 2);
        vao.createAttribute(2, data.getNormals(), 3);
        vao.createIntAttribute(3, data.getJointIds(), 3);
        vao.createAttribute(4, data.getVertexWeights(), 3);
        vao.unbind();
        return vao;
    }
	*/
}

GLuint AnimatedModel::getModel() { return model; }

gltexture::GLTexture AnimatedModel::getTexture() { return texture; }

Joint AnimatedModel::getRootJoint() { return rootJoint; }

// void AnimatedModel::delete () { model.delete(); texture.delete(); }

// void AnimatedModel::doAnimation(Animation animation) { animator.doAnimation(animation); }

void AnimatedModel::update()
{
    //animator.update();
    // Get new frame data from skeleton and apply it here
}

glm::mat4* AnimatedModel::getJointTransforms()
{
    auto jointMatrices = new glm::mat4[jointCount];
    addJointsToArray(rootJoint, jointMatrices);
    return jointMatrices;
}

void AnimatedModel::addJointsToArray(Joint rootJoint, glm::mat4* jointMatrices)
{
    jointMatrices[rootJoint.id] = rootJoint.getAnimatedTransform();
    for (auto childJoint : rootJoint.children) addJointsToArray(childJoint, jointMatrices);
}