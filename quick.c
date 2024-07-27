/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:49:49 by beefie            #+#    #+#             */
/*   Updated: 2024/07/27 15:21:56 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quick3(t_list **stack) //Sort 3
{
	if ((*stack->content > (*stack)->next) && (*stack->content > (*stack)->next->next))
		instructions(RA);
	else if (((*stack)->next > *stack->content) && ((*stack)->next > (*stack)->next->next)
		instructions(RRA);
	if (*stack->content > (*stack)->next)
		instructions(SA);
}

void	quick4(t_list **stack)
{
	char	*first;
	char	*second;
	char	*third;
	char	*fourth;

	first = *stack->content;
	second = *stack->next;
	third = *stack->next->next;
	fourth = *stack->next->next->next;
	if ((second < first) && (second < third) && (second < fourth))
		instructions(SA);
	else if ((third < first) && (third < second) && (third < fourth))
	{
		instructions(RRA);
		instructions(RRA);
	}
	else if ((fourth < first) && (fourth < second) && (fourth < third))
		instructions(RRA);
	instructions(PA);
	quick3(stacka);
	instructions(PB);
}

void	quick5(t_list **stack)
{
	char	*first;
	char	*second;
	char	*third;
	char	*fourth;
	char	*fifth;

	first = *stack->content;
	second = *stack->next;
	third = *stack->next->next;
	fourth = *stack->next->next->next;
	fifth = ft_lstlast(*stack);
	if ((second > first) && (second > third) && (second > fourth) && (second > fifth))
		instructions(SA);
	else if ((third > first) && (third > second) && (third > fourth) && (third > fifth))
		thirdfat(stacka);
	else if ((fourth > first) && (fourth > second) && (fourth > third) && (fourth > fifth))
		fourthfat(stacka);
	else if ((fifth > first) && (fifth > second) && (fifth > third) && (fifth > fourth))
		instructions(RRA)
	instructions(PA);
	quick4(stacka);
	finish5(*stack);
}

void	thirdfat(t_list **stack)
{
	instructions(RRA);
	instrcutions(RRA);
}

void	fourthfat(t_list **stack)
{
	instructions(RRA);
	instructions(RRA);
}

void	finish5(t_list **stack)
{
	instructions(PB);
	instructions(PB);
	instructions(RA);
}
