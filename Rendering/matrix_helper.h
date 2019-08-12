#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <iostream>

using namespace std;

void print(glm::mat4 mat) {

        for (int y = 0; y < 4; y++)
        {
            for (int x = 0; x < 4; x++)
            {
                cout << mat[y][x] << " ";
            }
            cout << endl;
        }
}