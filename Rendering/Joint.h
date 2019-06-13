#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <String>
#include <vector>

using namespace std;

class Joint
{
	// relatice to the highest parent, or world space if you are the highest parent
    const glm::vec3 original_position;
    const float length;
    // spherical coordinate position relative to parent Joint
    // (two angles, x-z, y-z where x is forwards facing direction for the char)
    glm::vec2 position;
    // parent Joint
    Joint* parent;
    // child joints, with positioning relative to this
    vector<Joint> children;

    void push_child_back(Joint child)
    {
        children.push_back(child);
        child.parent = this;
    }

	glm::mat4 get_transform_matrix() { auto transform = glm::mat4(1.0f);
        transform = glm::translate(transform, get_current_position() - original_position);
		// angle here is this plus parent and so on
        transform = glm::rotate(transform, position.x, glm::vec3(0.0f, 1.0f, 0.0f));
		// not rotate around z, but rather around parent
        transform = glm::rotate(transform, position.x, glm::vec3(0.0f, 0.0f, 1.0f));

		return transform;
	}
	
	glm::vec3 get_current_position() {
		// get highest parent position and figure out your position based off that
	}
};