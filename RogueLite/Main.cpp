#pragma once

#ifndef GL3W_INCLUDED
#define GL3W_INCLUDED
#include <GL/gl3w.h>
#include <GL/glcorearb.h>
#include <GL/src/gl3w.c>
#endif

#include <GLFW/glfw3.h>

//#include <thread>

#include "Camera.h"
#include "Graphics.h"
#include "InputManager.h"
#include "MainLoopCallbacks.h"
#include "World.h"

Renderable r;
Camera     camera;

auto INIT_TEST_SPRITE()
{
    r.tile_sheet = Create_TileSheet(LoadTexture("Resources/SpriteSheet.png", false), glm::ivec2(4, 4));
    // r.position   = glm::vec2(1720.0f, 980.0f);
    r.position           = glm::vec2(500.0f, 300.0f);
    r.size               = glm::vec2(100.0f, 100.0f);
    r.scale              = 1.0f;
    r.current_tile_index = 0;

    world::current_level        = level::Level();
    world::current_level.map    = level::base_map;
    world::current_level.width  = 24.0f;
    world::current_level.height = 17.0f;

    world::width  = 2880.0f;
    world::height = 2040.0f;

    input::delegate_type dLambda = [](int key, int action) {
        if (key == GLFW_KEY_W) r.position.y += 15;
        if (key == GLFW_KEY_A) r.position.x -= 15;
        if (key == GLFW_KEY_S) r.position.y -= 15;
        if (key == GLFW_KEY_D) r.position.x += 15;
    };
    input::copy_add(GLFW_KEY_W, &dLambda);
    input::copy_add(GLFW_KEY_A, &dLambda);
    input::copy_add(GLFW_KEY_S, &dLambda);
    input::copy_add(GLFW_KEY_D, &dLambda);

    level::Init(&world::current_level);
}

int main(int argc, char* argv[])
{
    if (!graphics::Init(1920, 1080)) return -1;

    input::delegate_type dLambda = [](int key, int action) { glfwSetWindowShouldClose(graphics::window, true); };
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

    // VSYNC: 1 = enabled, 0 = disabled
    glfwSwapInterval(1);

    unsigned int frames = 0;
    while (!glfwWindowShouldClose(graphics::window))
    {
        t1 = glfwGetTime();
        dt = (float)(t1 - t0);
        t0 = t1;

        frames += (int)(1.0f / dt);
        frames /= 2;

        LockCamera(camera, r);

        Update(dt);
        Render(r, camera);

        glfwPollEvents();
    }

    graphics::Cleanup();

    // Not necessary due to terminate
    // glfwDestroyWindow(window);

    glfwTerminate();

    return 0;
}

void handle_escape(int key, int action) { glfwSetWindowShouldClose(graphics::window, true); }
