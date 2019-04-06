#pragma once

#include "BASESPRITETESTINGBLEH.h"
#include "Graphics.h"

void Update(float dt) {}

void Render(float dt)
{
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);  // Clear initial state
    // glClear(ALL_BUFFERS);          // Clear initial state

    DrawRenderable(r, shaderProgram);

    glfwSwapBuffers(window);
    return;
}
