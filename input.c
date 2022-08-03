#include "push_swap.h"

static int	only_nbs(char **argv)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
		{
			c = argv[i][j];
			if (!(c >= '0' && c <= '9') || 
				c != '-' || c != ' ')
				return (0);
		}
	}
	return (1);
}

static t_stack	*fill_stack(char **argv)
{
	int		i;
	long long	tmp;
	t_stack		*a;

	a = create_stack();
	i = 0;
	while (argv[++i])
	{
		tmp = ft_atoll(argv[i]);
		if (tmp < -247483648 || tmp > 247483647)
			error();
		a = add_node_end(a, (int)tmp);
	}
	return (a);
}

static int	has_duplicate(t_stack *s)
{
	t_node	*tmp;
	t_node	*current;
	int	occurences;

	current = s->head;
	while (current)
	{
		occurences = 0;
		tmp = s->head;
		while (tmp)
		{
			if (current->nb == tmp->nb)
				occurences++;
			tmp = tmp->next;
		}
		if (occurences > 1)
			return (1);
		current = current->next;
	}
	return (0);
}

t_stack		*parse_input(int argc, char **input)
{
	t_stack	*a;

	//maybe handle argv == 2 seperately -> strsplit(input[0], ' ')
	// maybe transfer input into rwx char ** & free it if not == input 
	if (!(only_nbs(input)))
		error();
	a = fill_stack(input);
	if (!a || has_duplicate(a))
		error();
	return (a);
}
