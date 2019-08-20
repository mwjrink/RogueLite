#pragma once
#pragma once

#include <String>
#include <vector>

#include "animation.h"

using namespace std;

// Animation(vector<Frame> animation_frames, vector<string> affected_joints, vector<int> current_frame_index,
// functions function, bool reversible, float cancellable_before, float cancellable_after, float max_time)

Animation get_running_animation()
{
    auto animation_frames = vector<Animation::Frame>();
    animation_frames.push_back(Animation::Frame{1, 0.0f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{2, 0.5f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{4, 0.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{5, 0.5f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{7, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{8, 0.25f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{9, 0.5f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{10, 0.75f, 0.0f, 0.0f, -45.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{12, 0.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{13, 0.25f, 0.0f, 0.0f, -45.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{14, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{15, 0.75f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{17, 0.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{18, 0.5f, 0.0f, 40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{20, 0.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{21, 0.5f, 0.0f, 40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{23, 0.0f, -30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{24, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, -30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{26, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{27, 0.5f, 30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{29, 0.0f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});
    animation_frames.push_back(Animation::Frame{30, 0.25f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.15f});
    animation_frames.push_back(Animation::Frame{31, 0.5f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});
    animation_frames.push_back(Animation::Frame{32, 0.75f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.15f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});

    animation_frames.push_back(Animation::Frame{34, 0.0f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{35, 0.5f, 0.0f, 0.0f, 20.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{37, 0.0f, 0.0f, 0.0f, 20.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{38, 0.5f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 20.0f, 0.0f, 0.0f, 0.0f});

    auto affected_joints = vector<string>();
    affected_joints.push_back("Armature_Thigh_L");
    affected_joints.push_back("Armature_Thigh_R");
    affected_joints.push_back("Armature_Shin_L");
    affected_joints.push_back("Armature_Shin_R");
    affected_joints.push_back("Armature_Upper_Arm_L");
    affected_joints.push_back("Armature_Upper_Arm_R");
    affected_joints.push_back("Armature_Lower_Arm_L");
    affected_joints.push_back("Armature_Lower_Arm_R");
    affected_joints.push_back("Armature_Spine");
    affected_joints.push_back("Armature_Shoulder_L");
    affected_joints.push_back("Armature_Shoulder_R");

    auto current_frame_index = vector<int>();
    current_frame_index.push_back(0);
    current_frame_index.push_back(3);
    current_frame_index.push_back(6);
    current_frame_index.push_back(11);
    current_frame_index.push_back(16);
    current_frame_index.push_back(19);
    current_frame_index.push_back(22);
    current_frame_index.push_back(25);
    current_frame_index.push_back(28);
    current_frame_index.push_back(33);
    current_frame_index.push_back(36);

    return Animation(animation_frames, affected_joints, current_frame_index, Animation::functions::sin, false, 0.0f, 1.0f,
                     1.0f);
}

Animation get_new_running_animation()
{
    auto animation_frames = vector<Animation::Frame>();
    animation_frames.push_back(Animation::Frame{1, 0.0f, 0.0f, 0.0f, -45.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{2, 0.35f, 0.0f, 0.0f, 45.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{-1, 0.7f, 0.0f, 0.0f, -45.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});

    animation_frames.push_back(Animation::Frame{4, 0.0f, 0.0f, 0.0f, 45.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{5, 0.35f, 0.0f, 0.0f, -45.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{-1, 0.7f, 0.0f, 0.0f, 45.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});

    animation_frames.push_back(Animation::Frame{7, 0.0f, 0.0f, 0.0f, -10.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{8, 0.1f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{9, 0.25f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{10, 0.35f, 0.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{11, 0.45f, 0.0f, 0.0f, -90.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{12, 0.6f, 0.0f, 0.0f, -90.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{-1, 0.7f, 0.0f, 0.0f, -10.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});

    animation_frames.push_back(Animation::Frame{14, 0.0f, 0.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{15, 0.1f, 0.0f, 0.0f, -90.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{16, 0.25f, 0.0f, 0.0f, -90.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{17, 0.35f, 0.0f, 0.0f, -10.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{18, 0.45f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{19, 0.6f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});
    animation_frames.push_back(Animation::Frame{-1, 0.7f, 0.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f, Animation::functions::sin});

    animation_frames.push_back(
        Animation::Frame{21, 0.0f, -10.0f, -30.0f, 0.0f, 0.0f, 0.0f, 0.2f, Animation::functions::lin});
    animation_frames.push_back(
        Animation::Frame{22, 0.175f, -10.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.1f, Animation::functions::lin});
    animation_frames.push_back(
        Animation::Frame{23, 0.35f, -10.0f, 30.0f, 0.0f, 0.0f, 0.0f, 0.2f, Animation::functions::lin});
    animation_frames.push_back(
        Animation::Frame{24, 0.525f, -10.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.1f, Animation::functions::lin});
    animation_frames.push_back(
        Animation::Frame{-1, 0.7f, -10.0f, -30.0f, 0.0f, 0.0f, 0.0f, 0.2f, Animation::functions::lin});

    auto affected_joints = vector<string>();
    affected_joints.push_back("Armature_Thigh_L");
    affected_joints.push_back("Armature_Thigh_R");
    affected_joints.push_back("Armature_Shin_L");
    affected_joints.push_back("Armature_Shin_R");
    affected_joints.push_back("Armature_Spine");

    // affected_joints.push_back("Armature_Shoulder_L");
    // affected_joints.push_back("Armature_Shoulder_R");

    auto current_frame_index = vector<int>();
    current_frame_index.push_back(0);
    current_frame_index.push_back(3);
    current_frame_index.push_back(6);
    current_frame_index.push_back(13);
    current_frame_index.push_back(20);

    return Animation(animation_frames, affected_joints, current_frame_index, Animation::functions::sin, false, 0.0f, 0.7f,
                     0.7f);
}

Animation get_jumping_animation()
{
    auto animation_frames = vector<Animation::Frame>();
    animation_frames.push_back(Animation::Frame{1, 0.0f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{2, 0.5f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{4, 0.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{5, 0.5f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{7, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{8, 0.25f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{9, 0.5f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{10, 0.75f, 0.0f, 0.0f, -45.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{12, 0.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{13, 0.25f, 0.0f, 0.0f, -45.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{14, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{15, 0.75f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{17, 0.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{18, 0.5f, 0.0f, 40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{20, 0.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{21, 0.5f, 0.0f, 40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{23, 0.0f, -30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{24, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, -30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{26, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{27, 0.5f, 30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{29, 0.0f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});
    animation_frames.push_back(Animation::Frame{30, 0.25f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.15f});
    animation_frames.push_back(Animation::Frame{31, 0.5f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});
    animation_frames.push_back(Animation::Frame{32, 0.75f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.15f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});

    animation_frames.push_back(Animation::Frame{34, 0.0f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{35, 0.5f, 0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{37, 0.0f, 0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{38, 0.5f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f});

    auto affected_joints = vector<string>();
    affected_joints.push_back("Armature_Thigh_L");
    affected_joints.push_back("Armature_Thigh_R");
    affected_joints.push_back("Armature_Shin_L");
    affected_joints.push_back("Armature_Shin_R");
    affected_joints.push_back("Armature_Upper_Arm_L");
    affected_joints.push_back("Armature_Upper_Arm_R");
    affected_joints.push_back("Armature_Lower_Arm_L");
    affected_joints.push_back("Armature_Lower_Arm_R");
    affected_joints.push_back("Armature_Spine");
    affected_joints.push_back("Armature_Shoulder_L");
    affected_joints.push_back("Armature_Shoulder_R");

    auto current_frame_index = vector<int>();
    current_frame_index.push_back(0);
    current_frame_index.push_back(3);
    current_frame_index.push_back(6);
    current_frame_index.push_back(11);
    current_frame_index.push_back(16);
    current_frame_index.push_back(19);
    current_frame_index.push_back(22);
    current_frame_index.push_back(25);
    current_frame_index.push_back(28);
    current_frame_index.push_back(33);
    current_frame_index.push_back(36);

    return Animation(animation_frames, affected_joints, current_frame_index, Animation::functions::sin, false, 0.0f, 1.0f,
                     1.0f);
}

Animation get_walking_animation()
{
    auto animation_frames = vector<Animation::Frame>();
    animation_frames.push_back(Animation::Frame{1, 0.0f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{2, 0.5f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{4, 0.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{5, 0.5f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{7, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{8, 0.25f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{9, 0.5f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{10, 0.75f, 0.0f, 0.0f, -45.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{12, 0.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{13, 0.25f, 0.0f, 0.0f, -45.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{14, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{15, 0.75f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{17, 0.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{18, 0.5f, 0.0f, 40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{20, 0.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{21, 0.5f, 0.0f, 40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{23, 0.0f, -30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{24, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, -30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{26, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{27, 0.5f, 30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{29, 0.0f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});
    animation_frames.push_back(Animation::Frame{30, 0.25f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.15f});
    animation_frames.push_back(Animation::Frame{31, 0.5f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});
    animation_frames.push_back(Animation::Frame{32, 0.75f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.15f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});

    animation_frames.push_back(Animation::Frame{34, 0.0f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{35, 0.5f, 0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{37, 0.0f, 0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{38, 0.5f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f});

    auto affected_joints = vector<string>();
    affected_joints.push_back("Armature_Thigh_L");
    affected_joints.push_back("Armature_Thigh_R");
    affected_joints.push_back("Armature_Shin_L");
    affected_joints.push_back("Armature_Shin_R");
    affected_joints.push_back("Armature_Upper_Arm_L");
    affected_joints.push_back("Armature_Upper_Arm_R");
    affected_joints.push_back("Armature_Lower_Arm_L");
    affected_joints.push_back("Armature_Lower_Arm_R");
    affected_joints.push_back("Armature_Spine");
    affected_joints.push_back("Armature_Shoulder_L");
    affected_joints.push_back("Armature_Shoulder_R");

    auto current_frame_index = vector<int>();
    current_frame_index.push_back(0);
    current_frame_index.push_back(3);
    current_frame_index.push_back(6);
    current_frame_index.push_back(11);
    current_frame_index.push_back(16);
    current_frame_index.push_back(19);
    current_frame_index.push_back(22);
    current_frame_index.push_back(25);
    current_frame_index.push_back(28);
    current_frame_index.push_back(33);
    current_frame_index.push_back(36);

    return Animation(animation_frames, affected_joints, current_frame_index, Animation::functions::sin, false, 0.0f, 1.0f,
                     1.0f);
}

Animation get_roll_animation()
{
    auto animation_frames = vector<Animation::Frame>();
    animation_frames.push_back(Animation::Frame{1, 0.0f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{2, 0.5f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{4, 0.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{5, 0.5f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{7, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{8, 0.25f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{9, 0.5f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{10, 0.75f, 0.0f, 0.0f, -45.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{12, 0.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{13, 0.25f, 0.0f, 0.0f, -45.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{14, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{15, 0.75f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{17, 0.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{18, 0.5f, 0.0f, 40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{20, 0.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{21, 0.5f, 0.0f, 40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{23, 0.0f, -30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{24, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, -30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{26, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{27, 0.5f, 30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{29, 0.0f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});
    animation_frames.push_back(Animation::Frame{30, 0.25f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.15f});
    animation_frames.push_back(Animation::Frame{31, 0.5f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});
    animation_frames.push_back(Animation::Frame{32, 0.75f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.15f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});

    animation_frames.push_back(Animation::Frame{34, 0.0f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{35, 0.5f, 0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{37, 0.0f, 0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{38, 0.5f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f});

    auto affected_joints = vector<string>();
    affected_joints.push_back("Armature_Thigh_L");
    affected_joints.push_back("Armature_Thigh_R");
    affected_joints.push_back("Armature_Shin_L");
    affected_joints.push_back("Armature_Shin_R");
    affected_joints.push_back("Armature_Upper_Arm_L");
    affected_joints.push_back("Armature_Upper_Arm_R");
    affected_joints.push_back("Armature_Lower_Arm_L");
    affected_joints.push_back("Armature_Lower_Arm_R");
    affected_joints.push_back("Armature_Spine");
    affected_joints.push_back("Armature_Shoulder_L");
    affected_joints.push_back("Armature_Shoulder_R");

    auto current_frame_index = vector<int>();
    current_frame_index.push_back(0);
    current_frame_index.push_back(3);
    current_frame_index.push_back(6);
    current_frame_index.push_back(11);
    current_frame_index.push_back(16);
    current_frame_index.push_back(19);
    current_frame_index.push_back(22);
    current_frame_index.push_back(25);
    current_frame_index.push_back(28);
    current_frame_index.push_back(33);
    current_frame_index.push_back(36);

    return Animation(animation_frames, affected_joints, current_frame_index, Animation::functions::sin, false, 0.0f, 1.0f,
                     1.0f);
}

// transition animations, ie walking stop turning walking opposite direction
Animation get_turn_animation()
{
    auto animation_frames = vector<Animation::Frame>();
    animation_frames.push_back(Animation::Frame{1, 0.0f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{2, 0.5f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{4, 0.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{5, 0.5f, 0.0f, 0.0f, 30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{7, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{8, 0.25f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{9, 0.5f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{10, 0.75f, 0.0f, 0.0f, -45.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{12, 0.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{13, 0.25f, 0.0f, 0.0f, -45.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{14, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{15, 0.75f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{17, 0.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{18, 0.5f, 0.0f, 40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{20, 0.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{21, 0.5f, 0.0f, 40.0f, -75.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, -40.0f, -75.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{23, 0.0f, -30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{24, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, -30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{26, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{27, 0.5f, 30.0f, 0.0f, -30.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{29, 0.0f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});
    animation_frames.push_back(Animation::Frame{30, 0.25f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.15f});
    animation_frames.push_back(Animation::Frame{31, 0.5f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});
    animation_frames.push_back(Animation::Frame{32, 0.75f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.15f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, -15.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.15f});

    animation_frames.push_back(Animation::Frame{34, 0.0f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{35, 0.5f, 0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});

    animation_frames.push_back(Animation::Frame{37, 0.0f, 0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{38, 0.5f, 0.0f, 0.0f, -20.0f, 0.0f, 0.0f, 0.0f});
    animation_frames.push_back(Animation::Frame{-1, 1.0f, 0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f});

    auto affected_joints = vector<string>();
    affected_joints.push_back("Armature_Thigh_L");
    affected_joints.push_back("Armature_Thigh_R");
    affected_joints.push_back("Armature_Shin_L");
    affected_joints.push_back("Armature_Shin_R");
    affected_joints.push_back("Armature_Upper_Arm_L");
    affected_joints.push_back("Armature_Upper_Arm_R");
    affected_joints.push_back("Armature_Lower_Arm_L");
    affected_joints.push_back("Armature_Lower_Arm_R");
    affected_joints.push_back("Armature_Spine");
    affected_joints.push_back("Armature_Shoulder_L");
    affected_joints.push_back("Armature_Shoulder_R");

    auto current_frame_index = vector<int>();
    current_frame_index.push_back(0);
    current_frame_index.push_back(3);
    current_frame_index.push_back(6);
    current_frame_index.push_back(11);
    current_frame_index.push_back(16);
    current_frame_index.push_back(19);
    current_frame_index.push_back(22);
    current_frame_index.push_back(25);
    current_frame_index.push_back(28);
    current_frame_index.push_back(33);
    current_frame_index.push_back(36);

    return Animation(animation_frames, affected_joints, current_frame_index, Animation::functions::sin, false, 0.0f, 1.0f,
                     1.0f);
}