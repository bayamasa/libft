/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:30:27 by mhirabay          #+#    #+#             */
/*   Updated: 2021/10/25 16:46:08 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_list)
{
	t_list	*tmp;

	if (!lst || !new_list)
		return ;
	if (*lst == NULL)
		*lst = new_list;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new_list;
	}
}
