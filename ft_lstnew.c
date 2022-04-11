/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:36:25 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/11 16:17:56 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cell;

	cell = malloc(sizeof(t_list));
	if (!content || !cell)
		return (NULL);
	cell->content = content;
	cell->next = NULL;
	return (cell);
}
