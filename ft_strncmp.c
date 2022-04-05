/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:39:16 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/05 11:27:10 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, int n)
{
	int		i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') || i <= n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int main(void)
{
    char *s1 = "Hello";
    char *s2 = "Hell0";

    printf("%d", ft_strncmp(s1, s2, 5));
}
*/