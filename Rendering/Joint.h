#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <String>
#include <algorithm>
#include <iostream>
#include <vector>
#include <limits>

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

    // technically I shouldnt need these two to calculate the transforms

    // relative to world space
    // glm::vec4 original_position;
    // glm::vec4 original_dir_vec;
    glm::mat4 offset_matrix;
    glm::mat4 offset_matrix_inv;

    glm::vec4 current_position;

    glm::mat3x4 og_direction_vectors;
    glm::mat3   direction_vectors;

    glm::vec3 rotations = glm::vec3(0.0);

    glm::vec3 min_rotations = glm::vec3(numeric_limits<float>::min()); //glm::vec3(-6.28318530718f);
    glm::vec3 max_rotations = glm::vec3(numeric_limits<float>::max()); //glm::vec3(6.28318530718f);

    glm::mat4 rotation_matrix;
    glm::mat4 translation_matrix;
    glm::mat4 transformation_matrix;
    bool      transform_calculated = false;

    bool      rotation_vecs_generated = false;
    glm::mat4 rot_mat;
    glm::mat4 bone_transform;

    // technically min and max rotations should be here too, but IDK how to do this easily so I will fill it later :(
    // the right way to do this is to make a keyframe for the minimums and maximums then reading those angles in (FUCK THAT
    // THOUGH)
    Joint(unsigned int ID, std::string name, glm::mat4 offset_matrix, glm::mat4 bone_transform)
        : ID(ID),
          name(name),
          offset_matrix(offset_matrix),
          offset_matrix_inv(glm::inverse(offset_matrix)),
          bone_transform(bone_transform)
    {
        // Im hoping this will apply the roll from the bones on the mesh, to align the direction vectors accordingly
        // I likely need to calculate the default rotation, ie get the rotation value necessary to make the arms go
        // out the way they do by grabbing the elbow and shoulder and figuring out the rotation necessary to get the
        // elbow there from a position straight down.

        // In theory, if you make the right most column 0,0,0,1 that should remove the translation and leave just the
        // rotation, scale is irrelevant, but we could make the diagnal only ones, reflection is simply a negative scale
        // in a direction so that is covered.

        // Not sure why these offset matrices have anything but 0,0,0,1 as their bottom row but they do so
        // making the last row 0,0,0,1 will not have any effect on x,y,z components but will preserve 1 as the w component
        // doing this makes the matrix orthogonal and means it wont fuck up our direction vectors for rotation.
        // this->offset_matrix[3][0] = 0.0f;
        //      this->offset_matrix[3][1] = 0.0f;
        //      this->offset_matrix[3][2] = 0.0f;
    }

    void push_back_child(Joint* child)
    {
        child->parent = this;
        children.push_back(child);
    }

    void generate_rotation_vectors()
    {
        //if (!rotation_vecs_generated)
        {
            if (parent != nullptr)
            {
                parent->generate_rotation_vectors();
                bone_transform = parent->bone_transform * bone_transform;
            }

            auto val  = this->offset_matrix;
            val[3][0] = 0.0f;
            val[3][1] = 0.0f;
            val[3][2] = 0.0f;

            og_direction_vectors    = val * glm::mat3x4(1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.0, 1.0);
            //rotation_vecs_generated = true;
        }
    }

    void set_x_axis_rotation(float val) { rotations[0] = val; }
    void set_y_axis_rotation(float val) { rotations[1] = val; }
    void set_z_axis_rotation(float val) { rotations[2] = val; }

    void animate_x_axis_rotation(float val) { rotations[0] += val; }
    void animate_y_axis_rotation(float val) { rotations[1] += val; }
    void animate_z_axis_rotation(float val) { rotations[2] += val; }

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
        {
            parent->create_transform_matrices();
            direction_vectors = glm::mat3x4(parent->rotation_matrix * og_direction_vectors[0],
                                            parent->rotation_matrix * og_direction_vectors[1],
                                            parent->rotation_matrix * og_direction_vectors[2]);
        }
        else
            direction_vectors = glm::mat3x4(og_direction_vectors[0], og_direction_vectors[1], og_direction_vectors[2]);

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