/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 23:51:56 by hkhater           #+#    #+#             */
/*   Updated: 2022/08/07 23:52:04 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		return (0);
	a = parse_input(&argv[1]);
	if (a->size == 1 || is_sorted(a))
		return (0);
	b = create_stack();
	if (!b)
		return (0);
	if (a->size == 2)
		call("sa", a, b);
	else if (a->size == 3)
		sort3(a, b);
	else if (a->size == 5)
		sort5(a, b);
	else
	{
		push_percentile(a, b);
		push_max(a, b);
	}
	print_stack(a);
	free_stack(a);
	free_stack(b);
	free(a);
	free(b);
	return (0);
}
