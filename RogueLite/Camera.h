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

void UpdateViewMatrix(glm::mat4& view_matrix, glm::vec2 position, float zoom)
{
    view_matrix = glm::translate(glm::mat4(1.0f), glm::vec3(-position, 0));
    view_matrix = glm::scale(view_matrix, glm::vec3(zoom, zoom, 0.0f));
}

glm::vec2 WorldToScreen(glm::vec2 position, glm::vec2 camera_position, float zoom)
{
    position += camera_position;
    position /= zoom;
    return position;
}

glm::vec2 ScreenToWorld(glm::vec2 position, glm::vec2 camera_position, float zoom)
{
    position *= zoom;
    position += camera_position;
    return position;
}

void LockCamera(Camera& camera, Renderable r)
{
    glm::vec2 new_position;
    new_position.x = r.position.x + r.size.x / 2 - graphics::Window_Width / 2 / camera.zoom;
    new_position.y = r.position.y + r.size.y / 2 - graphics::Window_Height / 2 / camera.zoom;

    // could do std::min and std::max but this way saves the memory setting most of the time
    if (new_position.x < 0) new_position.x = 0;
    if (new_position.y < 0) new_position.y = 0;

	if (new_position.x > world::width - graphics::Window_Width / camera.zoom)
        new_position.x = world::width - graphics::Window_Width / camera.zoom;
    if (new_position.y > world::height - graphics::Window_Height / camera.zoom)
        new_position.y = world::height - graphics::Window_Height / camera.zoom;

    // accounts for projection matrix being full screen size
    camera.position = new_position * camera.zoom;
}
