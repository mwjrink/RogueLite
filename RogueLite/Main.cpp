#pragma once

#include "Main.h"

Renderable r;
Camera     camera;

auto INIT_TEST_SPRITE()
{
    /*
    r.tile_sheet = Create_TileSheet(AllocateTextureForLoading("Resources/SpriteSheet.png"), glm::ivec2(4, 4));
    // r.position   = glm::vec2(1720.0f, 980.0f);
    r.position           = glm::vec2(500.0f, 300.0f);
    r.size               = glm::vec2(100.0f, 100.0f);
    r.scale              = 1.0f;
    r.current_tile_index = 0;
	*/
    player::player_init(world::player);
    world::current_level        = level::Level();
    world::current_level.map    = level::base_map;
    world::current_level.width  = 24;
    world::current_level.height = 17;

    world::width  = 2880.0f;
    world::height = 2040.0f;

    level::Init(&world::current_level);

    atlas_texture_id = GenerateAtlas(false);
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

    /*
    const int        meme = 30000;
    auto renderables = new Renderable[meme];

    srand(time(NULL));

    for (int i = 0; i < meme; i++)
    {
        renderables[i].tile_sheet         = r.tile_sheet;
        renderables[i].position		      = glm::vec2(rand() % 2880, rand() % 2040);
        renderables[i].size               = glm::vec2(100.0f, 100.0f);
        renderables[i].scale              = ((rand() % 3) + 1) * 0.5;
        renderables[i].current_tile_index = rand() % 4;
    }
    */

    double t0 = glfwGetTime();
    double t1;
    float  dt;

    /*GLint big_boy_max;
    glGetIntegerv(GL_MAX_TEXTURE_SIZE, &big_boy_max);*/

    // VSYNC: 1 = enabled, 0 = disabled
    glfwSwapInterval(0);

    std::stringstream frames_string;

    unsigned int frames = 0;
    while (!glfwWindowShouldClose(graphics::window))
    {
        {
            t1 = glfwGetTime();
            dt = (float)(t1 - t0);
            t0 = t1;
        }

        /*
        {
            frames += (int)(1.0f / dt);
            frames /= 2;
            frames_string << frames << std::endl;
        }
        */

        LockCamera(camera, r);

        Update(dt);
        // Render(r, camera, renderables, meme);
        Render(world::player, camera);

        glfwPollEvents();
    }

    graphics::Cleanup();

    // delete[] renderables;

    // std::cout << frames_string.str();

    // Not necessary due to terminate
    // glfwDestroyWindow(window);

    glfwTerminate();

    return 0;
}

void handle_escape(int key, int action) { glfwSetWindowShouldClose(graphics::window, true); }
