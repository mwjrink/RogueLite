#pragma once

// This #define combats the error: "OpenGL header already included, remove this include, glad already provides it"
#define GLFW_INCLUDE_NONE

#include <unordered_map>
#include "GLFW/glfw3.h"
#include "Libraries/Delegate.h"

namespace input
{
    struct Controller
    {
        int key_states[GLFW_KEY_LAST];
    };

    struct Event
    {
        int key;
        int action;

        bool operator==(const Event& other) const { return key == other.key && action == other.action; }
    };

    struct umap_event_hash
    {
        std::size_t operator()(const Event& e) const
        {
            return (std::hash<int>()(e.key) | (std::hash<int>()(e.action) << 12));
        }
    };

    typedef ifd::delegate<void(int, int)> delegate_type;

    // extern std::unordered_map<int, delegate_type*> callbacks;
    extern std::unordered_map<Event, delegate_type*, umap_event_hash> callbacks;

    extern Controller controller;

    void update_controller(Controller& c);
    void handle_event(Controller& c, int key, int action);
    void add_event(int key, int action, delegate_type* callback);
    bool copy_add_event(int key, int action, delegate_type* callback);
    bool remove_event(int key, int action);

    void handle_event(int key, int action);
    bool add_event(int val, delegate_type* callback);
    bool copy_add_event(int val, delegate_type* callback);
    bool remove_event(int val);

}  // namespace input
