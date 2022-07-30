#include "push_swap.h"

void    sort2(t_stack *a)
{
    swap(a);
}

void    sort3(t_stack *a)
{
    if (a->head > a->head->next && a->head < a->tail && a->head->next < a->tail)
        swap(a);
    if (a->head > a->head->next && a->head > a->tail && a->head->next < a->tail)
        rotate(a);
    if (a->head < a->head->next && a->head > a->tail && a->head->next > a->tail)
        reverse_rotate(a);
    if (a->head < a->head->next && a->head < a->tail && a->head->next > a->tail)
    {
        swap(a);
        rotate(a);
    }
    if (a->head > a->head->next && a->head > a->tail && a->head->next > a->tail)
    {
        swap(a);
        rotate(a);
    }
}
