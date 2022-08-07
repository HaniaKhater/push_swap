#include "push_swap.h"

void    sort3(t_stack *a, t_stack *b)
{
    if ((a->head->nb > a->head->next->nb) && (a->head->nb < a->tail->nb) && (a->head->next->nb < a->tail->nb))
        call("sa", a, b);
    else if ((a->head->nb > a->head->next->nb) && (a->head->nb > a->tail->nb) && (a->head->next->nb < a->tail->nb))
    {
        ft_putstr("recognized right sort 3");
        call("ra", a, b);
    }
    else if ((a->head->nb < a->head->next->nb) && (a->head->nb > a->tail->nb) && (a->head->next->nb > a->tail->nb))
        call("rra", a, b);
    else if ((a->head->nb < a->head->next->nb) && (a->head->nb < a->tail->nb) && (a->head->next->nb > a->tail->nb))
    {
        call("sa", a, b);
        call("ra", a, b);
    }
    else if ((a->head->nb > a->head->next->nb) && (a->head->nb > a->tail->nb) && (a->head->next->nb > a->tail->nb))
    {
        call("sa", a, b);
        call("rra", a, b);
    }
}
