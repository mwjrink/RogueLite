#ifndef LGRID_HPP
#define LGRID_HPP
 
#include "SmallList.hpp"
 
struct LGridElt
{
    // Stores the index to the next element in the cell using an indexed SLL.
    int next;
 
    // Stores the ID of the element. This can be used to associate external
    // data to the element.
    int id;
 
    // Stores the center of the element.
    float mx, my;
   
    // Stores the half-size of the element relative to the upper-left corner
    // of the grid.
    float hx, hy;
};
 
struct LGridLooseCell
{
    // Stores the index to the first element using an indexed SLL.
    int head;
 
    // Stores the extents of the grid cell relative to the upper-left corner
    // of the grid which expands and shrinks with the elements inserted and
    // removed.
    float l, t, r, b;
};
 
struct LGridTightCell
{
    // Stores the index to the next loose cell in the grid cell.
    int next;
 
    // Stores the position of the loose cell in the grid.
    int loose_x, loose_y;
};
 
struct LGridRow
{
    // Stores all the elements in the row.
    FreeList<LGridElt> elts;
 
    // Stores all the loose cells in the row.
    LGridLooseCell* lcells;
 
    // Stores the number of elements in the row.
    int num_elts;
};
 
struct LGrid
{
    // Stores all the tight cell nodes in the grid.
    FreeList<LGridTightCell> tcells;
 
    // Stores all the rows in the grid.
    LGridRow* rows;
 
    // Stores the tight cell heads.
    int* tcell_heads;
 
    // Stores the number of columns in the grid.
    int num_cols;
 
    // Stores the number of rows in the grid.
    int num_rows;
 
    // Stores the size of a cell.
    float cell_w, cell_h;
 
    // Stores the inverse size of a cell.
    float inv_cell_w, inv_cell_h;
 
    // Stores the upper-left corner of the grid.
    float x, y;
 
    // Stores the size of the grid.
    float w, h;
};
 
// Creates a loose grid encompassing the specified extents using the specified cell
// size. Elements inserted to the loose grid are only inserted in one cell, but the
// extents of each cell are allowed to expand and shrink. To avoid requiring every
// loose cell to be checked during a search, a second grid of tight cells referencing
// the loose cells is stored.
LGrid* lgrid_create(float cell_w, float cell_h, float l, float t, float r, float b);
 
// Destroys the grid.
void lgrid_destroy(LGrid* grid);
 
// Returns the grid X position for the specified free X position.
int lgrid_cell_x(LGrid* grid, float x);
 
// Returns the grid Y position for the specified free Y position.
int lgrid_cell_y(LGrid* grid, float y);
 
// Inserts an element to the grid.
void lgrid_insert(LGrid* grid, int id, float mx, float my, float hx, float hy);
 
// Removes an element from the grid.
void lgrid_remove(LGrid* grid, int id, float mx, float my);
 
// Moves an element in the grid from the former position to the new one.
void lgrid_move(LGrid* grid, int id, float prev_mx, float prev_my, float mx, float my);
 
// Moves an element in the grid from the former position to the new one in the
// same cell. Note that the new element position should belong in the same cell
// as the former one.
void lgrid_move_cell(LGrid* grid, int id, int cell_x, int cell_y, float mx, float my);
 
// Returns all the elements that intersect the specified rectangle excluding elements
// with the specified ID to omit.
SmallList<int> lgrid_query(const LGrid* grid, float mx, float my, float hx, float hy, int omit_id);
 
// Returns true if the specified rectangle is inside the grid boundaries.
bool lgrid_in_bounds(const LGrid* grid, float mx, float my, float hx, float hy);
 
// Optimizes the grid, shrinking bounding boxes in response to removed elements and
// rearranging the memory of the grid to allow cache-friendly cell access.
void lgrid_optimize(LGrid* grid);
 
#endif
 
#include "LGrid.hpp"
#include <cstdlib>
#include <cfloat>
 
static int ceil_div(float value, float divisor)
{
    // Returns the value divided by the divisor rounded up.
    const float resultf = value / divisor;
    const int result = (int)resultf;
    return result < resultf ? result+1: result;
}
 
static int min_int(int a, int b)
{
    assert(sizeof(int) == 4);
    a -= b;
    a &= a >> 31;
    return a + b;
}
 
