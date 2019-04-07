#pragma once

#ifndef GL3W_INCLUDED
#define GL3W_INCLUDED
#include <GL/gl3w.h>
#endif

#include <GLFW/glfw3.h>
//#include <thread>

#include "Graphics.h"
#include "MainLoopCallbacks.h"

#include "BASESPRITETESTINGBLEH.h"

int main(int argc, char* argv[])
{
    if (!Init(1920, 1080))
    {
        std::cin.get();
        return -1;
    }

    // TODO: thread pooling and work queue
    // auto thread_number = std::thread::hardware_concurrency();
    // if (thread_number == 0)
    //    fprintf(stderr, "failed to detect maximum concurrency");

    // TODO: FULLSCREEN
    // GLFWwindow* window = glfwCreateWindow(640, 480, "My Title",
    // glfwGetPrimaryMonitor(), NULL);

    INIT_TEST_SPRITE();

    double t0 = glfwGetTime();
    double t1;
    float  dt;

    glfwSwapInterval(1);

    while (!glfwWindowShouldClose(window))
    {
        t1 = glfwGetTime();
        dt = (float)(t1 - t0);
        t0 = t1;

        Update(dt);
        Render(dt);

        // TODO: THIS SHOULD BE ON ANOTHER THREAD
        // THIS MUST BE ON THE MAIN THREAD APPARENTLY
        glfwPollEvents();
    }

    Cleanup();

    // Not necessary due to terminate
    // glfwDestroyWindow(window);

    glfwTerminate();

    return 0;
}
