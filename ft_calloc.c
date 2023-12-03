/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:26:10 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/12 11:19:26 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*array;
	size_t			i;

	i = 0;
	array = (unsigned char *)malloc(count * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, count * size);
	return ((void *)(array));
}
