#include "HumanoidSkeleton.h"

#include "World.h"

namespace proc_anim
{
    void set_unit_velocity_up(int _, int __) { world::skeleton.heart.velocity.y++; }
    void set_unit_velocity_down(int _, int __) { world::skeleton.heart.velocity.y--; }
    void set_unit_velocity_left(int _, int __) { world::skeleton.heart.velocity.x--; }
    void set_unit_velocity_right(int _, int __) { world::skeleton.heart.velocity.x++; }
    void stop_velocity_up(int _, int __) { world::skeleton.heart.velocity.y--; }
    void stop_velocity_down(int _, int __) { world::skeleton.heart.velocity.y++; }
    void stop_velocity_left(int _, int __) { world::skeleton.heart.velocity.x++; }
    void stop_velocity_right(int _, int __) { world::skeleton.heart.velocity.x--; }

    const glm::vec3 red = glm::vec3(1.0f, 0.0f, 0.0f);
    const glm::vec3 blu = glm::vec3(0.0f, 0.0f, 1.0f);
    const glm::vec3 gre = glm::vec3(0.0f, 1.0f, 0.0f);

    const float looking_angle_y_mult = std::sin(3.14159265359 / 4);

    HumanoidSkeleton::HumanoidSkeleton()
    {
        r.tile_sheet = Create_TileSheet(gltexture::AllocateTextureForLoading("Resources/node.png"), glm::ivec2(1, 1));
        // r.position   = glm::vec2(1720.0f, 980.0f);
        r.position           = glm::vec2(0.0f, 0.0f);
        r.size               = glm::vec2(16.0f, 16.0f);
        r.scale              = 1.0f;
        r.current_tile_index = 0;

        speed       = 192.0f;
        arm_length  = 10.0f;
        leg_length  = 10.0f;
        neck_length = 10.0f;

        facing_direction = glm::vec2(0.0f, -1.0f);

        heart = Node(500.0f, 250.0f, 0.0f, 0.0f);

        head = Node(500.0f, 300.0f, 0.0f, 2.0f);

        left_shoulder  = Node(450.0f, 250.0f, 0.0f, 1.0f);
        right_shoulder = Node(550.0f, 250.0f, 0.0f, 1.0f);

        left_elbow  = Node(425.0f, 225.0f, 0.0f, 0.5f);
        right_elbow = Node(575.0f, 225.0f, 0.0f, 0.5f);

        left_hand  = Node(425.0f, 200.0f, 0.0f, 0.75f);
        right_hand = Node(575.0f, 200.0f, 0.0f, 0.75f);

        pelvis = Node(500.0f, 212.5f, 0.0f, 1.0f);

        left_knee  = Node(475.0f, 187.5f, 0.0f, 0.5f);
        right_knee = Node(525.0f, 187.5f, 0.0f, 0.5f);

        left_foot  = Foot_Node(450.0f, 137.5f, 0.0f, 0.75f);
        right_foot = Foot_Node(550.0f, 137.5f, 0.0f, 0.75f);

        input::copy_add_event(GLFW_KEY_W, GLFW_PRESS, &input::delegate_type::create<&proc_anim::set_unit_velocity_up>());
        input::copy_add_event(GLFW_KEY_A, GLFW_PRESS, &input::delegate_type::create<&proc_anim::set_unit_velocity_left>());
        input::copy_add_event(GLFW_KEY_S, GLFW_PRESS, &input::delegate_type::create<&proc_anim::set_unit_velocity_down>());
        input::copy_add_event(GLFW_KEY_D, GLFW_PRESS, &input::delegate_type::create<&proc_anim::set_unit_velocity_right>());

        input::copy_add_event(GLFW_KEY_W, GLFW_RELEASE, &input::delegate_type::create<&proc_anim::stop_velocity_up>());
        input::copy_add_event(GLFW_KEY_A, GLFW_RELEASE, &input::delegate_type::create<&proc_anim::stop_velocity_left>());
        input::copy_add_event(GLFW_KEY_S, GLFW_RELEASE, &input::delegate_type::create<&proc_anim::stop_velocity_down>());
        input::copy_add_event(GLFW_KEY_D, GLFW_RELEASE, &input::delegate_type::create<&proc_anim::stop_velocity_right>());
    }

