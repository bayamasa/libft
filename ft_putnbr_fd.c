#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	long	b;

	b = nb;
	if (nb < 0)
	{
		ft_putchar('-', fd);
		b = b * -1;
	}
	if (b >= 10)
	{
		ft_putnbr_fd(b / 10, fd);
		b = b % 10;
	}
	if (b < 10)
	{
		ft_putchar('0' + b, fd);
	}
}
