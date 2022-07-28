#include "push_swap.h"

void    push(t_stack *src, t_stack *dst)
{
    t_node  *tmp;

    if (!src || !src->head)
        return;
    tmp = src->head;
    src->head = src->head->next;
    tmp->next = dst->head;
    dst->head = tmp;
    src->size--;
    dst->size++;
    // dst->tail = dst->head?? or not necessary?
}