#pragma once

#include <GLFW/glfw3.h>
#include <unordered_map>
#include "Delegate.h"

//auto callbacks = new std::unordered_map<int, ifd::delegate<void>>();
//
//void handle(int key)
//{
//    ifd::delegate<void> func = (*callbacks)[key]();
//    func();
//}
//
//void add(int val, ifd::delegate<void> callback) { callbacks[val] = callback; }