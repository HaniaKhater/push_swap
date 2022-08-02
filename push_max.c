#include "push_swap.h"

static void    put_max_top(t_stack *a, t_stack *b, int nb)
{
    int     pos;

    while (s->head != max)
    {
        pos = find_position(max, s);
        if (pos < s->size / 2)
            call("rb", a, b);
        else
            call("rrb", a, b);
    }
}

void    push_max(t_stack *a, t_stack *b)
{
    // a is empty and b is roughly sorted
    int     max;

    while (b->head)
    {
        max = find_max(b);
        put_node_top(b, max);
        call("pa", a, b);
    }
}