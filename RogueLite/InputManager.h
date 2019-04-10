#pragma once

#include <unordered_map>
#include "Libraries/Delegate.h"

namespace input
{
    typedef ifd::delegate<void(int, int)> delegate_type;

    extern std::unordered_map<int, delegate_type*> callbacks;

    void handle(int key, int action);
    bool add(int val, delegate_type* callback);
    bool copy_add(int val, delegate_type* callback);
    bool remove(int val);
}  // namespace input
