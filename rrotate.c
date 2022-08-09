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
	t_node	*sc_last;

	if (!s || !s->head || !s->head->next)
		return ;
	sc_last = s->head;
	while (sc_last->next->next)
		sc_last = sc_last->next;
	s->tail->next = s->head;
	s->head = s->tail;
	s->tail = sc_last;
}

void	rrr(t_stack *a, t_stack *b)
{
	rrotate(a);
	rrotate(b);
}