static int max_int(int a, int b)
{
    assert(sizeof(int) == 4);
    a -= b;
    a &= (~a) >> 31;
    return a + b;
}
 
static float min_flt(float a, float b)
{
    return a < b ? a: b;
}
 
static float max_flt(float a, float b)
{
    return a > b ? a: b;
}
 
static int clamp_int(int val, int low, int high)
{
    return min_int(max_int(val, low), high);
}
 
static int to_cell_idx(float val, float inv_cell_size, int num_cells)
{
    return clamp_int((int)(val * inv_cell_size), 0, num_cells - 1);
}
 
bool tcell_contains(LGrid* grid, int tight_head, int loose_x, int loose_y)
{
    // Returns true if the tight cell contains the specified loose cell.
    int tcell_idx = tight_head;
    while (tcell_idx != -1)
    {
        const LGridTightCell* tcell = &grid->tcells[tcell_idx];
        if (tcell->loose_x == loose_x && tcell->loose_y == loose_y)
            return true;
        tcell_idx = tcell->next;
    }
    return false;
}
 
static void row_optimize(LGridRow* row, int num_cols)
{
    FreeList<LGridElt> new_elts;
    new_elts.reserve(row->num_elts);
    for (int j=0; j < num_cols; ++j)
    {
        LGridLooseCell* lcell = &row->lcells[j];
 
        // Replace links to the old elements list to links in the new
        // cache-friendly element list.
        SmallList<int> new_elt_idxs;
        while (lcell->head != -1)
        {
            const LGridElt* elt = &row->elts[lcell->head];
            new_elt_idxs.push_back(new_elts.insert(*elt));
            lcell->head = elt->next;
        }
 
        for (int j=0; j < new_elt_idxs.size(); ++j)
        {
            const int new_elt_idx = new_elt_idxs[j];
            new_elts[new_elt_idx].next = lcell->head;
            lcell->head = new_elt_idx;
        }
    }
    // Swap the new element list with the old one.
    row->elts.swap(new_elts);
}
 
static void expand_aabb(LGrid* grid, int cell_x, int cell_y, float mx, float my, float hx, float hy)
{
    LGridRow* row = &grid->rows[cell_y];
    LGridLooseCell* lcell = &row->lcells[cell_x];
    const float prev_l = lcell->l, prev_t = lcell->t;
    const float prev_r = lcell->r, prev_b = lcell->b;
    lcell->l = min_flt(lcell->l, mx - hx);
    lcell->t = min_flt(lcell->t, my - hx);
    lcell->r = max_flt(lcell->r, mx + hx);
    lcell->b = max_flt(lcell->b, my + hy);
 
    // Determine the cells occupied by the loose cell in the tight grid.
    const int tmin_x = to_cell_idx(lcell->l, grid->inv_cell_w, grid->num_cols);
    const int tmax_x = to_cell_idx(lcell->r, grid->inv_cell_w, grid->num_cols);
    const int tmin_y = to_cell_idx(lcell->t, grid->inv_cell_h, grid->num_rows);
    const int tmax_y = to_cell_idx(lcell->b, grid->inv_cell_h, grid->num_rows);
 
    if (prev_l > prev_r)
    {
        // If the loose cell was empty, simply insert the loose cell
        // to all the tight cells it occupies. We don't need to check
        // to see if it was already inserted.
        for (int ty = tmin_y; ty <= tmax_y; ++ty)
        {
            int* tight_row = grid->tcell_heads + ty*grid->num_cols;
            for (int tx = tmin_x; tx <= tmax_x; ++tx)
            {
                const LGridTightCell new_tcell = {tight_row[tx], cell_x, cell_y};
                tight_row[tx] = grid->tcells.insert(new_tcell);
            }
        }
    }
    else
    {
        const int prev_tmin_x = to_cell_idx(prev_l, grid->inv_cell_w, grid->num_cols);
        const int prev_tmax_x = to_cell_idx(prev_r, grid->inv_cell_w, grid->num_cols);
        const int prev_tmin_y = to_cell_idx(prev_t, grid->inv_cell_h, grid->num_rows);
        const int prev_tmax_y = to_cell_idx(prev_b, grid->inv_cell_h, grid->num_rows);
 
        // Only perform the insertion if the loose cell overlaps new tight cells.
        if (tmin_x != prev_tmin_x || tmin_y != prev_tmin_y ||
            tmax_x != prev_tmax_x || tmax_y != prev_tmax_y)
        {
            for (int ty = tmin_y; ty <= tmax_y; ++ty)
            {
                int* tight_row = grid->tcell_heads + ty*grid->num_cols;
                for (int tx = tmin_x; tx <= tmax_x; ++tx)
                {
                    if (tx < prev_tmin_x || tx > prev_tmax_x ||
                        ty < prev_tmin_y || ty > prev_tmax_y)
                    {
                        const LGridTightCell new_tcell = {tight_row[tx], cell_x, cell_y};
                        assert(!tcell_contains(grid, tight_row[tx], cell_x, cell_y));
                        tight_row[tx] = grid->tcells.insert(new_tcell);
                    }
                }
            }
        }
    }
}
 
