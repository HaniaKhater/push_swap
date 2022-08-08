/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percentile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:12:38 by hkhater           #+#    #+#             */
/*   Updated: 2022/08/08 00:13:16 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_cutoff(t_stack *s)
{
	int	len;
	int	index;
	int	cutoff;
	int	*arr;

	arr = fill_array(s);
	arr = sort_array(arr);
	len = array_len(arr);
	ft_putnbr_fd(len, 1);
	if (len >= 500)
		index = len / 7;
	else
		index = len / 5;
	ft_putnbr_fd(index, 1);
	cutoff = arr[index];
	free(arr);
	return (cutoff);
}

void	push_percentile(t_stack *a, t_stack *b)
{
	int		cutoff;

	while (a->head)
	{
		cutoff = find_cutoff(a);
		ft_putstr("found cutoff point: \n");
		ft_putnbr_fd(cutoff, 1);
		while (a->size)
		{
			if (a->head->nb <= cutoff)
				call("pb", a, b);
			else
			{
				call("ra", a, b);
				break;
			}
		}
	}
	push_max(a, b);
}
