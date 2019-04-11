#include "Renderable.h"

void update_animations(Renderable& r, float dt)
{
    if (!r.current_frame) return;
    r.current_frame->current_time -= dt;
    if (r.current_frame->current_time <= 0.0f)
    {
        r.current_frame->current_time = r.current_frame->max_time;
        r.current_frame               = r.current_frame->next_frame;
    }
    r.current_tile_index = r.current_frame->frame_index;
}
