#include "libft.h"

static int	get_trim_start_point(char const *str, char const *set)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (set[i] != '\0')
	{
		if (str[start] == set[i])
		{
			i = 0;
			start++;
		}
		else
			i++;
	}
	return (start);
}

static int	get_trim_end_point(char const *str, char const *set)
{
	int	i;
	int	end;

	i = 0;
	end = ft_strlen(str);
	while (set[i] != '\0' && end)
	{
		if (str[end - 1] == set[i])
		{
			i = 0;
			end--;
		}
		else
			i++;
	}
	return (end);
}

char	*ft_strtrim(char const *str, char const *set)
{
	int		start;
	int		end;
	char	*new_str;

	if (str == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(str));
	start = get_trim_start_point(str, set);
	end = get_trim_end_point(str, set);
	if (start >= end)
		return (ft_strdup(""));
	new_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, str + start, end - start + 1);
	return (new_str);
}
