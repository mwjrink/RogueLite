#include "InputManager.h"
#include "Graphics.h"

namespace input
{
    typedef ifd::delegate<void(int, int)> delegate_type;

    //std::unordered_map<int, delegate_type*> callbacks = std::unordered_map<int, delegate_type*>();
    std::unordered_map<Event, delegate_type*, umap_event_hash> callbacks = std::unordered_map<Event, delegate_type*, umap_event_hash>();

    Controller controller;

    void update_controller(Controller& c)
    {
        // *2 to array size to avoid to increase the writable size from 1392 to x amount (it varies for some reason)
        c.key_states[GLFW_KEY_LAST*2] = {};	// avoids buffer overrun (which would literally break the game)

        // Update key states and handle single-key events
        for (int i = 0; i < GLFW_KEY_LAST; i++)
        {
            c.key_states[i] = glfwGetKey(graphics::window, i);
            handle_event(c, i, c.key_states[i]);
        }
        callbacks;
    }

    void handle_event(Controller& c, int key, int action)
    {
        Event event = {key, action};
        auto func = callbacks[event];
        if (func) (*func)(key, action);
    }

    void add_event(int key, int action, delegate_type* callback)
	{
        Event event = {key, action};
        auto func = callbacks[event];
        if (func) (*func)(key, action);
	}

	 bool copy_add_event(int key, int action, delegate_type* callback)
    {
         Event event = {key, action};
         if (callbacks[event] == nullptr)
        {
             callbacks[event] = new delegate_type(*callback);
            return true;
        }
        else
            return false;
    }

	bool remove_event(int key, int action)
    {
        Event event = {key, action};
        if (callbacks[event] != nullptr)
        {
            delete callbacks[event];
            callbacks[event] = nullptr;
            return true;
        }
        else
            return false;
    }

    // void handle_event(int key, int action)
    //{
    //    auto func = callbacks[key];
    //    if (func) (*func)(key, action);
    //}

	//void handle_event(Controller& c, int key, int action)
 //   {
 //       callbacks;
 //       delegate_type* func = callbacks[key];
 //       if (func) (*func)(key, action);
 //   }

 //    bool add_event(int val, delegate_type* callback)
 //   {
 //       if (callbacks[val] == nullptr)
 //       {
 //           callbacks[val] = callback;
 //           return true;
 //       }
 //       else
 //           return false;
 //   }

 //    bool copy_add_event(int val, delegate_type* callback)
 //   {
 //       if (callbacks[val] == nullptr)
 //       {
 //           callbacks[val] = new delegate_type(*callback);
 //           return true;
 //       }
 //       else
 //           return false;
 //   }

 //   // WILL DELETE WHEN REMOVED
 //    bool remove_event(int val)
 //   {
 //       if (callbacks[val] != nullptr)
 //       {
 //           delete callbacks[val];
 //           callbacks[val] = nullptr;
 //           return true;
 //       }
 //       else
 //           return false;
 //   }
}  // namespace input
