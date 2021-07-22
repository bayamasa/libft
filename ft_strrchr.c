#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	chr;

	chr = (char)c;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (i != -1)
	{
		if (s[i] == chr)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}
