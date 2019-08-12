#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "model.h"
#include "shader.h"

void render_model(Model model, glm::mat4 model_matrix, glm::mat4 projection, glm::mat4 view, Shader shader, Shader outline_shader, bool outlines_enabled, float outline_width)
{
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    glEnable(GL_STENCIL_TEST);
    glStencilFunc(GL_NOTEQUAL, 1, 0xFF);
    glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE);
    // glDepthFunc(GL_LEQUAL);

    // glEnable(GL_BLEND);
    // WTF?

    // glDepthFunc(GL_GEQUAL);
    glStencilFunc(GL_ALWAYS, 1, 0xFF);  // all fragments should update the stencil buffer
    glStencilMask(0xFF);                // enable writing to the stencil buffer
    {
        shader.use();
        shader.setMat4("projection", projection);
        shader.setMat4("view", view);
        shader.setMat4("model", model_matrix);
        model.Draw(shader);
    }

    // @Max, 7/15/19, probably gonna do outlining by scaling the 2d sprite and painting it black then painting
    // the real sprite to the screen rather than this, it will be far easier
    // glDepthFunc(GL_LEQUAL);
    if (outlines_enabled)
    {
        glStencilFunc(GL_NOTEQUAL, 1, 0xFF);  // all fragments should update the stencil buffer
        glStencilMask(0x00);                  // enable writing to the stencil buffer
        glDisable(GL_DEPTH_TEST);
        {
            outline_shader.use();
            outline_shader.setMat4("projection", projection);
            outline_shader.setMat4("view", view);
            outline_shader.setMat4("model", model_matrix);
            outline_shader.setFloat("outline_width", outline_width);
            model.Draw(outline_shader);
        }
        glStencilMask(0xFF);
        glEnable(GL_DEPTH_TEST);
    }
}