#include "push_swap.h"

void    reverse_rotate(t_stack *s)
{
    t_node  *tmp;

    if (!s || !s->head || !s->head->next)
        return;
    tmp = s->head;
    while (tmp->next->next)
        tmp = tmp->next;
    tmp->next = NULL;
    s->tail->next = s->head;
    s->head = s->tail;
    s->tail = tmp;
}

void    rrr(t_stack *a, t_stack *b)
{
    reverse_rotate(a);
    reverse_rotate(b);
}