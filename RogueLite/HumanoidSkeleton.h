#pragma once

#include <llvm/ADT/SmallVector.h>
#include <math.h>
#include <glm/glm.hpp>

#include "Graphics.h"
#include "Renderable.h"

namespace proc_anim
{
    extern const glm::vec3 red;
    extern const glm::vec3 blu;
    extern const glm::vec3 gre;

    extern const float looking_angle_y_mult;

    extern const float rootThreeOverTwo;

    extern float heartToFootZ;

    class HumanoidSkeleton
    {
      public:
        struct Node
        {
            glm::vec3 position;
            glm::vec3 velocity;
            float     radius;

            Node() = default;

            Node(float x, float y, float z, float w) : position(x, y, z), velocity(0.0f), radius(w) {}
            // connections to other nodes and what kind of connection they are
        };

        // maybe use an acceleration vector and logarithmically average current velocity, acceleration and a friction value
        Renderable r;
        float      speed;
        float      arm_length;
        float      leg_length;
        float      shoulder_width;
        float      neck_length;
        float      torso_length;

        float calf_length;
        float thigh_length;
        float forearm_length;
        float upper_arm_length;
        /*
        float      chest_depth;
        float      waist_width;
        float      stomach_depth;
        float      forearm_width;
        float      upper_arm_width;
        float      thigh_width;
        float      calf_width;
        */

        bool left_planted = false;

        glm::vec3 facing_direction;
        glm::vec3 moving_direction;

        Node heart;

        Node head;

        Node left_shoulder;
        Node right_shoulder;

        Node left_elbow;
        Node right_elbow;

        Node left_hand;
        Node right_hand;

        Node pelvis;

        Node left_knee;
        Node right_knee;

        Node left_foot;
        Node right_foot;

        HumanoidSkeleton();
    };

    void move(HumanoidSkeleton& s, float dt, glm::vec3 curs_pos);

    void render(HumanoidSkeleton& s);

};  // namespace proc_anim
