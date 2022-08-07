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

	while (b->head->nb != max)
	{
		pos = find_position(max, b);
		if (pos < b->size / 2)
			call("rb", a, b);
		else
			call("rrb", a, b);
	}
}

void	push_max(t_stack *a, t_stack *b)
{
	int	max;

	while (b->head)
	{
		max = find_max(b);
		put_max_top(a, b, max);
		call("pa", a, b);
	}
}
