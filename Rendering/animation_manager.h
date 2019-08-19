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
    bool       repeating;

    // TODO @Max, remove this later, this is currently just so I can make a global variable then assign the
    // value in the contructor
    Animation_Manager() {}

    Animation_Manager(Animation* current_anim, Animation* buffered_anim, Animation* default_anim, Mesh* editable,
                      bool repeating)
        : current_anim(current_anim),
          buffered_anim(buffered_anim),
          default_anim(default_anim),
          editable(editable),
          current_time(0.0f),
          repeating(repeating)
    {
    }

    // vector<string> joints_in_next_anim
    // (its possible that parts of the current anim get transitioned into the next one without every joint doing so)
    // at the end of a roll, your arms could be performing an overhead swing while your legs are still standing you up

    void update(float dt)
    {
        current_time += dt;
        if (current_time >= current_anim->max_time)
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

                if (!repeating)
                {
                    if (buffered_anim != nullptr)
                        current_anim = buffered_anim;
                    else
                        current_anim = default_anim;
                    // this should only be necessary so that buffered_anim doesn't get repeated indefinitely
                    buffered_anim = nullptr;
                }
                current_time = 0.0f;
            }
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

                auto cos_func =
                    (-cos(((current_time - current_frame.start_time) / (next_frame.start_time - current_frame.start_time)) *
                          PI) +
                     1.0f) /
                    2.0f;

                Joint& affected_joint = editable->get_joint(current_anim->affected_joints[i]);

                affected_joint.set_x_axis_rotation(cos_func * (next_frame.x_rotation - current_frame.x_rotation) +
                                                   current_frame.x_rotation);

                affected_joint.set_y_axis_rotation(cos_func * (next_frame.y_rotation - current_frame.y_rotation) +
                                                   current_frame.y_rotation);

                auto zzz = cos_func * (next_frame.z_rotation - current_frame.z_rotation) + current_frame.z_rotation;
                cout << "Setting Z on " << current_anim->affected_joints[i] << " to :" << zzz << endl;
                affected_joint.set_z_axis_rotation(cos_func * (next_frame.z_rotation - current_frame.z_rotation) +
                                                   current_frame.z_rotation);

                // I think this works for decresing angles?
                // (-cos(current_time/max_time)+1)*(next_frame_angle-current_frame_angle)+current_frame_angle;
            }
        }
    }
};

// to align the animations transition time we need to find the points of intersection between 2 3D surfaces
// the transition point might be different for each joint