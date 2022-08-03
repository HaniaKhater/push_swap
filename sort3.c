#include "push_swap.h"

void    sort3(t_stack *a, t_stack *b)
{
    if (a->head > a->head->next && a->head < a->tail && a->head->next < a->tail)
        call("sa", a, b);
    if (a->head > a->head->next && a->head > a->tail && a->head->next < a->tail)
        call("ra", a, b);
    if (a->head < a->head->next && a->head > a->tail && a->head->next > a->tail)
        call("rra", a, b);
    if (a->head < a->head->next && a->head < a->tail && a->head->next > a->tail)
    {
        call("sa", a, b);
        call("ra", a, b);
    }
    if (a->head > a->head->next && a->head > a->tail && a->head->next > a->tail)
    {
        call("sa", a, b);
        call("rra", a, b);
    }
}
