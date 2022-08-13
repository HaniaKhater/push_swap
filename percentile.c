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
	if (len >= 500)
		index = len / 7;
	else
		index = len / 5;
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
		ft_putstr("cutoff point is: ");
		ft_putnbr_fd(cutoff, 1);
		ft_putstr("\n");
		while (a->size)
		{
			if (a->head->nb <= cutoff)
			{
				ft_putnbr_fd(a->head->nb, 1);
				ft_putstr(" is small enough\n");
				call("pb", a, b);
			}
			else
			{
				ft_putnbr_fd(a->head->nb, 1);
				ft_putstr(" is not small enough\n");
				call("ra", a, b);
				break ;
			}
		}
	}
}
