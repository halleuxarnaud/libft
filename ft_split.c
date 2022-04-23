/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:53:26 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/23 01:55:45 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_c(char to_check, char c)
{
	if (!to_check || !c)
		return (0);
	if (to_check == c)
		return (1);
	return (0);
}

static	int	nb_blocks(char const *s, char c)
{
	int		nb;
	int		i;

	nb = 0;
	i = 0;
	while (s[i])
	{
		if ((i == 0 && !check_c(s[0], c))
			|| (i > 0 && check_c(s[i - 1], c) && !check_c(s[i], c)))
			nb++;
		i++;
	}
	return (nb);
}

static	int	*size_blocks(char const *s, char c)
{
	int		*tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(*tab) * (nb_blocks(s, c)));
	while (i < nb_blocks(s, c))
		tab[i++] = 0;
	i = 0;
	while (s[i])
	{
		if (!check_c(s[i], c))
			tab[j]++;
		else if (i > 0 && !check_c(s[i - 1], c))
			j++;
		i++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		*tab;
	char	**dest;

	i = 0;
	j = 0;
	dest = malloc(sizeof(dest) * (nb_blocks(s, c) + 1));
	tab = size_blocks(s, c);
	if (!s || !dest || !tab)
		return (NULL);
	while (j < nb_blocks(s, c))
	{
		k = 0;
		while (check_c(s[i], c))
			i++;
		dest[j] = malloc(sizeof(*dest) * (tab[j] + 1));
		if (!dest)
			return (NULL);
		while (k < tab[j])
			dest[j][k++] = s[i++];
		dest[j++][k] = '\0';
	}
	dest[j] = NULL;
	free(tab);
	return (dest);
}
