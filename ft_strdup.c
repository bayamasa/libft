#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	dest = (char *)malloc(sizeof(*dest) * (len + 1));
	if (dest == 0)
		return (0);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
