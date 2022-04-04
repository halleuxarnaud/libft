/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:39:33 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/04 12:39:35 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*substr;

    if(!s)
        return (NULL);
    s_len = ft_strlen((char *)s);
    if(s_len < start)
    {
        if(!(substr = (char *)malloc(sizeof(char) * 1)))
            return(NULL);
        substr[0] = '\0';
		return (substr);
    }
    if(!(substr = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    i = 0;
    while(i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}

int main(void)
{
    char *str = "Salut je m'apelle arnaud";

    printf("%s", ft_substr(str, 6, 10));
}