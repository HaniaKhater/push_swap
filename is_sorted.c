#include "push_swap.h"

int	is_sorted(t_stack *s)
{
	t_node	*tmp;

	tmp = s->head;
	if (!tmp->nb)
		return (0);
	while (tmp->next)
	{
		if (tmp->nb > tmp->next->nb)
			return (0);
		else
			tmp = tmp->next;
	}
	return (1);
}
