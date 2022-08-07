/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:19:35 by hkhater           #+#    #+#             */
/*   Updated: 2022/08/08 00:20:59 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min(t_stack *s)
{
	t_node	*tmp;
	int		min;

	tmp = s->head;
	min = tmp->nb;
	while (tmp->next)
	{
		if (min > tmp->nb)
			min = tmp->nb;
		tmp = tmp->next;
	}
	if (min > tmp->nb)
		min = tmp->nb;
	return (min);
}

int	find_max(t_stack *s)
{
	t_node	*tmp;
	int		max;

	tmp = s->head;
	max = tmp->nb;
	while (tmp->next)
	{
		if (max < tmp->nb)
			max = tmp->nb;
		tmp = tmp->next;
	}
	if (max < tmp->nb)
		max = tmp->nb;
	return (max);
}

int	find_position(int nb, t_stack *s)
{
	int		pos;
	t_node	*tmp;

	pos = 1;
	tmp = s->head;
	while (tmp->next)
	{
		if (tmp->nb == nb)
			return (pos);
		pos++;
		tmp = tmp->next;
	}
	if (tmp->nb == nb)
		return (pos);
	return (-1);
}

void	pb_min_max(t_stack *a, t_stack *b)
{
	int	min;
	int	max;
	int	pos_min;
	int	pos_max;

	min = find_min(a);
	max = find_max(a);
	pos_min = find_position(min, a);
	pos_max = find_position(max, a);
	while (a->head->nb < max)
	{
		if (pos_max < 4)
			call("ra", a, b);
		else
			call("rra", a, b);
	}
	call("pb", a, b);
	while (a->head->nb > min)
	{
		if (pos_min < 3)
			call("ra", a, b);
		else
			call("rra", a, b);
	}
	call("pb", a, b);
}

void	sort5(t_stack *a, t_stack *b)
{
	pb_min_max(a, b);
	sort3(a, b);
	call("pa", a, b);
	call("pa", a, b);
	call("ra", a, b);
}
