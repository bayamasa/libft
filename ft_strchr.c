#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	char		*str;
	char		chr;

	i = 0;
	str = (char *)s;
	chr = (char)c;
	while (str[i] != '\0')
	{
		if (str[i] == chr)
		{
			return (&str[i]);
		}
		i++;
	}
	if (c == 0)
		return (&str[i]);
	return (NULL);
}
