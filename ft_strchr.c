/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:18:22 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/20 18:00:14 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (0);
}

/*
int main()
{
	char	*str = "je suis une chaine sans s a partir d'ici";

	printf("%-20s %-10s %-10s\n%-20s %-10s %-10s\n",
        "resultat attendu:", strchr(str, 's'), strchr(str, 'z'),
        "Mon resultat", ft_strchr(str, 's'), ft_strchr(str, 'z'));
}
*/
