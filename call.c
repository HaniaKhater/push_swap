/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:41:02 by hkhater           #+#    #+#             */
/*   Updated: 2022/08/08 00:41:29 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	perform(char *cmd, t_stack *a, t_stack *b)
{
	if (!ft_strcmp(cmd, "sa"))
		swap(a);
	else if (!ft_strcmp(cmd, "sb"))
		swap(b);
	else if (!ft_strcmp(cmd, "ss"))
		ss(a, b);
	else if (!ft_strcmp(cmd, "pa"))
		push(b, a);
	else if (!ft_strcmp(cmd, "pb"))
		push(a, b);
	else if (!ft_strcmp(cmd, "ra"))
		rotate(a);
	else if (!ft_strcmp(cmd, "rb"))
		rotate(b);
	else if (!ft_strcmp(cmd, "rr"))
		rr(a, b);
	else if (!ft_strcmp(cmd, "rra"))
		rrotate(a);
	else if (!ft_strcmp(cmd, "rrb"))
		rrotate(b);
	else if (!ft_strcmp(cmd, "rrr"))
		rrr(a, b);
	else
		error();
}

void	call(char *cmd, t_stack *a, t_stack *b)
{
	perform(cmd, a, b);
	ft_putstr(cmd);
	ft_putstr("\n");
}
