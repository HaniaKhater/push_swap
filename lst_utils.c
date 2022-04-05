#include "push_swap.h"

t_node	*new_node(int nb, t_node *previous)
{
	t_node	*p;

	p = malloc(sizeof(t_node));
	if (!p)
		return (0);
	p->next = 0;
	p->number = nb;
	p->previous = previous;
	return (p);
}

void		add_node_back(t_node **anode, t_node *new)
{
	t_element	*tmp;

	if (*anode)
	{
		tmp = *anode;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		new->next = 0;
	}
	else
		*anode = new;
}

void		add_node_back(t_node **aelem, t_node *new)
{
	if (anode)
		new->next = *alst;
	else
		new->next = 0;
	*anode = new;
}


