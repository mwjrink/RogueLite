#pragma once

#include "Main.h"

Renderable r;
Camera     camera;

auto INIT_TEST_SPRITE()
{
    r.tile_sheet = Create_TileSheet(gltexture::AllocateTextureForLoading("Resources/SpriteSheet.png"), glm::ivec2(4, 4));
    // r.position   = glm::vec2(1720.0f, 980.0f);
    r.position           = glm::vec2(500.0f, 300.0f);
    r.size               = glm::vec2(48.0f, 48.0f);
    r.scale              = 1.0f;
    r.current_tile_index = 0;

    player::player_init(world::player);
    world::current_level        = level::Level();
    world::current_level.map    = level::base_map;
    world::current_level.width  = level::base_map_width;
    world::current_level.height = level::base_map_height;

    world::width  = 1920.0f;
    world::height = 1088.0f;

    level::Init(&world::current_level);

    gltexture::atlas_texture_id = gltexture::GenerateAtlas(false);
}

// void Process();
void Update(player::Player& p, float dt);
void Render(Renderable& r, Camera camera);
void Render(Renderable& r, Camera camera, Renderable* rs, int size);

int main(int argc, char* argv[])
{
    if (!graphics::Init(1920, 1080)) return -1;

    input::delegate_type dLambda = [](int key, int action) { glfwSetWindowShouldClose(graphics::window, true); };
    input::add_event(GLFW_KEY_ESCAPE, GLFW_PRESS, new input::delegate_type(dLambda));

    // TODO: thread pooling and work queue
    // auto thread_number = std::thread::hardware_concurrency();
    // if (thread_number == 0)
    //    fprintf(stderr, "failed to detect maximum concurrency");

    // TODO: FULLSCREEN
    // GLFWwindow* window = glfwCreateWindow(640, 480, "My Title",
    // glfwGetPrimaryMonitor(), NULL);

    INIT_TEST_SPRITE();

    /*
    const int        meme = 0001;
    auto renderables = new Renderable[meme];

    srand(time(NULL));

    renderables[0] = world::player;

    for (int i = 1; i < meme; i++)
    {
        renderables[i].tile_sheet         = r.tile_sheet;
        renderables[i].position		      = glm::vec2((rand() % 2880) / 3, (rand() % 2040) / 3);
        renderables[i].size               = glm::vec2(100.0f, 100.0f);
        renderables[i].scale              = ((rand() % 3) + 1) * 0.5;
        renderables[i].current_tile_index = rand() % 4;
    }
    */

    double t0 = glfwGetTime();
    double t1;
    float  dt;

    GLint big_boy_max;
    glGetIntegerv(GL_MAX_ARRAY_TEXTURE_LAYERS, &big_boy_max);
    std::cout << big_boy_max << std::endl;
    // GL_MAX_ARRAY_TEXTURE_LAYERS
    // Max: 2048
    // Nick:
    // GL_MAX_TEXTURE_SIZE
    // Max: 32768

    // VSYNC: 1 = enabled, 0 = disabled
    glfwSwapInterval(0);

    // std::stringstream frames_string;

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

        LockCamera(camera, world::player);

        // Process();

        // TODO: MAKE IT ANYTHING BUT THIS!

        Update(world::player, dt);
        // Render(r, camera, renderables, meme);

        // TODO pass or store a visible rect for render skipping
        // (only render whats visible/send it to GPU)
        Render(world::player, camera);

        // For precision, could run this continuously on main
        // thread until some other asynch op. is complete
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

// void Process() { input::update_controller(input::controller); }

void Update(player::Player& p, float dt)
{
    player::move(p, dt);
    update_animations(p, dt);
}

void Render(Renderable& r, Camera camera)
{
    UpdateViewMatrix(camera.view_matrix, camera.position, camera.zoom);
    graphics::SetViewMatrix(camera.view_matrix);

    // Clear initial state
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);  // glClear(ALL_BUFFERS);

    // TODO: this takes the most time by far
    world::Render();
    graphics::DrawRenderable(r, graphics::shaderProgram);

    graphics::DrawBatch();
    glfwSwapBuffers(graphics::window);
    return;
}

// TEST RENDER FUNCTION
void Render(Renderable& r, Camera camera, Renderable* rs, int size)
{
    UpdateViewMatrix(camera.view_matrix, camera.position, camera.zoom);
    graphics::SetViewMatrix(camera.view_matrix);

    // Clear initial state
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);  // glClear(ALL_BUFFERS);

    // TODO: this takes the most time by far
    world::Render();
    graphics::DrawRenderable(r, graphics::shaderProgram);

    for (int i = 0; i < size; i++) graphics::DrawRenderable(rs[i], graphics::shaderProgram);

    graphics::DrawBatch();
    glfwSwapBuffers(graphics::window);
    return;
}

void handle_escape(int key, int action) { glfwSetWindowShouldClose(graphics::window, true); }
