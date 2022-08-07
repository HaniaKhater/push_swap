/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:05:33 by hkhater           #+#    #+#             */
/*   Updated: 2022/08/08 00:10:16 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_stack *a, t_stack *b)
{
	if ((a->head->nb > a->head->next->nb) && (a->head->nb < a->tail->nb)
		&& (a->head->next->nb < a->tail->nb))
		call("sa", a, b);
	else if ((a->head->nb > a->head->next->nb) && (a->head->nb > a->tail->nb)
		&& (a->head->next->nb < a->tail->nb))
		call("ra", a, b);
	else if ((a->head->nb < a->head->next->nb) && (a->head->nb > a->tail->nb)
		&& (a->head->next->nb > a->tail->nb))
		call("rra", a, b);
	else if ((a->head->nb < a->head->next->nb) && (a->head->nb < a->tail->nb)
		&& (a->head->next->nb > a->tail->nb))
	{
		call("sa", a, b);
		call("ra", a, b);
	}
	else if ((a->head->nb > a->head->next->nb) && (a->head->nb > a->tail->nb)
		&& (a->head->next->nb > a->tail->nb))
	{
		call("sa", a, b);
		call("rra", a, b);
	}
}
