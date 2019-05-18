#pragma once

#include <GLFW/glfw3.h>
#include "Graphics.h"
#include "InputManager.h"

inline void KeyCallback(GLFWwindow* Window, int Key, int Scancode, int Action, int Mods)
{
    input::handle_event(Key, Action);
}

inline void MouseButtonCallback(GLFWwindow* Window, int Button, int Action, int Mods) {}

inline void MouseMoveCallback(GLFWwindow* Window, double X, double Y) {}

inline void FramebufferSizeCallback(GLFWwindow* Window, int Width, int Height)
{
    // graphics::Window_Width  = Width;
    // graphics::Window_Height = Height;

    // graphics::SetProjectionMatrix();
    glViewport(0, 0, Width, Height);
}
