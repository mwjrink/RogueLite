#pragma once

//#include <glad/glad.h>  // holds all OpenGL type declarations
//
//#include <glm/glm.hpp>
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
            for (auto i = 0; i < current_anim->affected_joints.size(); i++)
            {
                auto transition_to   = buffered_anim->animation_frames[current_anim->current_frame_index[i]];
                // while (final_frame.next_frame != -1) final_frame = current_anim->animation_frames[final_frame.next_frame];

                Joint& affected_joint = editable->get_joint(current_anim->affected_joints[i]);

                if (affected_joint.get_x_axis_rotation() < transition_to.x_rotation)
                {
                    affected_joint.set_x_axis_rotation(
                        min(affected_joint.get_x_axis_rotation() + maximum_angular_velocity, transition_to.x_rotation));

                    transitioned = false;
                }

                if (affected_joint.get_y_axis_rotation() < transition_to.y_rotation)
                {
                    affected_joint.set_y_axis_rotation(
                        min(affected_joint.get_y_axis_rotation() + maximum_angular_velocity, transition_to.y_rotation));

                    transitioned = false;
                }

                if (affected_joint.get_z_axis_rotation() < transition_to.z_rotation)
                {
                    affected_joint.set_z_axis_rotation(
                        min(affected_joint.get_z_axis_rotation() + maximum_angular_velocity, transition_to.z_rotation));

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
        else if (current_time >= current_anim->max_time)
        {
            // Move mesh to final frame of motion

            for (auto i = 0; i < current_anim->affected_joints.size(); i++)
            {
                auto final_frame = current_anim->animation_frames[current_anim->current_frame_index[i]];
                while (final_frame.next_frame != -1) final_frame = current_anim->animation_frames[final_frame.next_frame];

                Joint& affected_joint = editable->get_joint(current_anim->affected_joints[i]);
                affected_joint.set_x_axis_rotation(final_frame.x_rotation);
                affected_joint.set_y_axis_rotation(final_frame.y_rotation);
                affected_joint.set_z_axis_rotation(final_frame.z_rotation);
            }

            if (!repeating)
                if (buffered_anim == nullptr) buffered_anim = default_anim;

            current_time = 0.0f;
        }
        else
        {
            for (auto i = 0; i < current_anim->affected_joints.size(); i++)
            {
                auto             current_frame = current_anim->animation_frames[current_anim->current_frame_index[i]];
                Animation::Frame next_frame;

                while (true)
                {
                    if (current_frame.next_frame < 0)
                    {
                        // 12 is brighter
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                        cout << "ERROR, animation does not have a final frame." << endl;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);  // I think this is the default
                        return;
                    }

                    next_frame = current_anim->animation_frames[current_frame.next_frame];

                    if (next_frame.start_time <= current_time)
                        current_frame = next_frame;
                    else
                        break;
                }

                Joint& affected_joint = editable->get_joint(current_anim->affected_joints[i]);

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
    void frame_transition(Joint& affected_joint, Animation::Frame current_frame, Animation::Frame next_frame, bool asap)
    {
        if (next_frame.function == Animation::functions::sin)
        {
            auto cos_func =
                (-cos(((current_time - current_frame.start_time) / (next_frame.start_time - current_frame.start_time)) *
                      PI) +
                 1.0f) /
                2.0f;

            // should do an if for efficiency if (next_frame.angle == current_frame.angle) set angle to angle or dont
            // do the cos normalizing

            affected_joint.set_x_axis_rotation(cos_func * (next_frame.x_rotation - current_frame.x_rotation) +
                                               current_frame.x_rotation);

            affected_joint.set_y_axis_rotation(cos_func * (next_frame.y_rotation - current_frame.y_rotation) +
                                               current_frame.y_rotation);

            affected_joint.set_z_axis_rotation(cos_func * (next_frame.z_rotation - current_frame.z_rotation) +
                                               current_frame.z_rotation);

            affected_joint.set_x_translation(cos_func * (next_frame.x_translation - current_frame.x_translation) +
                                             current_frame.x_translation);

            affected_joint.set_y_translation(cos_func * (next_frame.y_translation - current_frame.y_translation) +
                                             current_frame.y_translation);

            affected_joint.set_z_translation(cos_func * (next_frame.z_translation - current_frame.z_translation) +
                                             current_frame.z_translation);
        }
        else if (next_frame.function == Animation::functions::lin)
        {
            affected_joint.set_x_axis_rotation((current_time - current_frame.start_time) /
                                                   (next_frame.start_time - current_frame.start_time) *
                                                   (next_frame.x_rotation - current_frame.x_rotation) +
                                               current_frame.x_rotation);

            affected_joint.set_y_axis_rotation((current_time - current_frame.start_time) /
                                                   (next_frame.start_time - current_frame.start_time) *
                                                   (next_frame.y_rotation - current_frame.y_rotation) +
                                               current_frame.y_rotation);

            affected_joint.set_z_axis_rotation((current_time - current_frame.start_time) /
                                                   (next_frame.start_time - current_frame.start_time) *
                                                   (next_frame.z_rotation - current_frame.z_rotation) +
                                               current_frame.z_rotation);

            affected_joint.set_x_translation((current_time - current_frame.start_time) /
                                                 (next_frame.start_time - current_frame.start_time) *
                                                 (next_frame.x_translation - current_frame.x_translation) +
                                             current_frame.x_translation);

            affected_joint.set_y_translation((current_time - current_frame.start_time) /
                                                 (next_frame.start_time - current_frame.start_time) *
                                                 (next_frame.y_translation - current_frame.y_translation) +
                                             current_frame.y_translation);

            affected_joint.set_z_translation((current_time - current_frame.start_time) /
                                                 (next_frame.start_time - current_frame.start_time) *
                                                 (next_frame.z_translation - current_frame.z_translation) +
                                             current_frame.z_translation);
        }
    }
};

// to align the animations transition time we need to find the points of intersection between 2 3D surfaces
// the transition point might be different for each joint