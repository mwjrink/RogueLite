#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <String>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Joint
{
  public:
    unsigned int ID;

    std::string name;

    // parent Joint
    Joint* parent = nullptr;
    // child joints, with positioning relative to this
    vector<Joint*> children;

    // length of the bone from parent joint to this joint
    const float length;

    // technically I shouldnt need these two to calculate the transforms

    // relative to world space
    // glm::vec4 original_position;
    // glm::vec4 original_dir_vec;
    glm::mat4 offset_matrix;
    glm::mat4 offset_matrix_inv;

    glm::vec4 current_position;

    glm::mat3x4 og_direction_vectors = glm::mat3x4(1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.0, 1.0);
    glm::mat3   direction_vectors;

    glm::vec3 rotations = glm::vec3(0.0);

    glm::vec3 min_rotations = glm::vec3(-6.28318530718f);
    glm::vec3 max_rotations = glm::vec3(6.28318530718f);

    glm::mat4 rotation_matrix;
    glm::mat4 translation_matrix;
    glm::mat4 transformation_matrix;
    bool      transform_calculated = false;

    // technically min and max rotations should be here too, but IDK how to do this easily so I will fill it later :(
    // the right way to do this is to make a keyframe for the minimums and maximums then reading those angles in (FUCK THAT
    // THOUGH)
    Joint(unsigned int ID, float length, std::string name, glm::mat4 offset_matrix)
        : ID(ID), length(length), name(name), offset_matrix(offset_matrix), offset_matrix_inv(glm::inverse(offset_matrix))
    {
    }

    void push_back_child(Joint* child)
    {
        child->parent = this;
        children.push_back(child);
    }

    void set_x_axis_rotation(float val) { rotations = glm::vec3(val, rotations.y, rotations.z); }
    void set_y_axis_rotation(float val) { rotations = glm::vec3(rotations.x, val, rotations.z); }
    void set_z_axis_rotation(float val) { rotations = glm::vec3(rotations.x, rotations.y, val); }

    glm::mat4 create_transform_matrices()
    {
        if (transform_calculated) return transformation_matrix;

        /*current_position + parent->current_position + original_dir_vec * length;*/

        // original_dir_vec needs to have rotations applied but not translation
        // rotations from highest parent all the way to this->parent

        // original_dir_vec, transformed, added to parent current position is this joints current position

        // cache transform matrices per frame ?

        // if (parent != nullptr)
        //{
        //    parent->create_transform_matrices();

        //    //rotation_matrix = glm::mat4(parent->rotation_matrix);
        //}
        // else
        //{
        //}

        if (parent != nullptr)
            direction_vectors = glm::mat3(glm::vec3(og_direction_vectors[0] * parent->create_transform_matrices()),
                                          glm::vec3(og_direction_vectors[1] * parent->create_transform_matrices()),
                                          glm::vec3(og_direction_vectors[2] * parent->create_transform_matrices()));
        else
            direction_vectors = glm::mat3(glm::vec3(og_direction_vectors[0]), glm::vec3(og_direction_vectors[1]),
                                          glm::vec3(og_direction_vectors[2]));

        rotation_matrix = glm::mat4(1.0);

        rotation_matrix =
            glm::rotate(rotation_matrix, std::clamp(rotations.x, min_rotations.x, max_rotations.x), direction_vectors[0]);
        rotation_matrix =
            glm::rotate(rotation_matrix, std::clamp(rotations.y, min_rotations.y, max_rotations.y), direction_vectors[1]);
        rotation_matrix =
            glm::rotate(rotation_matrix, std::clamp(rotations.z, min_rotations.z, max_rotations.z), direction_vectors[2]);

        // translation_matrix = glm::translate(
        //    glm::mat4(1.0), glm::vec3(glm::normalize(rotation_matrix * glm::vec4(0.0, 0.0, 0.0, 1.0))) * length);

        //// if this joint does not have a parent, its current_position should be set by moving the model as a whole
        // if (parent != nullptr) current_position = glm::vec4(parent->current_position) * translation_matrix;

        if (parent != nullptr)
            transformation_matrix =
                parent->create_transform_matrices() * offset_matrix_inv * rotation_matrix * offset_matrix;
        else
            transformation_matrix = offset_matrix_inv * rotation_matrix * offset_matrix;

        //*translation_matrix;
        transform_calculated = true;

        return transformation_matrix;
    }

    void clear_transform() { transform_calculated = false; }

    // glm::vec3 get_current_position()
    //{
    //    // get highest parent position and figure out your position based off that
    //}
};

// mat3 direction_vectors (forwards, left, up, gotten from parent)
// vec3 rotations (around the 3 dir_vecs, given based on animation)
// vec3 position (in worldspace, calculated)
// vec3 original position

// vec3 min_rotations (minimum angle relative to dir_vecs)
// vec3 max_rotations (maximum angle relative to dir_vecs)

// queue for animation progression?