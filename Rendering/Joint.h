#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <String>
#include <algorithm>
#include <iostream>
#include <limits>
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

    glm::mat3x4 og_direction_vectors = glm::mat3x4(1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.0, 1.0);
    glm::mat3   direction_vectors;

    glm::vec3 rotations = glm::vec3(0.0);
    glm::vec3 translations = glm::vec3(0.0);

    glm::vec3 min_rotations = glm::vec3(-numeric_limits<float>::max());  // glm::vec3(-6.28318530718f);
    glm::vec3 max_rotations = glm::vec3(numeric_limits<float>::max());   // glm::vec3(6.28318530718f);

    glm::mat4 rotation_matrix;
    glm::mat4 transformation_matrix;
    bool      transform_calculated = false;

    glm::mat4 bone_transform;

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

    void set_x_axis_rotation(float val) { rotations[0] = glm::radians(val); }
    void set_y_axis_rotation(float val) { rotations[1] = glm::radians(val); }
    void set_z_axis_rotation(float val) { rotations[2] = glm::radians(val); }

    void set_rotations(glm::vec3 val) { rotations = val; }

	void set_x_translation(float val) { translations[0] = val; }
    void set_y_translation(float val) { translations[1] = val; }
    void set_z_translation(float val) { translations[2] = val; }

    void animate_x_axis_rotation(float val) { rotations[0] += val; }
    void animate_y_axis_rotation(float val) { rotations[1] += val; }
    void animate_z_axis_rotation(float val) { rotations[2] += val; }

    glm::mat4 create_transform_matrices()
    {
        if (transform_calculated) return transformation_matrix;

        if (parent != nullptr)
        {
            parent->create_transform_matrices();
            direction_vectors = glm::mat3(parent->rotation_matrix * og_direction_vectors);
        }
        else
            direction_vectors = glm::mat3(og_direction_vectors);

        rotation_matrix = glm::mat4(1.0);

        rotation_matrix =
            glm::rotate(rotation_matrix, std::clamp(rotations.x, min_rotations.x, max_rotations.x), direction_vectors[0]);
        rotation_matrix =
            glm::rotate(rotation_matrix, std::clamp(rotations.y, min_rotations.y, max_rotations.y), direction_vectors[1]);
        rotation_matrix =
            glm::rotate(rotation_matrix, std::clamp(rotations.z, min_rotations.z, max_rotations.z), direction_vectors[2]);

        if (parent != nullptr)
        {
            transformation_matrix =
                parent->create_transform_matrices() * offset_matrix_inv * rotation_matrix * offset_matrix;
        }
        else
            transformation_matrix = offset_matrix_inv * rotation_matrix * offset_matrix;

		transformation_matrix = glm::translate(transformation_matrix, translations);

        transform_calculated = true;

        return transformation_matrix;
    }

    void clear_transform() { transform_calculated = false; }
};