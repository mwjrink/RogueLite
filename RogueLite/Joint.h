#pragma once

#include <string>
#include <vector>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Joint
{
    glm::mat4 animatedTransform;
    glm::mat4 localBindTransform;
    glm::mat4 inverseBindTransform;

  public:
    int id;
    // vector<int> of id references in a skeleton file (cache friendly)
    std::vector<Joint> children;
    glm::mat4          transform;
    std::string        name;

    // name probably not needed
    Joint(int id, std::string name, glm::mat4 localBindTransform);

    void addChild(Joint& child);

    glm::mat4 getAnimatedTransform();

    void setAnimationTransform(glm::mat4 animatedTransform);

    glm::mat4 getInverseBindTransform();

    void calcInverseBindTransform(glm::mat4 parentBindTransform);
};