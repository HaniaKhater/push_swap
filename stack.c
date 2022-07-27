#include "push_swap.h"
#include "libft_lst/libft.h"

t_stack	*create_stack(void)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->size = 0;
	new->head = NULL;
	new->tail = NULL;
	return (new);
}

t_node	*create_node(int nb)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->nb = nb;
	new->next = NULL;
	return (new);
}

void	*add_node_back(t_stack *s, int nb)
{
	t_node	*tmp;
	t_node	*new;

	new = create_node(nb);
	if (s->head)
	{
		tmp = *s->head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = *new;
		new->next = NULL; 
	}
	else
		*s->head = new;
}

void	*add_node_front(t_stack *s, int nb)
{
	t_node	*tmp;
	t_node	*new;

	new = create_node(nb);
	if (s->head)
	{
		new->next = *s->head;
		*s->head = new;
	}
	else
		*s->head = new;
}