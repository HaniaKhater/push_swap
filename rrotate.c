/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:26:17 by hkhater           #+#    #+#             */
/*   Updated: 2022/08/08 00:26:43 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate(t_stack *s)
{
	t_node	*tmp;

	if (!s || !s->head || !s->head->next)
		return ;
	tmp = s->head;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	s->tail->next = s->head;
	s->head = s->tail;
	s->tail = tmp;
}

void	rrr(t_stack *a, t_stack *b)
{
	rrotate(a);
	rrotate(b);
}
