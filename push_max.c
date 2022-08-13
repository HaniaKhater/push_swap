/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:22:58 by hkhater           #+#    #+#             */
/*   Updated: 2022/08/08 00:23:07 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	put_max_top(t_stack *a, t_stack *b, int max)
{
	int	pos;
	int	mid;
	int	i;
	int	moves;

	pos = find_position(max, b);
	mid = b->size / 2;
	if (pos == 1)
		return ;
	if (pos == 2)
		call("sb", a, b);
	else if (pos > mid && pos > 2)
	{
		i = 0;
		moves = b->size + 1 - pos;
		while (i < moves)
		{
			call("rrb", a, b);
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < pos - 1)
		{

			call("rb", a, b);
			i++;
		}
	}
}

void	push_max(t_stack *a, t_stack *b)
{
	int	max;

	while (b->size)
	{
		max = find_max(b);
		put_max_top(a, b, max);
		call("pa", a, b);
	}
}
