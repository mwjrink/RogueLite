#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <String>
#include <vector>

using namespace std;

class Joint
{
    // parent Joint
    Joint* parent;
    // child joints, with positioning relative to this
    vector<Joint> children;

    // relative to world space
    glm::vec3 original_position;
    // length of the bone from parent joint to this joint
    const float length;

    glm::vec3 original_dir_vec;

    glm::vec3 current_position;

    glm::mat3 direction_vectors;

    glm::vec3 rotations;

    glm::vec3 min_rotations;
    glm::vec3 max_rotations;

    void push_child_back(Joint child)
    {
        children.push_back(child);
        child.parent = this;
    }

    glm::mat4 get_transform_matrix()
    {
        auto transform = glm::mat4(1.0f);
        transform      = glm::translate(transform, get_current_position() - original_position);

		original_position = parent->current_position + original_dir_vec * length;
		
		/*current_position + parent->current_position + original_dir_vec * length;*/

        transform = glm::rotate(transform, rotations.x, direction_vectors[0]);
        transform = glm::rotate(transform, rotations.y, direction_vectors[1]);
        transform = glm::rotate(transform, rotations.z, direction_vectors[2]);

        return transform;
    }

    glm::vec3 get_current_position()
    {
        // get highest parent position and figure out your position based off that
    }
};

// mat3 direction_vectors (forwards, left, up, gotten from parent)
// vec3 rotations (around the 3 dir_vecs, given based on animation)
// vec3 position (in worldspace, calculated)
// vec3 original position

// vec3 min_rotations (minimum angle relative to dir_vecs)
// vec3 max_rotations (maximum angle relative to dir_vecs)

// queue for animation progression?