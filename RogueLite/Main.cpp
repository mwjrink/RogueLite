#pragma once

#ifndef GL3W_INCLUDED
#define GL3W_INCLUDED
#include <GL/gl3w.h>
#endif

#include <GLFW/glfw3.h>
//#include <thread>

#include "Graphics.h"
#include "InputManager.h"
#include "MainLoopCallbacks.h"
#include "World.h"

Renderable r;

auto INIT_TEST_SPRITE()
{
    r.tile_sheet = Create_TileSheet(LoadTexture("Resources/SpriteSheet.png", false), glm::ivec2(4, 4));
    // r.position   = glm::vec2(1720.0f, 980.0f);
    r.position           = glm::vec2(900.0f, 500.0f);
    r.size               = glm::vec2(100.0f, 100.0f);
    r.scale              = 1.0f;
    r.current_tile_index = 0;

    world::current_level        = level::Level();
    world::current_level.map    = level::base_map;
    world::current_level.width  = 16;
    world::current_level.height = 9;

    // input::delegate_type dLambda = [](int key, int action) {
    //    if (key == GLFW_KEY_W) r.position.y += 5;
    //    if (key == GLFW_KEY_A) r.position.x -= 5;
    //    if (key == GLFW_KEY_S) r.position.y -= 5;
    //    if (key == GLFW_KEY_D) r.position.x += 5;
    //};
    // input::copy_add(GLFW_KEY_W, &dLambda);
    // input::copy_add(GLFW_KEY_A, &dLambda);
    // input::copy_add(GLFW_KEY_S, &dLambda);
    // input::copy_add(GLFW_KEY_D, &dLambda);
    // input::copy_add(GLFW_KEY_D, &dLambda);

    level::Init(&world::current_level);
}

int main(int argc, char* argv[])
{
    if (!Init(1920, 1080))
    {
        std::cin.get();
        return -1;
    }

    input::delegate_type dLambda = [](int key, int action) { glfwSetWindowShouldClose(window, true); };
    input::add(GLFW_KEY_ESCAPE, new input::delegate_type(dLambda));

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
        Render(r);

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

void handle_escape(int key, int action) { glfwSetWindowShouldClose(window, true); }