    void move(HumanoidSkeleton& s, float dt)
    {
        if (s.heart.velocity.x != 0.0f || s.heart.velocity.y != 0.0f)
        {
            s.facing_direction = glm::normalize(s.heart.velocity);
            s.heart.position += s.facing_direction * s.speed * dt;
        }

        s.head.position = s.heart.position + glm::vec3(0.0f, 0.0f, -s.neck_length);
    }

    void render(HumanoidSkeleton& s)
    {
        graphics::DrawLine(s.head.position.x, s.head.position.y, s.pelvis.position.x, s.pelvis.position.y, 4.0f);

        graphics::DrawLine(s.left_shoulder.position.x, s.left_shoulder.position.y, s.right_shoulder.position.x,
                           s.right_shoulder.position.y, 4.0f);

        graphics::DrawLine(s.left_shoulder.position.x, s.left_shoulder.position.y, s.left_elbow.position.x,
                           s.left_elbow.position.y, 4.0f);
        graphics::DrawLine(s.right_shoulder.position.x, s.right_shoulder.position.y, s.right_elbow.position.x,
                           s.right_elbow.position.y, 4.0f);

        graphics::DrawLine(s.left_elbow.position.x, s.left_elbow.position.y, s.left_hand.position.x, s.left_hand.position.y,
                           4.0f);
        graphics::DrawLine(s.right_elbow.position.x, s.right_elbow.position.y, s.right_hand.position.x,
                           s.right_hand.position.y, 4.0f);

        graphics::DrawLine(s.pelvis.position.x, s.pelvis.position.y, s.left_knee.position.x, s.left_knee.position.y, 4.0f);
        graphics::DrawLine(s.pelvis.position.x, s.pelvis.position.y, s.right_knee.position.x, s.right_knee.position.y, 4.0f);

        graphics::DrawLine(s.left_knee.position.x, s.left_knee.position.y, s.left_foot.position.x, s.left_foot.position.y,
                           4.0f);
        graphics::DrawLine(s.right_knee.position.x, s.right_knee.position.y, s.right_foot.position.x,
                           s.right_foot.position.y, 4.0f);

        s.r.position = s.head.position;
        s.r.scale    = s.head.radius;
        s.r.color    = red;
        graphics::DrawRenderable(s.r, graphics::shaderProgram);

        s.r.position = s.left_shoulder.position;
        s.r.scale    = s.left_shoulder.radius;
        s.r.color    = gre;
        graphics::DrawRenderable(s.r, graphics::shaderProgram);

        s.r.position = s.right_shoulder.position;
        s.r.scale    = s.right_shoulder.radius;
        s.r.color    = gre;
        graphics::DrawRenderable(s.r, graphics::shaderProgram);

        s.r.position = s.left_elbow.position;
        s.r.scale    = s.left_elbow.radius;
        s.r.color    = blu;
        graphics::DrawRenderable(s.r, graphics::shaderProgram);

        s.r.position = s.right_elbow.position;
        s.r.scale    = s.right_elbow.radius;
        s.r.color    = blu;
        graphics::DrawRenderable(s.r, graphics::shaderProgram);

        s.r.position = s.left_hand.position;
        s.r.scale    = s.left_hand.radius;
        s.r.color    = red;
        graphics::DrawRenderable(s.r, graphics::shaderProgram);

        s.r.position = s.right_hand.position;
        s.r.scale    = s.right_hand.radius;
        s.r.color    = red;
        graphics::DrawRenderable(s.r, graphics::shaderProgram);

        s.r.position = s.pelvis.position;
        s.r.scale    = s.pelvis.radius;
        s.r.color    = gre;
        graphics::DrawRenderable(s.r, graphics::shaderProgram);

        s.r.position = s.left_knee.position;
        s.r.scale    = s.left_knee.radius;
        s.r.color    = blu;
        graphics::DrawRenderable(s.r, graphics::shaderProgram);

        s.r.position = s.right_knee.position;
        s.r.scale    = s.right_knee.radius;
        s.r.color    = blu;
        graphics::DrawRenderable(s.r, graphics::shaderProgram);

        s.r.position = s.left_foot.position;
        s.r.scale    = s.left_foot.radius;
        s.r.color    = red;
        graphics::DrawRenderable(s.r, graphics::shaderProgram);

        s.r.position = s.right_foot.position;
        s.r.scale    = s.right_foot.radius;
        s.r.color    = red;
        graphics::DrawRenderable(s.r, graphics::shaderProgram);
    }

}  // namespace proc_anim
