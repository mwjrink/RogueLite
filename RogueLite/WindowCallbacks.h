#pragma once

void KeyCallback(GLFWwindow* Window, int Key, int Scancode, int Action, int Mods)
{
    if (Key == GLFW_KEY_ESCAPE) glfwSetWindowShouldClose(Window, true);
}

void MouseButtonCallback(GLFWwindow* Window, int Button, int Action, int Mods) {}

void MouseMoveCallback(GLFWwindow* Window, double X, double Y) {}

void FramebufferSizeCallback(GLFWwindow* Window, int Width, int Height)
{
    //g_width  = Width;
    //g_height = Height;

    glViewport(0, 0, Width, Height);
}
