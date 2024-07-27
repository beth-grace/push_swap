/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:11:02 by beefie            #+#    #+#             */
/*   Updated: 2024/07/17 18:05:35 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftbonus.h"

t_list *ft_lstnew(void *content);
{
	t_list	*node;

	node = malloc(sizeof (t_list));
	node->content = content;
	node->next = 0;
	return (node);
}
