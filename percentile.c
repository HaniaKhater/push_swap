#include "push_swap.h"

static int     find_cutoff(t_stack *s)
{
    int     len;
    int     index;
    int     cutoff;
    int     *arr;

    arr = fill_array(s);
    arr = sort_array(arr);
    len = array_len(arr);
    if (len >= 500)
        index = len / 7;
    else
        index = len / 5;
    cutoff = arr[index];
    free(arr);
    return (cutoff);
}

void            push_percentile(t_stack *a, t_stack *b)
{
    int     cutoff;
    t_node  *tmp;

    while (a->head)
    {
        tmp = a->head;
        cutoff = find_cutoff(a);
        while (a->size)
        {
            if (tmp->nb <= cutoff)
                call("pb", a, b);
            else
                call("ra", a, b);
        }
        push_max(a, b);
    }
}