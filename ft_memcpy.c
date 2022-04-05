/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:38:24 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/05 11:08:39 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*dest_temp;
	unsigned const char		*src_temp;
	unsigned int			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	dest_temp = (unsigned char *)dest;
	src_temp = (unsigned const char *)src;
	while (i < n)
	{
		dest_temp[i] = src_temp[i];
		i++;
	}
	return (dest);
}
