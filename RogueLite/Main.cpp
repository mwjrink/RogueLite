#ifndef GL3W_INCLUDED
#define GL3W_INCLUDED
#include <GL/gl3w.h>
#endif

#include <GLFW/glfw3.h>
#include <stdio.h>
#include <GL/../../src/gl3w.c>
#include <chrono>
//#include <cstdint>
#include <fstream>
#include <iostream>
//#include <unordered_map>
//#include <math.h>

#ifdef _WIN32
// Math functions
#define _USE_MATH_DEFINES
#endif

unsigned int rbo_id;

int g_width, g_height;

GLFWwindow* window;

bool GL_Init();
bool GLFW_Init();

void KeyCallback(GLFWwindow* Window, int Key, int Scancode, int Action, int Mods);
void MouseButtonCallback(GLFWwindow* Window, int Button, int Action, int Mods);
void MouseMoveCallback(GLFWwindow* Window, double X, double Y);

void FramebufferSizeCallback(GLFWwindow* Window, int Width, int Height);

void Update(float dt);
void Render(float dt);

bool Init();

#define disable_timing true
#define TIME_THIS(T, D)                                                                           \
    {                                                                                             \
        if (disable_timing)                                                                       \
        {                                                                                         \
            T;                                                                                    \
        }                                                                                         \
        else                                                                                      \
        {                                                                                         \
            auto start = std::chrono::high_resolution_clock::now();                               \
            T;                                                                                    \
            auto stop     = std::chrono::high_resolution_clock::now();                            \
            auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);   \
            std::cout << "Time taken by " << D << ": " << duration.count() << " ns" << std::endl; \
        }                                                                                         \
    }

int main(int argc, char* argv[])
{
    if (!Init())
    {
        std::cin.get();
        return -1;
    }

    // FULLSCREEN
    // GLFWwindow* window = glfwCreateWindow(640, 480, "My Title",
    // glfwGetPrimaryMonitor(), NULL);

    long frames = 0;

    double t0 = glfwGetTime();
    double t1;
    float  dt;

    glfwSwapInterval(1);

    double time_start = glfwGetTime();
    while (!glfwWindowShouldClose(window))
    {
        // t1 = glfwGetTime();
        // dt = (float)(t1 - t0);
        // t0 = t1;

        // Update(dt);
        // Render(dt);

        // do shit?
        //  WRITE TO FRAME BUFFER

        /*TIME_THIS(glBlitFramebuffer(0, 0, g_width, g_height, 0, 0, g_width,
                                    g_height, GL_COLOR_BUFFER_BIT, GL_NEAREST);
                  , "blit");*/

        TIME_THIS(glfwSwapBuffers(window);, "swap");

        // PROPER RENDER LOOP

        //#define ALL_BUFFERS COLOR_BUFFER_BIT | DEPTH_BUFFER_BIT | STENCIL_BUFFER_BIT

        //   glClear(ALL_BUFFERS)  // Clear initial state
        //       glDraw...(...)    // Draw something to FBO 0 (window surface)

        //       glBindFramebuffer(
        //           1)  // Switch away from FBO 0, does not trigger rendering
        //       glClear(ALL_BUFFERS)  // Clear initial state
        //       glDraw...(...)        // Draw something to FBO 1
        //       ...                   // Draw FBO 1 to completion

        //       glBindFramebuffer(
        //           0)          // Switch to FBO 0, unbind and flush FBO 1 for rendering
        //       glDraw...(...)  // Draw something else to FBO 0 (window surface)

        //       glBindFramebuffer(
        //           2)  // Switch away from FBO 0, does not trigger rendering
        //       glClear(ALL_BUFFERS)  // Clear initial state
        //       glDraw...(...)        // Draw something to FBO 2
        //       ...                   // Draw FBO 2 to completion

        //       glBindFramebuffer(
        //           0)          // Switch to FBO 0, unbind and flush FBO 2 for rendering
        //       glDraw...(...)  // Draw something else to FBO 0 (window surface)
        //       eglSwapBuffers()  // Tell EGL we have finished, flush FBO 0 for
        //                         // rendering

        frames++;

        TIME_THIS(glFinish();, "glfinish");

        // THIS SHOULD BE ON ANOTHER THREAD
        // THIS MUST BE ON THE MAIN THREAD APPARENTLY
        TIME_THIS(glfwPollEvents();, "poll events");
    }

    // Not necessary due to terminate
    // glfwDestroyWindow(window);

    double end = glfwGetTime();

    glfwTerminate();

    printf("Framerate: %f\n", (double(frames) / double(end - time_start)));

    std::cin.get();

    return 0;
}

