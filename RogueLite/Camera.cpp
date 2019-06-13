#include "Camera.h"

void UpdateViewMatrix(glm::mat4& view_matrix, glm::vec2 position, float zoom)
{
    view_matrix = glm::translate(glm::mat4(1.0f), glm::vec3(-position, 0));
    if (zoom != 1.0f) view_matrix = glm::scale(view_matrix, glm::vec3(zoom, zoom, 0.0f));

    //glm::lookAt(eye, center, glm::vec3(0.0f, 0.0f, 1.0f));
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
    // camera.position.x = (int)(camera.position.x+0.5);
    // camera.position.y = (int)(camera.position.y+0.5);
}

glm::vec4 get_viewport(Camera& c)
{
    auto result = glm::vec4(c.position.x + graphics::Window_Width * (1.0f - 1.0f / c.zoom) / 2.0f,
                            c.position.y + graphics::Window_Height * (1.0f - 1.0f / c.zoom) / 2.0f,  //.....
                            0.0f, 0.0f);

    result.z = result.x + graphics::Window_Width / c.zoom;
    result.w = result.y + graphics::Window_Height / c.zoom;

    return result;
}
