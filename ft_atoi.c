/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:37:17 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/25 16:53:06 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_verif(char c)
{
	if (c && (c == '\f' || c == '\t' || c == ' '
			|| c == '\n' || c == '\r' || c == '\v'))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int						sign;
	unsigned long long		result;
	int						i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_verif(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i++] - '0';
		if (result > LLONG_MAX && sign == 1)
			return (-1);
		if (result > LLONG_MAX && sign == -1)
			return (0);
	}
	result *= sign;
	return ((int)(result));
}
