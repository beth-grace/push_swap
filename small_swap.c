/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:49:49 by beefie            #+#    #+#             */
/*   Updated: 2024/07/30 18:12:31 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quick3(t_list **stack) //Sort 3
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = *stack->content;
	second = *stack->next->content;
	third = *stack->next->next->content;
	if ((first->index > second->index) && (first->index > third->index))
		instructions(stacka, stackb, RA);
	else if ((second->index > first->index) && (second->index > third->index))
		instructions(stacka, stackb, RRA);
	first = *stack->content;
	second = *stack->next->content;
	if (first->index > second->index)
		instructions(SA);
}

void	quick4(t_list **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;
	t_stack	*fourth;

	first = *stack->content;
	second = *stack->next->content;
	third = *stack->next->next->content;
	fourth = *stack->next->next->next->content;
	if ((second->index < first->index) && (second->index < third->index) && (second->index < fourth->index))
		instructions(stacka,stackb,SA);
	else if ((third->index < first->index) && (third->index < second->index) && (third->index < fourth->index))
	{
		instructions(stacka,stackb,RRA);
		instructions(stacka,stackb,RRA);
	}
	else if ((fourth->index < first->index) && (fourth->index < second->index) && (fourth->index < third->index))
		instructions(stacka,stackb,RRA);
	instructions(stacka, stackb, PA);
	quick3(stacka);
	instructions(stacka, stackb, PB);
}

void	quick5(t_list **stack)
{
	char	*first;
	char	*second;
	char	*third;
	char	*fourth;
	char	*fifth;

	first = *stack->content;
	second = *stack->next->content;
	third = *stack->next->next->content;
	fourth = *stack->next->next->next->content;
	fifth = ft_lstlast(*stack)->content;
	if ((second->index > first->index) && (second->index > third->index) && (second->index > fourth->index) && (second->index > fifth->index))
		instructions(stacka, stackb, SA);
	else if ((third > first) && (third > second) && (third > fourth) && (third > fifth))
		thirdfat(stacka);
	else if ((fourth > first) && (fourth > second) && (fourth > third) && (fourth > fifth))
		fourthfat(stacka);
	else if ((fifth > first) && (fifth > second) && (fifth > third) && (fifth > fourth))
		instructions(stacka, stackb,RRA)
	instructions(stacka, stackb, PA);
	quick4(stacka);
	finish5(*stack);
}

void	thirdfat(t_list **stack)
{
	instructions(stacka, stackb, RRA);
	instrcutions(stacka, stackb, RRA);
}

void	fourthfat(t_list **stack)
{
	instructions(stacka, stackb, RRA);
	instructions(stacka, stackb, RRA);
}

void	finish5(t_list **stack)
{
	instructions(PB);
	instructions(RA);
}
