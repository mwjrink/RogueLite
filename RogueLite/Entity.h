#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Renderable.h"

/// Physics Logic
class Entity : Renderable
{
    glm::vec3       velocity;
    float           mass;
    //Collision_Index collision_index;
};

// BITWISE
// enum Collision_Index
//{
//    Physical    = 1 << 0,
//    Underground = 1 << 1,
//    Above       = 1 << 2,
//    Corporeal   = 1 << 3
//};
