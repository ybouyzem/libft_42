/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:02:02 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/13 15:38:29 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	tmp = lst;
	p = tmp->next;
	del(tmp->content);
	free(tmp);
	tmp = p;
}
