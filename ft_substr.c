/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:39:33 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/25 22:32:18 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	getsublen(int k, int start, int len, const char *s)
{
	while (s[k + start])
		k++;
	if (len > k)
		len = k;
	return (len);
}

static	int	casestartfar(char **substr)
{
	*substr = (char *)malloc(sizeof(char) * 1);
	if (!*substr)
		return (0);
	*substr[0] = '\0';
	return (1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*substr;
	unsigned int	k;

	k = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (s_len < start)
	{
		if (!casestartfar(&substr))
			return (NULL);
		return (substr);
	}
	len = getsublen(k, start, len, s);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < len)
		substr[i] = s[start + i];
	substr[i] = '\0';
	return (substr);
}
