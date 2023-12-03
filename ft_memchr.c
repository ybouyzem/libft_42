/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:16:50 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/10 15:48:34 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;
	unsigned char		uc;

	p = s;
	uc = c;
	i = 0;
	while (i < n)
	{
		if (p[i] == uc)
			return ((unsigned char *)&p[i]);
		i++;
	}
	return (NULL);
}
