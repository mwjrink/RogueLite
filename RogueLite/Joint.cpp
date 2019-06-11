#include "Joint.h"

Joint::Joint(int id, std::string name, glm::mat4 localBindTransform) : id(id), name(name), localBindTransform(localBindTransform) {}

void Joint::addChild(Joint& child) { this->children.push_back(child); }

glm::mat4 Joint::getAnimatedTransform() { return animatedTransform; }

void Joint::setAnimationTransform(glm::mat4 animatedTransform) { this->animatedTransform = animatedTransform; }

glm::mat4 Joint::getInverseBindTransform() { return inverseBindTransform; }

void Joint::calcInverseBindTransform(glm::mat4 parentBindTransform)
{
    auto bindTransform = parentBindTransform * localBindTransform;
    auto inverse       = glm::inverse(bindTransform);
    for (auto child : children) child.calcInverseBindTransform(bindTransform);
}