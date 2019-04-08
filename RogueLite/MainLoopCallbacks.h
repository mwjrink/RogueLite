#pragma once

#include "Graphics.h"
#include "World.h"

void Update(float dt) {}

void Render(Renderable r)
{
    // glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);  // Clear initial state
                                   // glClear(ALL_BUFFERS);          // Clear initial state

    world::Render();
    graphics::DrawRenderable(r, graphics::shaderProgram);

    glfwSwapBuffers(graphics::window);
    return;
}
