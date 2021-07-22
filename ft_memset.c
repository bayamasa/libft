#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)buf;
	while (i < n)
	{
		a[i] = (unsigned char)ch;
		i++;
	}
	return (a);
}
