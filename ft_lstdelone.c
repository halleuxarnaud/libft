/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:54:27 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/21 14:24:52 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*pprec;
	t_list	*cur;
	int		i;

	pprec = lst;
	cur = lst;
	if (!lst)
		return ;
	if (del == 0)
	{
		lst = lst->next;
		free (cur);
		return ;
	}
	i = 0;
	while (i < (int)del)
	{
		i++;
		pprec = cur;
		cur = cur->next;
	}
	pprec->next = cur->next;
	free (cur);
}
