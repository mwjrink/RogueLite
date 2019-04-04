#ifndef GL3W_INCLUDED
#define GL3W_INCLUDED
#include <GL/gl3w.h>
#endif

#include <chrono>
#include <fstream>
#include <iostream>

// NOT REQUIRED
#include <cstdio>
#include <cstdlib>
#include <ctime>

#include "DebugUtilities.h"
#include "Graphics.h"
#include "MainLoopCallbacks.h"
#include "WindowCallbacks.h"
#include "stb_image.h"

#ifdef _WIN32
// Math functions
#define _USE_MATH_DEFINES
#endif

int g_width, g_height;

void Update(float dt);
void Render(float dt);

int main(int argc, char* argv[])
{
    if (!Init(1920, 1080))
    {
        std::cin.get();
        return -1;
    }

    Shader_Init();

    // FULLSCREEN
    // GLFWwindow* window = glfwCreateWindow(640, 480, "My Title",
    // glfwGetPrimaryMonitor(), NULL);

    long frames = 0;

    // double t0 = glfwGetTime();
    // double t1;
    // float  dt;

    glfwSwapInterval(1);

    double time_start = glfwGetTime();
    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(ALL_BUFFERS);  // Clear initial state

        glUseProgram(shaderProgram);

        // t1 = glfwGetTime();
        // dt = (float)(t1 - t0);
        // t0 = t1;

        // Update(dt);
        // Render(dt);

        // do shit?
        //  WRITE TO FRAME BUFFER

        glBindVertexArray(VAO);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
        glBindVertexArray(0);

        /*TIME_THIS(glBlitFramebuffer(0, 0, g_width, g_height, 0, 0, g_width, g_height, GL_COLOR_BUFFER_BIT, GL_NEAREST);,
         * "blit");*/

        TIME_THIS(glfwSwapBuffers(window);, "swap");

        frames++;

        // pretty sure this is unessecary
        // TIME_THIS(glFinish();, "glfinish");

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
