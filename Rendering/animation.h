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

    struct Frame
    {
        int   next_frame = -1;
        float start_time;
        float x_rotation;
        float y_rotation;
        float z_rotation;

        float x_translation;
        float y_translation;
        float z_translation;

        functions function;
    };

  private:
    vector<Frame>  animation_frames;
    vector<string> affected_joints;
    vector<int>    current_frame_index;
    functions      function;
    bool           reversible;
    float          cancellable_before;
    float          cancellable_after;
    float          max_time;  // end_time

    float current_time;

  public:
    // TODO @Max, remove this later, this is currently just so I can make a global variable then assign the value in the
    // contructor
    Animation() {}

    // bool repeat (part of animation manager)
    /*vector<string> affected_joints, vector<float> x_rotations, vector<float> y_rotations, vector<float> z_rotations,
        vector<float> times, functions function, float max_time, float cancellable_before, float cancellable_after,
        bool reversible
        : function(function),
          reversible(reversible),
          current_time(0),
          cancellable_before(cancellable_before),
          cancellable_after(cancellable_after),
          max_time(max_time),
          affected_joints(affected_joints)*/
    Animation(vector<Frame> animation_frames, vector<string> affected_joints, vector<int> current_frame_index,
              functions function, bool reversible, float cancellable_before, float cancellable_after, float max_time)
        : animation_frames(animation_frames),
          affected_joints(affected_joints),
          current_frame_index(current_frame_index),
          function(function),
          reversible(reversible),
          cancellable_before(cancellable_before),
          cancellable_after(cancellable_after),
          max_time(max_time)
    {
    }

    void start_animation(Mesh mesh) {}

    // load animation from file
    // parse animation from text
    // apply animation to mesh

    // Allow Animation_Manager to access private fields
    friend class Animation_Manager;
};