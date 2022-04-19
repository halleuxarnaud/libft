/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:36:25 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/13 11:24:39 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cell;

	cell = malloc(sizeof(t_list));
	if (content == NULL)
		cell->next = NULL;
	if (!cell)
		return (NULL);
	cell->content = content;
	cell->next = NULL;
	return (cell);
}
