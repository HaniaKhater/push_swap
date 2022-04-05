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
