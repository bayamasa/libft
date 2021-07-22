#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	if (!lst || !f)
		return (NULL);
	new_list = ft_lstnew((*f)(lst->content));
	if (new_list == NULL)
	{
		ft_lstclear(&new_list, del);
		return (NULL);
	}
	lst = lst->next;
	while (lst)
	{
		new_elem = ft_lstnew((*f)(lst->content));
		if (new_elem == NULL)
		{
			ft_lstclear(&new_elem, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
