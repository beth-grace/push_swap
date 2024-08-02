/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 23:43:20 by beefie            #+#    #+#             */
/*   Updated: 2024/08/03 00:09:42 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;
	t_list	*secondlast;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	secondlast = *stack;
	while (secondlast->next->next != NULL)
		secondlast = secondlast->next;
	last = secondlast->next;
	*stack = last;
	last->next = first;
	secondlast->next = NULL;
}

void	finish5(t_list **stacka, t_list **stackb)
{
	instructions(stacka, stackb, PB);
	instructions(stacka, stackb, RA);
}
