#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct	s_node
{
	int		nb;
	struct s_node	*next;
}		t_node;

typedef struct	s_stack
{
	t_node	*head;
	t_node	*tail;
	int	size;
}		t_stack;

/*
**	stack.c
*/

t_stack		*create_stack(void);

/*
**	input.c
*/

t_stack		*parse_input(int argc, char **input);

/*
**	error.c
*/

void		error(void);

/*
**	atoll.c
*/

long long	t_atoll(const char *str);

void	swap(t_stack *s);
void	ss(t_stack *a, t_stack *b);

void	push(t_stack *s);

void	rotate(t_stack *s);
void	rr(t_stack *a, t_stack *b);

void	reverse_rotate(t_stack *s);
void	rrr(t_stack *a, t_stack *b);

void	sort2(t_stack *a);
void	sort3(t_stack *a);
void	sort5(t_stack *a, t_stack *b);



