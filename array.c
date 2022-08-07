/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 23:57:20 by hkhater           #+#    #+#             */
/*   Updated: 2022/08/08 00:02:16 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_array(t_stack *s)
{
	int		i;
	t_node	*tmp;
	int		*arr;

	i = 0;
	tmp = s->head;
	arr = malloc(sizeof(int) * s->size + 1);
	if (!arr)
		return (NULL);
	while (tmp->next)
	{
		arr[i] = tmp->nb;
		i++;
		tmp = tmp->next;
	}
	if (tmp)
	{
		arr[i] = tmp->nb;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

int	array_len(int *arr)
{
	int		len;

	len = 0;
	while (arr[len])
		len++;
	return (len);
}

int	*sort_array(int *arr)
{
	int		i;
	int		j;
	int		len;
	int		swap;

	len = array_len(arr);
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] > arr[j])
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
			j++;
		}
		i++;
	}
	return (arr);
}