LGrid* lgrid_create(float cell_w, float cell_h, float l, float t, float r, float b)
{
    const float w = r - l;
    const float h = b - t;
    const int num_cols = ceil_div(w, cell_w);
    const int num_rows = ceil_div(h, cell_h);
    const int num_cells = num_cols * num_rows;
 
    LGrid* grid = new LGrid;
    grid->tcell_heads = new int[num_cells];
    grid->rows = new LGridRow[num_rows];
 
    grid->x = l;
    grid->y = t;
    grid->h = w;
    grid->w = h;
 
    grid->num_cols = num_cols;
    grid->num_rows = num_rows;
    grid->cell_w = cell_w;
    grid->cell_h = cell_h;
    grid->inv_cell_w = 1.0f / cell_w;
    grid->inv_cell_h = 1.0f / cell_h;
 
    // Initialize tight cell heads with -1 to indicate empty indexed SLLs.
    for (int j=0; j < num_cells; ++j)
        grid->tcell_heads[j] = -1;
 
    // Initialize all the rows.
    for (int ly=0; ly < grid->num_rows; ++ly)
    {
        // Initialize the cells for the row.
        LGridRow* row = &grid->rows[ly];
        row->num_elts = 0;
        row->lcells = new LGridLooseCell[grid->num_cols];
        for (int lx=0; lx < grid->num_cols; ++lx)
        {
            row->lcells[lx].head = -1;
            row->lcells[lx].l = FLT_MAX;
            row->lcells[lx].t = FLT_MAX;
            row->lcells[lx].r = -FLT_MAX;
            row->lcells[lx].b = -FLT_MAX;
        }
    }
    return grid;
}
 
void lgrid_destroy(LGrid* grid)
{
    for (int y=0; y < grid->num_rows; ++y)
        delete[] grid->rows[y].lcells;
    delete[] grid->rows;
    delete[] grid->tcell_heads;
    delete grid;
}
 
int lgrid_cell_x(LGrid* grid, float x)
{
    return to_cell_idx(x - grid->x, grid->inv_cell_w, grid->num_cols);
}
 
int lgrid_cell_y(LGrid* grid, float y)
{
    return to_cell_idx(y - grid->y, grid->inv_cell_h, grid->num_rows);
}
 
void lgrid_insert(LGrid* grid, int id, float mx, float my, float hx, float hy)
{
    mx -= grid->x;
    my -= grid->y;
    const int cell_x = to_cell_idx(mx, grid->inv_cell_w, grid->num_cols);
    const int cell_y = to_cell_idx(my, grid->inv_cell_h, grid->num_rows);
    LGridRow* row = &grid->rows[cell_y];
    LGridLooseCell* lcell = &row->lcells[cell_x];
 
    // Insert the element to the appropriate loose cell and row.
    const LGridElt new_elt = {lcell->head, id, mx, my, hx, hy};
    lcell->head = row->elts.insert(new_elt);
    ++row->num_elts;
 
    // Expand the loose cell's bounding box to fit the new element.
    expand_aabb(grid, cell_x, cell_y, mx, my, hx, hy);
}
 
