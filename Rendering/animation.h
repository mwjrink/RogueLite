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

#include "mesh.h"

using namespace std;

class Animation
{
  public:
    enum functions
    {
        lin,
        exp,
        sin
    };

  private:
    struct Frame
    {
        int       next_frame;
        float     end_time;
        float     x_rotation;  // radians
        float     y_rotation;  // radians
        float     z_rotation;  // radians
        functions function;
    };

    vector<Frame>  animation_frames;
    vector<string> affected_joints;
    vector<int>    current_frame_index;
    functions      function;
    bool           reversible;
    float          cancellable_before;
    float          cancellable_after;
    float          max_time;  // end_time

    float current_time;

	// bool repeat (part of animation manager)
    Animation(vector<string> affected_joints, vector<float> x_rotations, vector<float> y_rotations,
              vector<float> z_rotations, vector<float> times, functions function, float max_time, float cancellable_before,
              float cancellable_after, bool reversible)
        : function(function),
          reversible(reversible),
          current_time(0),
          cancellable_before(cancellable_before),
          cancellable_after(cancellable_after),
          max_time(max_time),
          affected_joints(affected_joints)
    {
        /*key_frames.reserve(joint_names.size());
        for (int i = 0; i < joint_names.size(); i++)
        {

        }
        key_frames[i] = state{joint_names[i], x_rotations[i], y_rotations[i], z_rotations[i], times[i]};*/
    }

    void start_animation(Mesh mesh) {}

    // load animation from file
    // parse animation from text
    // apply animation to mesh
};