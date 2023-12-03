/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:51:49 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/11/26 16:53:53 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	char	*r;
	size_t	len;
	size_t	tmp;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	len = ls1 + ls2 + 1;
	r = (char *)malloc(len);
	if (r == NULL)
		return (NULL);
	tmp = ft_strlcpy(r, s1, ls1 + 1);
	tmp = ft_strlcat(r, s2, len);
	return (r);
}
