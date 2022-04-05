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

t_stack	*add_node_back(t_stack *s, int nb)
{
	t_node	*tmp;

	tmp = create_node(val);
	if (!tmp)
		error();
}


\\\\\\\\\\\\\\\\\\\\ lst utils /////////////////////


void            add_node_back(t_node **anode, t_node *new)
{
        t_element       *tmp;

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

void            add_node_back(t_node **aelem, t_node *new)
{
        if (anode)
                new->next = *alst;
        else
                new->next = 0;
        *anode = new;
}

