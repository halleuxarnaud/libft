/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:48:00 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/11 16:28:19 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t		i;
	size_t		j;

	i = ft_strlen(dest);
	j = ft_strlen((char *)src);
	if (destsize < i)
	{
		return (destsize + j);
	}
	while (destsize > 0 && i < destsize - 1 && src[j])
		dest[i++] = src[j++];
	while (src[j++])
		i++;
	return (i + '\0');
}
