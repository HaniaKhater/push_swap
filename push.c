/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:38:22 by hkhater           #+#    #+#             */
/*   Updated: 2022/08/08 00:39:00 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *src, t_stack *dst)
{
	t_node	*tmp;

	if (!src || !src->head)
		return ;
	tmp = src->head;
	src->head = src->head->next;
	tmp->next = dst->head;
	dst->head = tmp;
	dst->tail = dst->head;
	src->size--;
	dst->size++;
	ft_putnbr_fd(src->size, 1);
	ft_putstr(" size of src\n");
	ft_putnbr_fd(dst->size, 1);
	ft_putstr(" size of dst\n");
	if (src->size == 0)
	{
		src->head = NULL;
		src->tail = NULL;
	}
}
