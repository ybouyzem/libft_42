/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:31:26 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/13 12:10:22 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_move(void *dst, const void *src, size_t len)
{
	size_t	tmp;
	size_t	i;

	tmp = len;
	if (src < dst && src + len > dst)
	{
		while (tmp != 0)
		{
			((unsigned char *)dst)[tmp - 1] = 
				((const unsigned char *)src)[tmp - 1];
			tmp--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (len == 0)
		return (dst);
	return (ft_move(dst, src, len));
}
