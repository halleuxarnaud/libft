/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:39:00 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/05 12:26:11 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len1;
	unsigned int	len2;
	unsigned int	i;
	char			*str;

	len1 = (ft_strlen((char *)s1) + 1);
	len2 = (ft_strlen((char *)s2));
	str = (char *)malloc(sizeof(char) * (len1 + len2));
	if (!str)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	i = -1;
	while (s2[++i])
	{
		str[len1] = s2[i];
		len1++;
	}
	str[len1] = '\0';
	return (str);
}
