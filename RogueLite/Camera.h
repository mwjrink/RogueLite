#pragma once

#include <glm/glm.hpp>
#include "Graphics.h"

class Camera
{
  public:
    glm::vec2 position;
    float     zoom;
    glm::mat4 view_matrix;
};

void UpdateViewMatrix(glm::mat4& view_matrix, glm::vec2 position, float zoom)
{
    view_matrix = glm::translate(glm::mat4(), glm::vec3(position, zoom));
    view_matrix = glm::scale(view_matrix, glm::vec3(zoom, zoom, 0.0f));
}

glm::vec2 WorldToScreen(glm::vec2 position, glm::vec2 camera_position, float zoom)
{
    position += camera_position;
    position /= zoom;
}

glm::vec2 ScreenToWorld(glm::vec2 position, glm::vec2 camera_position, float zoom)
{
    position *= zoom;
    position -= camera_position;
}

void MoveCamera(Camera camera, glm::vec2 offset)
{
    camera.position += offset;

    if (camera.position.x - offset.x < 0) camera.position.x = 0;
    if (camera.position.y - offset.y < 0) camera.position.y = 0;
	//TODO: ADD CASES FOR RIGHT/TOP OF WORLD
}
