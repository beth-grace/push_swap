/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:14:39 by beefie            #+#    #+#             */
/*   Updated: 2024/07/17 18:51:59 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*swp;

	if (!del || !*lst)
		return ;
	while (*lst)
	{
		swp = *lst;
		*lst = (*lst)->next;
		del(swp->content);
		free(swp);
	}
}
