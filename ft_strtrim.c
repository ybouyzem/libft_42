/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:01:44 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/13 15:32:56 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_mysize(const char *start, const char *end)
{
	size_t	startlen;
	size_t	endlen;
	size_t	size;

	startlen = ft_strlen(start);
	endlen = ft_strlen(end);
	size = startlen - endlen;
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*end;
	char		*r;
	size_t		i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	end = s1 + ft_strlen(s1) - 1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	while (end >= s1 && ft_strchr(set, *end))
		end--;
	end += 1;
	r = (char *)malloc(ft_mysize(s1, end) + 1);
	if (r == NULL)
		return (NULL);
	while (i < ft_mysize(s1, end))
	{
		r[i] = s1[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
