#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int			i;
	t_list		*tmp;

	if (!lst)
		return (0);
	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
void			lstiter_f(void *content) {
	char *s = content;

	s[0] = 'O';
	s[1] = 'K';
}

// #include <stdio.h>

// int	main()
// {
// 	t_list	*lst = ft_lstnew(ft_strdup("KO !"));
	
// 	return (0);
// }
