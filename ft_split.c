#include "libft.h"

static char	**free_all_strs(char **result)
{
	unsigned int	i;

	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static int	calc_array_size(char const *str, char c)
{
	int	size;
	int	state;
	int	i;

	i = 0;
	size = 0;
	state = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			state = 0;
		else if (state == 0)
		{
			state = 1;
			size++;
		}
		i++;
	}
	return (size);
}

static int	calc_start_point(char const *str, char sep, int start)
{
	int	size;
	int	state;
	int	i;

	i = 0;
	size = 0;
	state = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == sep)
			state = 0;
		else if (state == 0)
		{
			state = 1;
			size++;
		}
		if (size == start + 1)
			return (i);
		i++;
	}
	return (i);
}

static char	*get_str(char const *str, char sep, int skipcount)
{
	char	*new_str;
	int		state;
	int		start;
	int		len;

	state = 0;
	len = 0;
	start = calc_start_point(str, sep, skipcount);
	while (str[start + len] != sep && str[start + len] != '\0')
		len++;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, str + start, len + 1);
	return (new_str);
}

char	**ft_split(char const *str, char sep)
{
	char	**result;
	int		size;
	int		i;

	i = 0;
	if (str == NULL)
		return (NULL);
	size = calc_array_size(str, sep);
	result = (char **)malloc(sizeof(char *) * (size + 1));
	if (result == NULL)
		return (NULL);
	while (i < size)
	{
		result[i] = get_str(str, sep, i);
		if (result[i] == NULL)
			return (free_all_strs(result));
		i++;
	}
	result[i] = NULL;
	return (result);
}
