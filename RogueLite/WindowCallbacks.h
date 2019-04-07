#pragma once

#include <GLFW/glfw3.h>
#include "Graphics.h"
#include "InputManager.h"

void KeyCallback(GLFWwindow* Window, int Key, int Scancode, int Action, int Mods)
{
    if (Key == GLFW_KEY_ESCAPE) glfwSetWindowShouldClose(Window, true);
    // if (Key == GLFW_KEY_W) r.position.y += 5;
    // if (Key == GLFW_KEY_A) r.position.x -= 5;
    // if (Key == GLFW_KEY_S) r.position.y -= 5;
    // if (Key == GLFW_KEY_D) r.position.x += 5;
}

void MouseButtonCallback(GLFWwindow* Window, int Button, int Action, int Mods) {}

void MouseMoveCallback(GLFWwindow* Window, double X, double Y) {}

void FramebufferSizeCallback(GLFWwindow* Window, int Width, int Height)
{
    /*Window_Width = Width;
    Window_Height = Height;*/

    glViewport(0, 0, Width, Height);
}
