#pragma once

#include <unordered_map>
#include "Libraries/Delegate.h"

namespace input
{
    typedef ifd::delegate<void(int, int)> delegate_type;

    auto callbacks = std::unordered_map<int, delegate_type*>();

    inline void handle(int key, int action)
    {
        auto func = callbacks[key];
        if (func) (*func)(key, action);
    }

    inline bool add(int val, delegate_type* callback)
    {
        if (callbacks[val] == nullptr)
        {
            callbacks[val] = callback;
            return true;
        }
        else
            return false;
    }

    inline bool copy_add(int val, delegate_type* callback)
    {
        if (callbacks[val] == nullptr)
        {
            callbacks[val] = new delegate_type(*callback);
            return true;
        }
        else
            return false;
    }

    // WILL DELETE WHEN REMOVED
    inline bool remove(int val)
    {
        if (callbacks[val] != nullptr)
        {
            delete callbacks[val];
            callbacks[val] = nullptr;
            return true;
        }
        else
            return false;
    }
}  // namespace input
