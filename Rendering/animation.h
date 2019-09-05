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
        float time_stamp;
        glm::quat quat;
        glm::vec3 scale;
        glm::vec3 position;
        //functions function;
    };
    
    struct Rotation_Frame
    {
        int   next_frame = -1;
        float time_stamp;
        glm::quat quat;
        //functions function;
    };
    
    struct Position_Frame
    {
        int   next_frame = -1;
        float time_stamp;
        glm::vec3 position;
        //functions function;
    };
    
    struct Scale_Frame
    {
        int   next_frame = -1;
        float time_stamp;
        glm::vec3 scale;
        //functions function;
    };
    
    struct index
    {
        string joint_name;
        int rotation_frame_index;
        int position_frame_index;
        int scale_frame_index;
    };
    
private:
    vector<index>  indexer;
    vector<Rotation_Frame>  rotation_frames;
    vector<Position_Frame>  position_frames;
    vector<Scale_Frame>  scale_frames;
    //vector<int>    current_frame_index;
    //functions      function;
    //bool           reversible;
    //float          cancellable_before;
    //float          cancellable_after;
    float          duration;  // end_time
    
    float current_time;
    
public:
    // TODO @Max, remove this later, this is currently just so I can make a global variable then assign the value in the
    // contructor
    Animation() {}
    
    Animation(float duration, vector<index> indexer, vector<Rotation_Frame> rotation_frames, vector<Position_Frame> position_frames, vector<Scale_Frame> scale_frames): duration(duration),
    indexer(indexer), rotation_frames(rotation_frames), position_frames(position_frames), scale_frames(scale_frames), current_time(0.0f)
    {
    }
    
    // load animation from file
    // parse animation from text
    // apply animation to mesh
    
    // Allow Animation_Manager to access private fields
    friend class Animation_Manager;
};
