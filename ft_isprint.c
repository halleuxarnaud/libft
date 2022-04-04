/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:38:10 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/04 12:38:14 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return(1);
    return(0);
}
/*
int main()
{
	printf("%d", ft_isprint('9'));
}
*/
