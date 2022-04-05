#include "push_swap.h"

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);	//or EXIT_FAILURE or -1 instead of 1
}
