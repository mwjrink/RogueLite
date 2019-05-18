#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Graphics.h"
#include "Renderable.h"
#include "World.h"

class Camera
{
  public:
    glm::vec2 position;
    float     zoom = 1.0f;
    glm::mat4 view_matrix;
};

void UpdateViewMatrix(glm::mat4& view_matrix, glm::vec2 position, float zoom);

glm::vec2 WorldToScreen(glm::vec2 position, glm::vec2 camera_position, float zoom);

glm::vec2 ScreenToWorld(glm::vec2 position, glm::vec2 camera_position, float zoom);

void LockCamera(Camera& camera, Renderable r);

glm::vec4 get_viewport(Camera& c);
