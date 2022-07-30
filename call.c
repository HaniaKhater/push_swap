#include "push_swap.h"

static void    perform(char *cmd, t_stack *a, t_stack *b)
{
    if (strcmp(cmd, "sa"))
        swap(a);
    else if (strcmp(cmd, "sb"))
        swap(b);
    else if (!strcmp(cmd, "ss"))
        ss(a, b);
    else if (strcmp(cmd, "pa"))
        push(b, a);
    else if (strcmp(cmd, "pb"))
        push(a, b);
    else if (strcmp(cmd, "ra"))
        rotate(a);
    else if (strcmp(cmd, "rb"))
        rotate(b);
    else if (!strcmp(cmd, "rr"))
        rr(a, b);
    else if (strcmp(cmd, "rra"))
        rrotate(a);
    else if (strcmp(cmd, "rrb"))
        rrotate(b);
    else if (strcmp(cmd, "rrr"))
        rrr(a, b);
    else (error)
}

void    call(char *cmd, t_stack *a, t_stack *b)
{
    ft_putstr(cmd);
    ft_putstr("\n");
    perform(cmd, a, b);
}