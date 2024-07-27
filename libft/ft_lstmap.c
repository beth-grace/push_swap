/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:15:28 by beefie            #+#    #+#             */
/*   Updated: 2024/07/19 17:24:50 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*new_list;
	t_list	**nl_next;
	void	*space;

	if (!lst || !(f) || !(del))
		return (NULL);
	nl_next = &new_list;
	while (lst != NULL)
	{
		space = (*f)(lst->content);
		*nl_next = ft_lstnew(space);
		lst = lst->next;
		nl_next = &(*nl_next)->next;
	}
	return (new_list);
