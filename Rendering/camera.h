#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/string_cast.hpp>

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

#include "creature.h"

class Camera
{
    Creature* lock_focus;
    glm::vec3 lock_offset;
    // glm::vec3 looking_dir;

  public:
    Camera(glm::vec3 lock_offset) : lock_offset(lock_offset), lock_focus(nullptr) {}

    glm::mat4 get_view_matrix()
    {
        /*glm::lookAt(glm::vec3(0.0f, -10.0f, 10.0f), glm::vec3(0.0f, -10.0f, 10.0f) + glm::vec3(0.0f, 1.0f, -1.0f),
                    glm::vec3(0.0f, 1.0f, 1.0f));*/
        // set z to 0 for lock_focus??
        return glm::lookAt(lock_focus->get_position() + lock_offset, lock_focus->get_position(),
                           glm::vec3(0.0f, 1.0f, 1.0f));
    }

    void lock_camera_to(Creature* new_focus) { lock_focus = new_focus; }
};