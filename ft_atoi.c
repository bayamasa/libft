#include "libft.h"
#include <stdio.h>

static int	ft_isspace(char a)
{
	if (a == '\t' || a == '\n' || a == '\v'
		|| a == ' ' || a == '\r' || a == '\f' )
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long			num;
	int				i;
	int				sign;

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
	// while ((str[i] >= '0' && str[i] <= '9') || (num <= (ULONG_MAX / 10) \
	// 		&& ((unsigned long)(str[i] - '0') <= (ULONG_MAX % 10))))
	// 	num = (num * 10) + (str[i++] - '0');
	// if (num >= LONG_MAX && sign > 0)
	// 	return (-1);
	// if (num >= (unsigned long)(LONG_MAX) + 1 && sign < 0)
	// 	return (0);
	return ((int)(num * sign));
}

// int main()
// {
// 	char a[10000] = "1844674407370955161";
// 	printf("%d\n", ft_atoi(a));
// 	printf("%d\n", atoi(a));

// }
