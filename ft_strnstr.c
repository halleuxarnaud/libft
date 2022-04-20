/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaudhallerux <arnaudhallerux@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:39:20 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/19 20:11:55 by arnaudhalle      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    size_t    i;
    size_t    j;
	char *s1_less;

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

/*
int main(void)
{
	char *s1 = "see FF your FF return FF now FF";
	char *s2 = "FF";
	size_t max = strlen(s1);

	printf("Reponse attenue: %s \n", strnstr(s1, s2, max));
	printf("Ma reponse: %s \n", ft_strnstr(s1, s2, max));
}

*/
