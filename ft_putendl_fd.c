#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t		i;
	char		lf;

	i = 0;
	lf = '\n';
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &lf, 1);
}
