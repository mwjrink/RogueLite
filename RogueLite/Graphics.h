#pragma once

#include <stdio.h>
#include <GLFW/glfw3.h>
#include <GL/../../src/gl3w.c>

#include "WindowCallbacks.h"

#define ALL_BUFFERS GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT

GLFWwindow* window;

bool GL_Init()
{
    unsigned int fbo = 0;

    //glGenFramebuffers(1, &fbo);
    glBindFramebuffer(GL_FRAMEBUFFER, fbo);

    auto errors = glGetError();
    auto status = glCheckFramebufferStatus(GL_FRAMEBUFFER);
    if (status != GL_FRAMEBUFFER_COMPLETE)
    {
        fprintf(stderr, "glCheckFramebufferStatus error 0x%x\n", status);
        return false;
    }

    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, 0);
    glBindFramebuffer(GL_READ_FRAMEBUFFER, fbo);
    // glBindFramebuffer(GL_FRAMEBUFFER, 0);

    if (errors != GL_NO_ERROR)
    {
        fprintf(stderr, "glGetError returned 0x%x\n", errors);
        return false;
    }

    return true;
}

bool GLFW_Init(int w_width, int w_height)
{
    if (!glfwInit())
    {
        fprintf(stderr, "glfwInit() failed.\n");
        return false;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
    glfwWindowHint(GLFW_FOCUSED, GL_TRUE);
    glfwWindowHint(GLFW_DOUBLEBUFFER, GL_TRUE);

    window = glfwCreateWindow(w_width, w_height, "Hello World!", nullptr, nullptr);
    if (!window)
    {
        fprintf(stderr, "glfwCreateWindow() failed.\n");
        glfwTerminate();
        return false;
    }

    glfwMakeContextCurrent(window);
    glfwGetFramebufferSize(window, &w_width, &w_height);

    if (gl3wInit())
    {
        fprintf(stderr, "gl3wInit() failed.\n");
        return false;
    }

    if (!gl3wIsSupported(4, 6))
    {
        fprintf(stderr, "Opengl 4.6 not supported.\n");
        return false;
    }

    printf("OpenGL %s, GLSL %s\n", glGetString(GL_VERSION), glGetString(GL_SHADING_LANGUAGE_VERSION));

    glfwSetKeyCallback(window, KeyCallback);
    glfwSetMouseButtonCallback(window, MouseButtonCallback);
    glfwSetCursorPosCallback(window, MouseMoveCallback);
    glfwSetFramebufferSizeCallback(window, FramebufferSizeCallback);

    return true;
}

bool Init(int w_width, int w_height)
{
    if (!GLFW_Init(w_width, w_height)) return false;
    if (!GL_Init()) return false;
    return true;
}
