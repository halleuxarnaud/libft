/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:39:20 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/04 12:39:23 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*tmp;
	char	*mem;
	size_t	size;

	tmp = (char *)s1;
	mem = (char *)(s1 + n);
	size = ft_strlen((char *)s2);
	if (!size)
		return (tmp);
	while ((tmp = ft_strchr(tmp, *s2)) && tmp <= mem)
	{
		if ((tmp + size <= mem) && !ft_strncmp(tmp, (char *)s2, size))
			return (tmp);
		tmp++;
	}
	return (NULL);
}