#include "push_swap.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	char			c;

	nb = n;
	if (n < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	c = (nb % 10) + 48;
	write(fd, &c, 1);
}

void    print_stack(t_stack *s)
{
    t_node  *tmp;

	if (!s || !s->head)
		return ;
    tmp = s->head;
    while (tmp->next)
    {
        ft_putnbr_fd(tmp->nb, 1);
		write(1, " ", 1);
        tmp = tmp->next;
    }
	if (tmp->nb)
	{
    	ft_putnbr_fd(tmp->nb, 1);
		write(1, "\n", 1);
	}
}

void	print2stacks(t_stack *a, t_stack *b)
{
	if (a)
	{
		ft_putstr("Stack A ---> ");
		print_stack(a);
		ft_putstr("\n");
	}
	if (a)
	{
		ft_putstr("Stack B ---> ");
		print_stack(b);
		ft_putstr("\n");
	}
}