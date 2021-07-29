#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	b;

	b = nb;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		b = b * -1;
	}
	if (b >= 10)
	{
		ft_putnbr_fd(b / 10, fd);
		b = b % 10;
	}
	if (b < 10)
	{
		ft_putchar_fd('0' + b, fd);
	}
}
