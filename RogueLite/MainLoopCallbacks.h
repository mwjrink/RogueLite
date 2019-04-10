//#pragma once
//
//#include "Camera.h"
//#include "Graphics.h"
//#include "World.h"
//#include "Player.h"
//
//#include "DebugUtilities.h"
//
//inline void Update(float dt) {
//	player::move(world::player, dt);
//}
//
//inline void Render(Renderable r, Camera camera/*, Renderable* rs, int size*/)
//{
//    UpdateViewMatrix(camera.view_matrix, camera.position, camera.zoom);
//    graphics::SetViewMatrix(camera.view_matrix);
//
//    // Clear initial state
//    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
//    glClear(GL_COLOR_BUFFER_BIT);  // glClear(ALL_BUFFERS);
//
//    // TODO: this takes the most time by far
//    world::Render();
//    graphics::DrawRenderable(r, graphics::shaderProgram);
//
//    
//    /*for (int i = 0; i < size; i++)
//        graphics::DrawRenderable(rs[i], graphics::shaderProgram);*/
//    
//
//    graphics::DrawBatch();
//    glfwSwapBuffers(graphics::window);
//    return;
//}
