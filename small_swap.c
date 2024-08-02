/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:49:49 by beefie            #+#    #+#             */
/*   Updated: 2024/08/02 19:30:30 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quick3(t_list **stacka, t_list **stackb) //Sort 3
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	if (ft_lstsize(*stacka) > 2)
	{
		first = (*stacka)->content;
		second = (*stacka)->next->content;
		third = (*stacka)->next->next->content;
		if ((first->value > second->value) && (first->value > third->value))
			instructions(stacka, stackb, RA);
		else if ((second->value > first->value) && (second->value > third->value))
			instructions(stacka, stackb, RRA);
	}
	if (ft_lstsize(*stacka) > 1)
	{
		first = (*stacka)->content;
		second = (*stacka)->next->content;
		if (first->value > second->value)
			instructions(stacka, stackb, SA);
	}
}

void	quick4(t_list **stacka, t_list **stackb)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;
	t_stack	*fourth;

	first = (*stacka)->content;
	second = (*stacka)->next->content;
	third = (*stacka)->next->next->content;
	fourth = (*stacka)->next->next->next->content;
	if ((second->value < first->value) && (second->value < third->value) && (second->value < fourth->value))
		instructions(stacka,stackb,SA);
	else if ((third->value < first->value) && (third->value < second->value) && (third->value < fourth->value))
	{
		instructions(stacka,stackb,RRA);
		instructions(stacka,stackb,RRA);
	}
	else if ((fourth->value < first->value) && (fourth->value < second->value) && (fourth->value < third->value))
		instructions(stacka,stackb,RRA);
	instructions(stacka, stackb, PA);
	quick3(stacka, stackb);
	instructions(stacka, stackb, PB);
}

void	quick5(t_list **stacka, t_list **stackb)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;
	t_stack	*fourth;
	t_stack	*fifth;

	first = (*stacka)->content;
	second = (*stacka)->next->content;
	third = (*stacka)->next->next->content;
	fourth = (*stacka)->next->next->next->content;
	fifth = ft_lstlast(*stacka)->content;
	if ((second->value > first->value) && (second->value > third->value) && (second->value > fourth->value) && (second->value > fifth->value))
		instructions(stacka, stackb, SA);
	else if ((third > first) && (third > second) && (third > fourth) && (third > fifth))
		thirdfat(stacka, stackb);
	else if ((fourth > first) && (fourth > second) && (fourth > third) && (fourth > fifth))
		fourthfat(stacka,stackb);
	else if ((fifth > first) && (fifth > second) && (fifth > third) && (fifth > fourth))
		instructions(stacka, stackb,RRA);
	instructions(stacka, stackb, PA);
	quick4(stacka, stackb);
	finish5(stacka, stackb);
}

void	thirdfat(t_list **stacka,t_list **stackb)
{
	instructions(stacka, stackb, RRA);
	instructions(stacka, stackb, RRA);
}

void	fourthfat(t_list **stacka,t_list **stackb)
{
	instructions(stacka, stackb, RRA);
	instructions(stacka, stackb, RRA);
}

void	finish5(t_list **stacka, t_list **stackb)
{
	instructions(stacka, stackb, PB);
	instructions(stacka, stackb, RA);
}
