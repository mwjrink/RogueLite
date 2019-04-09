#pragma once

#include "Camera.h"
#include "Graphics.h"
#include "World.h"

#include "DebugUtilities.h"

void Update(float dt) {}

void Render(Renderable r, Camera camera)
{
    UpdateViewMatrix(camera.view_matrix, camera.position, camera.zoom);
    graphics::SetViewMatrix(camera.view_matrix);

    // Clear initial state
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);  // glClear(ALL_BUFFERS);

    // TODO: this takes the most time by far
    world::Render();
    graphics::DrawBatch();

    graphics::DrawRenderable(r, graphics::shaderProgram);
    graphics::DrawBatch();

    glfwSwapBuffers(graphics::window);
    return;
}
