#pragma once

#include "Main.h"

Renderable r;
Camera camera;

auto INIT_TEST_SPRITE()
{
     r.tile_sheet = Create_TileSheet(gltexture::AllocateTextureForLoading("Resources/SpriteSheet.png"), glm::ivec2(4, 4));
    // r.position   = glm::vec2(1720.0f, 980.0f);
     r.position           = glm::vec2(500.0f, 300.0f);
     r.size               = glm::vec2(48.0f, 48.0f);
     r.scale              = 1.0f;
     r.current_tile_index = 0;

    player::player_init(world::player);

    //world::UpdateCurrentLevel(level::Load_Level("Maps/Town.tmx"));

    gltexture::atlas_texture_id = gltexture::GenerateAtlas(false);
}

// void Process();
void Update(float dt);
void Render(Camera camera);
// void Render(Renderable& r, Camera camera, physics::Entity* rs, int size);

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

    // const int meme     = 30000;
    // auto      entities = new physics::Entity[meme];

    // srand(time(NULL));

    // for (int i = 0; i < meme; i++)
    //{
    //    entities[i].tile_sheet          = r.tile_sheet;
    //    entities[i].position            = glm::vec2((rand() % (int)world::width), (rand() % (int)world::height));
    //    entities[i].size                = glm::vec2(100.0f, 100.0f);
    //    entities[i].bounding_box_width  = 100.0f;
    //    entities[i].bounding_box_height = 100.0f;
    //    entities[i].scale               = ((rand() % 3) + 1) * 0.5;
    //    entities[i].current_tile_index  = rand() % 4;
    //    quad_tree::add_entity(*world::collision_tree, &entities[i]);
    //}

    double t0 = glfwGetTime();
    double t1;
    float  dt;

    // GLint big_boy_max;
    // glGetIntegerv(GL_MAX_ARRAY_TEXTURE_LAYERS, &big_boy_max);
    // std::cout << big_boy_max << std::endl;
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

        // Process();

        // TODO: MAKE IT ANYTHING BUT THIS!

        Update(dt);
        // Render(world::player, camera, entities, meme);

        Render(camera);

        // For precision, could run this continuously on main
        // thread until some other asynch op. is complete
        glfwPollEvents();
    }

    graphics::Cleanup();

    // delete[] entities;

    // std::cout << frames_string.str();

    // Not necessary due to terminate
    // glfwDestroyWindow(window);

    glfwTerminate();

    return 0;
}

// void Process() { input::update_controller(input::controller); }

void Update(float dt)
{
    player::move(world::player, dt);
    update_animations(world::player, dt);
}

void Render(Camera camera)
{
    LockCamera(camera, world::player);

    UpdateViewMatrix(camera.view_matrix, camera.position, camera.zoom);
    graphics::SetViewMatrix(camera.view_matrix);

    // Clear initial state
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);  // glClear(ALL_BUFFERS);

    glm::vec4 viewport = get_viewport(camera);
    //auto      visible  = quad_tree::get_visible(*world::collision_tree, viewport);

    // TODO: this takes the most time by far
    world::Render();
    // for (auto e : visible) graphics::DrawRenderable(*e, graphics::shaderProgram);
    graphics::DrawRenderable(world::player, graphics::shaderProgram);

    graphics::DrawBatch();
    glfwSwapBuffers(graphics::window);
    return;
}

// TEST RENDER FUNCTION
// void Render(Renderable& r, Camera camera, physics::Entity* rs, int size)
//{
//    UpdateViewMatrix(camera.view_matrix, camera.position, camera.zoom);
//    graphics::SetViewMatrix(camera.view_matrix);
//
//    glm::vec4 viewport = get_viewport(camera);
//    auto      visible  = quad_tree::get_visible(*world::collision_tree, viewport);
//
//    // Clear initial state
//    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
//    glClear(GL_COLOR_BUFFER_BIT);  // glClear(ALL_BUFFERS);
//
//    // TODO: this takes the most time by far
//    world::Render();
//    graphics::DrawRenderable(r, graphics::shaderProgram);
//
//    for (auto e : visible) graphics::DrawRenderable(*e, graphics::shaderProgram);
//
//    graphics::DrawBatch();
//    glfwSwapBuffers(graphics::window);
//    return;
//}

void handle_escape(int key, int action) { glfwSetWindowShouldClose(graphics::window, true); }
