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

	pos = find_position(max, b);
	mid = b->size / 2;
	ft_putnbr_fd(pos, 1);
	ft_putstr(" : position of max\n");
	ft_putnbr_fd(mid, 1);
	ft_putstr(" : middle position\n");
	if (pos == 1)
		return ;
	else if (pos > mid && pos > 2)
	{
		i = 0;
		while (i >= 0)
		{
			call("rrb", a, b);
			i--;
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

	while (b->head)
	{
		max = find_max(b);
		ft_putnbr_fd(max, 1);
		ft_putstr(" is the max\n");
		put_max_top(a, b, max);
		call("pa", a, b);
	}
}
