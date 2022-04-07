/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:54:27 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/07 12:12:27 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    t_list *pprec = lst;
    t_list *cur = lst;
    int i;

    if (!lst)
        return (NULL);
    if (del == 0)
        {
            lst = lst->next;
            free(cur);
            return (NULL);
        }
    i = 0;
    while (i < del)
    {
        i++;
        pprec = cur;
        cur = cur->next;
    }
    pprec->next = cur->next;
    free(cur);
}
