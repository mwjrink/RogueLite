#include "Player.h"

namespace player
{
    void player_init(Player& p)
	{
        p.tile_sheet = Create_TileSheet(AllocateTextureForLoading("Resources/SpriteSheet.png"), glm::ivec2(4, 4));
        // r.position   = glm::vec2(1720.0f, 980.0f);
        p.position           = glm::vec2(500.0f, 300.0f);
        p.size               = glm::vec2(100.0f, 100.0f);
        p.scale              = 1.0f;
        p.current_tile_index = 0;
        p.speed              = 12.0f;
        
		p.dLambda = [&p](int key, int action) {
            if (key == GLFW_KEY_W) increment_velocity_up(p);
            if (key == GLFW_KEY_A) increment_velocity_left(p);
            if (key == GLFW_KEY_S) increment_velocity_down(p);
            if (key == GLFW_KEY_D) increment_velocity_right(p);
        };
		
		input::copy_add(GLFW_KEY_W, &p.dLambda);
        input::copy_add(GLFW_KEY_A, &p.dLambda);
        input::copy_add(GLFW_KEY_S, &p.dLambda);
        input::copy_add(GLFW_KEY_D, &p.dLambda);
		
	}

    void move(Player p, float dt)
    {
        p.velocity = glm::normalize(p.velocity);
        p.position += p.velocity * p.speed * dt;
    }

    void increment_velocity_up(Player p) { p.velocity.y++; }
    void increment_velocity_down(Player p) { p.velocity.y--; }
    void increment_velocity_left(Player p) { p.velocity.x--; }
    void increment_velocity_right(Player p) { p.velocity.x++; }
}  // namespace player
