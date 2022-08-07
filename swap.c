/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:23:35 by hkhater           #+#    #+#             */
/*   Updated: 2022/08/08 00:25:00 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *s)
{
	t_node	*tmp;

	if (!s || !s->head || !s->head->next)
		return ;
	if (s->size == 2)
		s->tail = s->head;
	tmp = s->head->next;
	s->head->next = s->head->next->next;
	tmp->next = s->head;
	s->head = tmp;
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
}
