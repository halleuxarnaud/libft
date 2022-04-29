/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:39:20 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/20 18:01:06 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;
	char		*s1_less;

	s1_less = (char *)s1;
	i = 0;
	if (!*s2)
		return (s1_less);
	while (s1_less[i] && i < len)
	{
		j = 0;
		while (s1_less[i + j] == s2[j] && i + j < len)
		{
			if (!s2[j])
				return (s1_less + i);
			j++;
		}
		if (!s2[j])
			return (s1_less + i);
		i++;
	}
	return (NULL);
}