void Update(float dt) {}

void Render(float dt) { glClear(GL_COLOR_BUFFER_BIT); }

void KeyCallback(GLFWwindow* Window, int Key, int Scancode, int Action, int Mods)
{
    if (Key == GLFW_KEY_ESCAPE) glfwSetWindowShouldClose(Window, true);
}

void MouseButtonCallback(GLFWwindow* Window, int Button, int Action, int Mods) {}

void MouseMoveCallback(GLFWwindow* Window, double X, double Y) {}

void FramebufferSizeCallback(GLFWwindow* Window, int Width, int Height)
{
    g_width  = Width;
    g_height = Height;
}

bool GL_Init()
{
    unsigned int rbo;
    unsigned int fbo;

    glGenFramebuffers(1, &fbo);
    glGenRenderbuffers(1, &rbo);

    glBindRenderbuffer(GL_RENDERBUFFER, rbo);
    glRenderbufferStorage(GL_RENDERBUFFER, GL_RGBA8, g_width, g_height);

    glBindFramebuffer(GL_FRAMEBUFFER, fbo);
    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_RENDERBUFFER, rbo);

    auto errors = glGetError();
    auto status = glCheckFramebufferStatus(GL_FRAMEBUFFER);
    if (status != GL_FRAMEBUFFER_COMPLETE)
    {
        fprintf(stderr, "glCheckFramebufferStatus error 0x%x\n", status);
        return false;
    }

    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, 0);
    // glBindFramebuffer(GL_FRAMEBUFFER, 0);
    glBindFramebuffer(GL_READ_FRAMEBUFFER, fbo);

    if (errors != GL_NO_ERROR)
    {
        fprintf(stderr, "glGetError returned 0x%x\n", errors);
        return false;
    }

    // int red_size, green_size, blue_size, alpha_size;
    // glGetRenderbufferParameteriv(GL_RENDERBUFFER, GL_RENDERBUFFER_RED_SIZE,
    // &red_size); glGetRenderbufferParameteriv(GL_RENDERBUFFER,
    // GL_RENDERBUFFER_GREEN_SIZE, &green_size);
    // glGetRenderbufferParameteriv(GL_RENDERBUFFER, GL_RENDERBUFFER_BLUE_SIZE,
    // &blue_size); glGetRenderbufferParameteriv(GL_RENDERBUFFER,
    // GL_RENDERBUFFER_ALPHA_SIZE, &alpha_size);

    rbo_id = rbo;

    return true;
}

bool GLFW_Init()
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
    // glfwWindowHint(GLFW_DECORATED, GL_FALSE);
    glfwWindowHint(GLFW_FOCUSED, GL_TRUE);
    glfwWindowHint(GLFW_DOUBLEBUFFER, GL_TRUE);
    // glfwWindowHint(GLFW_REFRESH_RATE, 30);

    window = glfwCreateWindow(1920, 1080, "Hello World!", nullptr, nullptr);
    if (!window)
    {
        fprintf(stderr, "glfwCreateWindow() failed.\n");
        glfwTerminate();
        return false;
    }

    glfwMakeContextCurrent(window);
    glfwGetFramebufferSize(window, &g_width, &g_height);

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

bool Init()
{
    if (!GLFW_Init()) return false;
    if (!GL_Init()) return false;
    return true;
}
