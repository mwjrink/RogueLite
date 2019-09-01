#pragma once

//#include <glad/glad.h>  // holds all OpenGL type declarations
//
#include <glm/glm.hpp>
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtx/string_cast.hpp>

//#include "Joint.h"
//#include "shader.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

#include "animation.h"
#include "mesh.h"

using namespace std;

#define PI 3.14159265359f

class Animation_Manager
{
  public:
    Animation* current_anim;
    Animation* buffered_anim;
    Animation* default_anim;
    Mesh*      editable;
    float      current_time;
    float      maximum_angular_velocity;
    bool       repeating;
    bool       transitioning;

    // TODO @Max, remove this later, this is currently just so I can make a global variable then assign the
    // value in the constructor
    Animation_Manager() {}

    Animation_Manager(Animation* current_anim, Animation* buffered_anim, Animation* default_anim, Mesh* editable,
                      bool repeating, float maximum_angular_velocity)
        : current_anim(current_anim),
          buffered_anim(buffered_anim),
          default_anim(default_anim),
          editable(editable),
          current_time(0.0f),
          repeating(repeating),
          maximum_angular_velocity(maximum_angular_velocity),
          transitioning(false)
    {
    }

    // vector<string> joints_in_next_anim
    // (its possible that parts of the current anim get transitioned into the next one without every joint doing so)
    // at the end of a roll, your arms could be performing an overhead swing while your legs are still standing you up

    void update(float dt)
    {
        // this slows the animation so that I can analyze it
        current_time += dt;  // * 0.25f;
        if (transitioning)
        {
            bool transitioned = true;
            for (auto i = 0; i < current_anim->indexer.size(); i++)
            {
                auto transition_to   = buffered_anim->rotation_frames[buffered_anim->indexer[i].rotation_frame_index];
                // while (final_frame.next_frame != -1) final_frame = current_anim->animation_frames[final_frame.next_frame];

                Joint& affected_joint = editable->get_joint(current_anim->indexer[i].joint_name);

                // TODO: @Max; .quat.x is completely wrong I just want it to stop yelling at me about errors
                if (affected_joint.get_rotation() != transition_to.quat)
                {
            // min(affected_joint.get_x_axis_rotation() + maximum_angular_velocity * dt, transition_to.quat.x));
                    auto angle_current = glm::angle(affected_joint.get_rotation());
                    affected_joint.set_rotation(glm::slerp(affected_joint.get_rotation(), transition_to.quat, ));

                    transitioned = false;
                }
            }

			if (transitioned)
            {
                if (buffered_anim != nullptr)
                    current_anim = buffered_anim;
                else
                    current_anim = default_anim;
                // this should only be necessary so that buffered_anim doesn't get repeated indefinitely
                buffered_anim = nullptr;
                transitioning = false;
			}
        }
        else if (current_time >= current_anim->duration)
        {
            // Move mesh to final frame of motion

//            for (auto i = 0; i < current_anim->indexer.size(); i++)
//            {
//                auto final_frame = current_anim->rotation_frames[current_anim->indexer[i].rotation_frame_index];
//                while (final_frame.next_frame != -1) final_frame = current_anim->animation_frames[final_frame.next_frame];
//
//                Joint& affected_joint = editable->get_joint(current_anim->affected_joints[i]);
//                // TODO: @Max; .quat.x is completely wrong I just want it to stop yelling at me about errors
//                affected_joint.set_x_axis_rotation(final_frame.quat.x);
//                affected_joint.set_y_axis_rotation(final_frame.quat.x);
//                affected_joint.set_z_axis_rotation(final_frame.quat.x);
//            }

            if (!repeating)
                if (buffered_anim == nullptr) buffered_anim = default_anim;

            current_time = 0.0f;
        }
        else
        {
            for (auto i = 0; i < current_anim->indexer.size(); i++)
            {
                auto             current_frame = current_anim->rotation_frames[current_anim->indexer[i].rotation_frame_index];
                Animation::Rotation_Frame next_frame;

                while (true)
                {
                    if (current_frame.next_frame < 0)
                    {
                        // 12 is brighter
                        //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                        cout << "ERROR, animation does not have a final frame." << endl;
                        //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);  // I think this is the default
                        return;
                    }

                    next_frame = current_anim->rotation_frames[current_frame.next_frame];

                    if (next_frame.time_stamp <= current_time)
                        current_frame = next_frame;
                    else
                        break;
                }

                Joint& affected_joint = editable->get_joint(current_anim->indexer[i].joint_name);

                frame_transition(affected_joint, current_frame, next_frame, false);
            }
        }
    }

    void buffer_animation(Animation* new_animation)
    {
        buffered_anim = new_animation;
        repeating     = false;
    }

  private:
    void frame_transition(Joint& affected_joint, Animation::Rotation_Frame& current_rotation_frame, Animation::Rotation_Frame& next_rotation_frame, Animation::Position_Frame current_position_frame, Animation::Position_Frame next_position_frame, Animation::Scale_Frame current_scale_frame, Animation::Scale_Frame next_scale_frame, bool asap)
    {
        auto percent_time_delta =;
        
        affected_joint.set_rotation(glm::slerp(current_rotation_frame.quat, next_rotation_frame.quat, (current_time - current_rotation_frame.time_stamp)/(next_rotation_frame.time_stamp - current_rotation_frame.time_stamp)));
        
        affected_joint.set_scale(glm::mix(current_scale_frame.scale, next_scale_frame.scale, (current_time - current_scale_frame.time_stamp)/(next_scale_frame.time_stamp - current_scale_frame.time_stamp)));
        
        affected_joint.set_position(glm::mix(current_position_frame.position, next_position_frame.position,(current_time - current_position_frame.time_stamp)/(next_position_frame.time_stamp - current_position_frame.time_stamp)));
    }
};

// to align the animations transition time we need to find the points of intersection between 2 3D surfaces
// the transition point might be different for each joint
