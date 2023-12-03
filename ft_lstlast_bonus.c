/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:40:28 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/12 13:09:00 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;
	int		size;
	int		i;

	i = 0;
	p = lst;
	size = ft_lstsize(lst);
	while (i < size - 1)
	{
		p = p->next;
		i++;
	}
	return (p);
}
