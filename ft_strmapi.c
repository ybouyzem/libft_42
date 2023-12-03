/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:36:48 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/10 17:45:42 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		l;
	char	*p;

	if (s == NULL || f == NULL)
		return (0);
	p = (char *)s;
	l = ft_strlen(s);
	p = (char *)malloc(l + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
