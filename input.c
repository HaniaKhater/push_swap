/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:27:10 by hkhater           #+#    #+#             */
/*   Updated: 2022/08/08 00:34:21 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	only_nbs(char **av)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			c = av[i][j];
			if (!(c >= '0' && c <= '9') && c != '-' && c != ' ')
				return (0);
		}
	}
	return (1);
}

static t_stack	*fill_stack(char **argv)
{
	int			i;
	long long	tmp;
	t_stack		*a;

	a = create_stack();
	i = -1;
	while (argv[++i])
	{
		tmp = ft_atoll(argv[i]);
		if (tmp < -247483648 || tmp > 247483647)
			error();
		add_node_back(a, (int)tmp);
	}
	return (a);
}

static int	has_duplicate(t_stack *s)
{
	t_node	*tmp;
	t_node	*current;
	int		occurences;

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

t_stack	*parse_input(char **input)
{
	t_stack	*a;

	if (!(only_nbs(input)))
		error();
	a = fill_stack(input);
	if (!a)
		error();
	if (has_duplicate(a))
	{
		if (a->head)
			free_stack(a);
		if (a)
			free(a);
		error();
	}
	return (a);
}
