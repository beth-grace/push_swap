/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:49:49 by beefie            #+#    #+#             */
/*   Updated: 2024/07/24 15:31:35 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quick(t_list **stack)
{
	if ((*stack->content > (*stack)->next) && (*stack->content > (*stack)->next->next))
		instructions(RA);
	else if (((*stack)->next > *stack->content) && ((*stack)->next > (*stack)->next->next)
		instructions(RRA);
	if (*stack->content > (*stack)->next)
		instructions(SA);
}
