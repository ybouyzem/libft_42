/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:44:16 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/13 15:39:17 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;
	void	*content;

	result = NULL;
	node = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (node == NULL)
		{
			ft_lstclear(&result, del);
			del(content);
			return (NULL);
		}
		if (result == NULL)
			result = node;
		else
			ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}
