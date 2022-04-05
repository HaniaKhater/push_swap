#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack *b;

	if (argc == 1)
		return (0);
	a = parse_input(argc, &argv[1]);
	if (a->size == 1 || is_sorted(a))
		return (0);
	b = create_stack();
	if (!b)
		return (NULL);
	if
}
