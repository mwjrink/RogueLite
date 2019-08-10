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

using namespace std;

class animation
{
  private:
    struct state
    {
        string joint_name;
        // potentially use out of range values to determine if angle matters or not
        float x_rotation;  // radians
        float y_rotation;  // radians
        float z_rotation;  // radians
        float time;        // animation start is 0, in seconds
    };

  public:
    enum functions
    {
        lin,
        exp,
        sin
    };

    //vector<string> affected_joints;
    vector<state>  key_frames;
    functions      function;
    bool           reversible;
    float          current_time;
    float          cancellable_before;
    float          cancellable_after;
    float          max_time;  // end_time

    animation(vector<string> joint_names, vector<float> x_rotations, vector<float> y_rotations, vector<float> z_rotations,
              vector<float> times, functions function, float max_time, float cancellable_before, float cancellable_after,
              bool reversible)
        : function(function),
          reversible(reversible),
          current_time(0),
          cancellable_before(cancellable_before),
          cancellable_after(cancellable_after),
          max_time(max_time)
    {
        key_frames.reserve(joint_names.size());
        for (int i = 0; i < joint_names.size(); i++)
            key_frames[i] = state{joint_names[i], x_rotations[i], y_rotations[i], z_rotations[i], times[i]};
    }
};