void lgrid_remove(LGrid* grid, int id, float mx, float my)
{
    mx -= grid->x;
    my -= grid->y;
    const int cell_x = to_cell_idx(mx, grid->inv_cell_w, grid->num_cols);
    const int cell_y = to_cell_idx(my, grid->inv_cell_h, grid->num_rows);
    LGridRow* row = &grid->rows[cell_y];
    LGridLooseCell* lcell = &row->lcells[cell_x];
 
    // Find the element in the loose cell.
    int* link = &lcell->head;
    while (row->elts[*link].id != id)
        link = &row->elts[*link].next;
 
    // Remove the element from the loose cell and row.
    const int elt_idx = *link;
    *link = row->elts[elt_idx].next;
    row->elts.erase(elt_idx);
    --row->num_elts;
}
 
void lgrid_move(LGrid* grid, int id, float prev_mx, float prev_my, float mx, float my)
{
    const int prev_cell_x = lgrid_cell_x(grid, prev_mx);
    const int prev_cell_y = lgrid_cell_y(grid, prev_my);
    const int new_cell_x = lgrid_cell_x(grid, mx);
    const int new_cell_y = lgrid_cell_y(grid, my);
 
    if (prev_cell_x == new_cell_x && prev_cell_y == new_cell_y)
        lgrid_move_cell(grid, id, prev_cell_x, prev_cell_y, mx, my);
    else
    {
        LGridRow* row = &grid->rows[prev_cell_y];
        LGridLooseCell* lcell = &row->lcells[prev_cell_x];
 
        // Find the element in the loose cell.
        int* link = &lcell->head;
        while (row->elts[*link].id != id)
            link = &row->elts[*link].next;
 
        const int elt_idx = *link;
        const float hx = row->elts[elt_idx].hx;
        const float hy = row->elts[elt_idx].hy;
 
        // If the element has moved into a different loose cell, remove
        // remove the element from the previous loose cell and row.
        *link = row->elts[elt_idx].next;
        row->elts.erase(elt_idx);
        --row->num_elts;
 
        // Now insert the element to its new position.
        lgrid_insert(grid, id, mx, my, hx, hy);
    }
}
 
void lgrid_move_cell(LGrid* grid, int id, int cell_x, int cell_y, float mx, float my)
{
    LGridRow* row = &grid->rows[cell_y];
    LGridLooseCell* lcell = &row->lcells[cell_x];
 
    // Find the element in the loose cell.
    int elt_idx = lcell->head;
    while (row->elts[elt_idx].id != id)
        elt_idx = row->elts[elt_idx].next;
 
    // Since the element is still inside the same cell, we can simply overwrite
    // its position and expand the loose cell's AABB.
    assert(lgrid_cell_x(grid, mx) == cell_x && lgrid_cell_y(grid, my) == cell_y);
    mx -= grid->x;
    my -= grid->y;
    row->elts[elt_idx].mx = mx;
    row->elts[elt_idx].my = my;
    expand_aabb(grid, cell_x, cell_y, mx, my, row->elts[elt_idx].hx, row->elts[elt_idx].hy);
}
 
SmallList<int> lgrid_query(const LGrid* grid, float mx, float my, float hx, float hy, int omit_id)
{
    mx -= grid->x;
    my -= grid->y;
    const float q_l = mx-hx, q_t = my-hy;
    const float q_r = mx+hx, q_b = my+hy;
 
    const int tmin_x = to_cell_idx(q_l, grid->inv_cell_w, grid->num_cols);
    const int tmax_x = to_cell_idx(q_r, grid->inv_cell_w, grid->num_cols);
    const int tmin_y = to_cell_idx(q_t, grid->inv_cell_h, grid->num_rows);
    const int tmax_y = to_cell_idx(q_b, grid->inv_cell_h, grid->num_rows);
 
    SmallList<int> res;
    for (int ty = tmin_y; ty <= tmax_y; ++ty)
    {
        int* tight_row = grid->tcell_heads + ty*grid->num_cols;
        for (int tx = tmin_x; tx <= tmax_x; ++tx)
        {
            // Iterate through the loose cells that intersect the tight cells.
            int tcell_idx = tight_row[tx];
            while (tcell_idx != -1)
            {
                const LGridTightCell* tcell = &grid->tcells[tcell_idx];
                const LGridLooseCell* lcell = &grid->rows[tcell->loose_y].lcells[tcell->loose_x];
 
                // If the search rectangle intersects the loose cell's AABB, search the
                // elements in the loose cell.
                if (q_l <= lcell->r && q_r >= lcell->l &&
                    q_t <= lcell->b && q_b >= lcell->t)
                {
                    const LGridRow* row = &grid->rows[tcell->loose_y];
                    int elt_idx = lcell->head;
                    while (elt_idx != -1)
                    {
                        const LGridElt* elt = &row->elts[elt_idx];
                        const float e_l = elt->mx-elt->hx, e_t = elt->my-elt->hy;
                        const float e_r = elt->mx+elt->hx, e_b = elt->my+elt->hy;
 
                        // If the element intersects the search rectangle, add it to the
                        // resulting elements unless it has an ID that should be omitted.
                        if (q_l <= e_r && q_r >= e_l && q_t <= e_b && q_b >= e_t && elt->id != omit_id)
                            res.push_back(elt->id);
                        elt_idx = elt->next;
                    }
                }
                tcell_idx = tcell->next;
            }
        }
    }
    return res;
}
 
