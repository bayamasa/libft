#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	chr;

	i = 0;
	a = (unsigned char *)buf;
	chr = (unsigned char)ch;
	while (i < n)
	{
		a[i] = chr;
		i++;
	}
	return (a);
}
