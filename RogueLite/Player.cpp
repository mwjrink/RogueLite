#include "Player.h"
#include "World.h"
#include <iostream>

namespace player
{
    void player_init(Player& p)
	{
        p.tile_sheet = Create_TileSheet(gltexture::AllocateTextureForLoading("Resources/SpriteSheet.png"), glm::ivec2(4, 4));
        // r.position   = glm::vec2(1720.0f, 980.0f);
        p.position           = glm::vec2(500.0f, 300.0f);
        p.velocity           = glm::vec2(0.0f, 0.0f);
        p.size               = glm::vec2(100.0f, 100.0f);
        p.scale              = 1.0f;
        p.current_tile_index = 0;
        p.speed              = 120.0f;
        
		//TODO: ABOLISH THIS SYSTEM IN FAVOUR OF POLLING :'(
		input::delegate_type dLambda = [](int key, int action) {
            if (key == GLFW_KEY_W) std::cout << "W";
            if (key == GLFW_KEY_A) std::cout << "A";
            if (key == GLFW_KEY_S) std::cout << "S";
            if (key == GLFW_KEY_D) std::cout << "D";
        };
		
		input::copy_add(GLFW_KEY_W, &dLambda);
        input::copy_add(GLFW_KEY_A, &dLambda);
        input::copy_add(GLFW_KEY_S, &dLambda);
        input::copy_add(GLFW_KEY_D, &dLambda);
	}

    void move(Player& p, float dt)
    {
        if (p.velocity.x != 0.0f || p.velocity.y != 0.0f)
			p.velocity = glm::normalize(p.velocity);
        p.position += p.velocity * p.speed * dt;
    }

    void increment_velocity_up(Player& p) { p.velocity.y++; }
    void increment_velocity_down(Player& p) { p.velocity.y--; }
    void increment_velocity_left(Player& p) { p.velocity.x--; }
    void increment_velocity_right(Player& p) { p.velocity.x++; }
}  // namespace player