bool lgrid_in_bounds(const LGrid* grid, float mx, float my, float hx, float hy)
{
    mx -= grid->x;
    my -= grid->y;
    const float x1 = mx-hx, y1 = my-hy, x2 = mx+hx, y2 = my+hy;
    return x1 >= 0.0f && x2 < grid->w && y1 >= 0.0f && y2 < grid->h;
}
 
void lgrid_optimize(LGrid* grid)
{
    // Clear all the tight cell data.
    const int num_cells = grid->num_rows * grid->num_cols;
    for (int j=0; j < num_cells; ++j)
        grid->tcell_heads[j] = -1;
    grid->tcells.clear();
 
    #pragma omp parallel for
    for (int ly=0; ly < grid->num_rows; ++ly)
    {
        // Optimize the memory layout of the row.
        LGridRow* row = &grid->rows[ly];
        row_optimize(row, grid->num_cols);
 
        // Recalculate the bounding boxes for all the loose cells.
        for (int lx=0; lx < grid->num_cols; ++lx)
        {
            // Empty the loose cell's bounding box.
            LGridLooseCell* lcell = &row->lcells[lx];
            lcell->l = FLT_MAX;
            lcell->t = FLT_MAX;
            lcell->r = -FLT_MAX;
            lcell->b = -FLT_MAX;
 
            // Expand the bounding box by each element's extents in
            // the loose cell.
            int elt_idx = lcell->head;
            while (elt_idx != -1)
            {
                const LGridElt* elt = &row->elts[elt_idx];
                lcell->l = min_flt(lcell->l, elt->mx - elt->hx);
                lcell->t = min_flt(lcell->t, elt->my - elt->hy);
                lcell->r = max_flt(lcell->r, elt->mx + elt->hx);
                lcell->b = max_flt(lcell->b, elt->my + elt->hy);
                elt_idx = elt->next;
            }
        }
    }
 
    for (int ly=0; ly < grid->num_rows; ++ly)
    {
        LGridRow* row = &grid->rows[ly];
        for (int lx=0; lx < grid->num_cols; ++lx)
        {
            // Insert the loose cell to all the tight cells in which
            // it now belongs.
            LGridLooseCell* lcell = &row->lcells[lx];
            const int tmin_x = to_cell_idx(lcell->l, grid->inv_cell_w, grid->num_cols);
            const int tmax_x = to_cell_idx(lcell->r, grid->inv_cell_w, grid->num_cols);
            const int tmin_y = to_cell_idx(lcell->t, grid->inv_cell_h, grid->num_rows);
            const int tmax_y = to_cell_idx(lcell->b, grid->inv_cell_h, grid->num_rows);
            for (int ty = tmin_y; ty <= tmax_y; ++ty)
            {
                int* tight_row = grid->tcell_heads + ty*grid->num_cols;
                for (int tx = tmin_x; tx <= tmax_x; ++tx)
                {
                    const LGridTightCell new_tcell = {tight_row[tx], lx, ly};
                    tight_row[tx] = grid->tcells.insert(new_tcell);
                }
            }
        }
    }
}