/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 23:54:55 by hkhater           #+#    #+#             */
/*   Updated: 2022/08/07 23:54:58 by hkhater          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				nb;
	struct s_node	*next;
}		t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	int		size;
}		t_stack;

int			is_sorted(t_stack *s);
/*
**	stack.c
*/

t_stack		*create_stack(void);
void		add_node_back(t_stack *s, int nb);

/*
**	input.c
*/

t_stack		*parse_input(char **input);

/*
**	error.c
*/

void		error(void);

/*
**	atoll.c
*/

long long	ft_atoll(const char *str);
int			ft_strcmp(const char *s1, const char *s2);
void		ft_putstr(char *str);

void		swap(t_stack *s);
void		ss(t_stack *a, t_stack *b);

void		push(t_stack *src, t_stack *dst);

void		rotate(t_stack *s);
void		rr(t_stack *a, t_stack *b);

void		rrotate(t_stack *s);
void		rrr(t_stack *a, t_stack *b);

void		call(char *cmd, t_stack *a, t_stack *b);

int			find_max(t_stack *s);
int			find_position(int nb, t_stack *s);

void		sort3(t_stack *a, t_stack *b);
void		sort5(t_stack *a, t_stack *b);

int			*fill_array(t_stack *s);
int			array_len(int *arr);
int			*sort_array(int *arr);

void		push_percentile(t_stack *a, t_stack *b);

void		push_max(t_stack *a, t_stack *b);

//DELETE

void		ft_putnbr_fd(int n, int fd);
void		print_stack(t_stack *s);

#endif
