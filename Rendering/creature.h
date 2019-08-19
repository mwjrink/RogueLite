#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <String>
#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

#include "animation_manager.h"
#include "matrix_helper.h"
#include "model.h"
#include "render_helper.h"
#include "shader.h"

#define amax(x, y) (std::abs(x) < std::abs(y)) ? y : x
#define PI 3.14159265359f

using namespace std;

enum Collision_Index
{
    Physical    = 1 << 0,
    Underground = 1 << 1,
    Above       = 1 << 2,
    Corporeal   = 1 << 3
};

class Creature
{
  private:
    Model model;
    int   max_health;
    int   current_health;

    float speed;

    // Entity
    glm::vec3 velocity;
    glm::vec3 direction;
    // float           mass;
    // float           inverse_mass;
    // Collision_Index collision_index;
    glm::vec3 position;
    // bool*           collision_map;
    // unsigned int    collision_map_width, collision_map_height;
    // unsigned int    bounding_box_width, bounding_box_height;

    // Renderable
    // glm::vec2 size;
    // glm::vec3 color;
    // float degrees_rotation = 0.0f;
    float scale = 1.0f;

    Animation_Manager animation_manager;
    // vector<Animation> animations; // probably make this a map so you can play an animation by its key
    Animation* walking;

  public:
    // TODO @Max, remove this later, this is currently just so I can make a global variable then assign the value in the
    // contructor
    Creature() {}

    Creature(string model_name) : model(model_name), max_health(100), current_health(100), speed(2.5f)
    {
        position  = glm::vec3(0.0f);
        velocity  = glm::vec3(0.0f);
        direction = glm::vec3(0.0f, -1.0f, 0.0f);

        // Testing Animations

        // Animation(vector<Frame> animation_frames, vector<string> affected_joints, vector<int> current_frame_index,
        // functions function, bool reversible, float cancellable_before, float cancellable_after, float max_time)
        auto animation_frames = vector<Animation::Frame>();
        animation_frames.push_back(Animation::Frame{1, 0.0f, 0.0f, 0.0f, 30.0f});
        animation_frames.push_back(Animation::Frame{2, 0.5f, 0.0f, 0.0f, -30.0f});
        animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 30.0f});

        animation_frames.push_back(Animation::Frame{4, 0.0f, 0.0f, 0.0f, -30.0f});
        animation_frames.push_back(Animation::Frame{5, 0.5f, 0.0f, 0.0f, 30.0f});
        animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -30.0f});

        animation_frames.push_back(Animation::Frame{7, 0.0f, 0.0f, 0.0f, 0.0f});
        animation_frames.push_back(Animation::Frame{8, 0.25f, 0.0f, 0.0f, -30.0f});
        animation_frames.push_back(Animation::Frame{9, 0.5f, 0.0f, 0.0f, 0.0f});
        animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 0.0f});

        animation_frames.push_back(Animation::Frame{11, 0.0f, 0.0f, 0.0f, 0.0f});
        animation_frames.push_back(Animation::Frame{12, 0.5f, 0.0f, 0.0f, 0.0f});
        animation_frames.push_back(Animation::Frame{13, 0.75f, 0.0f, 0.0f, -30.0f});
        animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 0.0f});

        auto affected_joints = vector<string>();
        affected_joints.push_back("Armature_Thigh_L");
        affected_joints.push_back("Armature_Thigh_R");
        affected_joints.push_back("Armature_Shin_L");
        affected_joints.push_back("Armature_Shin_R");

        auto current_frame_index = vector<int>();
        current_frame_index.push_back(0);
        current_frame_index.push_back(3);
        current_frame_index.push_back(6);
        current_frame_index.push_back(10);

        walking = new Animation(animation_frames, affected_joints, current_frame_index, Animation::functions::sin, false, 0.0f,
                            1.0f, 1.0f);

        // Animation_Manager(Animation* current_anim, Animation* buffered_anim, Animation* default_anim, Mesh* editable, bool
        // repeating)
        animation_manager = Animation_Manager(walking, nullptr, nullptr, &model.meshes[0], true);
    }

    void set_unit_velocity_up(int _, int __) { velocity.y++; }
    void set_unit_velocity_down(int _, int __) { velocity.y--; }
    void set_unit_velocity_left(int _, int __) { velocity.x--; }
    void set_unit_velocity_right(int _, int __) { velocity.x++; }
    void stop_velocity_up(int _, int __) { velocity.y--; }
    void stop_velocity_down(int _, int __) { velocity.y++; }
    void stop_velocity_left(int _, int __) { velocity.x++; }
    void stop_velocity_right(int _, int __) { velocity.x--; }

    void update(float dt)
    {
        if (velocity[0] != 0.0f || velocity[1] != 0.0f)
        {
            direction = glm::normalize(velocity);
            position += direction * speed * dt;

            // Play walking animation
            animation_manager.update(dt);
        }
        else
        {
            // Play idle animation
        }

        if (velocity[2] != 0.0f)
        {
            // Play jumping or falling?
            // I think this is unecessary as when you jump the animation will play
        }
    }

    void render(const glm::mat4& projection, const glm::mat4& view, Shader& shader, Shader& outline_shader,
                const bool& outlines_enabled, const float& outline_width)
    {
        auto model_matrix = glm::mat4(1.0f);
        model_matrix      = glm::translate(model_matrix, position);
        model_matrix =
            glm::scale(model_matrix, glm::vec3(scale, scale, scale));  // it's a bit too big for our scene, so scale it down

        auto rot_mat  = glm::mat4(1.0);
        rot_mat[0][0] = -direction.y;
        rot_mat[1][1] = -direction.y;
        rot_mat[0][1] = direction.x;
        rot_mat[1][0] = -direction.x;

        model_matrix = model_matrix * rot_mat;

        render_model(model, model_matrix, projection, view, shader, outline_shader, outlines_enabled, outline_width);
    }

    void set_scale(float new_value) { scale = new_value; }
};