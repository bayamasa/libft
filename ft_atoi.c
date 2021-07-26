#include "libft.h"
#include <stdio.h>

static int	ft_isspace(char a)
{
	if (a == '\t' || a == '\n' || a == '\v'
		|| a == ' ' || a == '\r' || a == '\f' )
		return (1);
	return (0);
}

static int	process_flow(int sign)
{
	if (sign == -1)
	{
		return (0);
	}
	return (-1);
}

int	ft_atoi(const char *str)
{
	long	num;
	int		i;
	int		sign;

	num = 0;
	i = 0;
	sign = 1;
	if (*str == 0)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((num * 10 + (str[i] - '0')) / 10 != num)
			return (process_flow(sign));
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return ((int)(num * sign));
}

int	main()
{
	printf("%d\n", ft_atoi("9223372036854775809"));
	printf("%d\n", atoi("9223372036854775809"));
	return (0);
}
