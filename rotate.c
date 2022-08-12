/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:34:59 by hkhater           #+#    #+#             */
/*   Updated: 2022/08/08 00:36:55 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *s)
{
	t_node	*tmp;

	if (!s || !s->head || !s->head->next)
		return ;
	tmp = s->head;
	s->head = s->head->next;
	tmp->next = NULL;
	s->tail->next = tmp;
	s->tail = tmp;
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
}
