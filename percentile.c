#include "push_swap.h"

int     find_cutoff(t_stack *s)
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
        index = size / 5;
    cutoff = arr[index];
    free(arr);
    return (cutoff);
}

void    push_percentile()