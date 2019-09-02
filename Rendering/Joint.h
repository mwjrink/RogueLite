#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/quaternion.hpp>

#include <algorithm>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

using namespace std;

class Joint
{
  public:
    unsigned int ID;

    std::string name;

    Joint*         parent = nullptr;
    vector<Joint*> children;

    glm::mat4 offset_matrix;
    glm::mat4 offset_matrix_inv;

    glm::quat rotation;
    glm::vec3 translation;
    glm::vec3 scale;

    glm::mat4 transformation_matrix;
    bool      transform_calculated = false;

    // queue for animation progression?

    // technically min and max rotations should be passed in here too, but IDK how to do this easily so I will figure this
    // out later :( the right way to do this is to make a keyframe for the minimums and maximums then reading those angles in
    // (FUCK THAT THOUGH)
    Joint(unsigned int ID, std::string name, glm::mat4 offset_matrix)  //, glm::mat4 bone_transform)
        : ID(ID), name(name), offset_matrix(offset_matrix), offset_matrix_inv(glm::inverse(offset_matrix))
    //, bone_transform(bone_transform)
    {
    }

    void push_back_child(Joint* child)
    {
        child->parent = this;
        children.push_back(child);
    }

    glm::quat get_rotation() { return rotation; }

    void set_rotation(const glm::quat& quat) { rotation = quat; }

    void set_position(const glm::vec3& position) { translation = position; }

    void set_scale(const glm::vec3& pscale) { scale = pscale; }

    glm::mat4 create_transform_matrices()
    {
        if (transform_calculated) return transformation_matrix;

        auto transform = glm::toMat4(rotation);
        transform      = glm::translate(transform, translation);
        transform      = glm::scale(transform, scale);

        if (parent != nullptr)
        {
            transformation_matrix = parent->create_transform_matrices() * offset_matrix_inv * transform * offset_matrix;
        }
        else
            transformation_matrix = offset_matrix_inv * transform * offset_matrix;

        transform_calculated = true;

        return transformation_matrix;
    }

    void clear_transform() { transform_calculated = false; }
};
