/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:22:51 by beefie            #+#    #+#             */
/*   Updated: 2024/07/24 12:12:14 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	instructions(t_list **stacka, t_list **stackb, t_instrs instr)
{
	if (instr == PA)
		push(stacka, stackb);
	else if (instr == PB)
		push(stackb, stacka);
	else if (instr == SA)
		swap(stacka);
	else if (instr == SB)
		swap(stackb);
	else if (instr == SS)
	{
		swap(stacka);
		swap(stackb);
	}
	else if (instr == RA)
		rotate(stacka);
	else if (instr == RB)
		rotate(stackb);
	else if (instr == RR)
	{
		rotate(stacka);
		rotate(stackb);
	}
	else if (instr == RRA)
		reverse_rotate(stacka);
	else if (instr == RRB)
		reverse_rotate(stackb);
	else if (instr == RRR)
	{
		reverse_rotate(stacka);
		reverse_rotate(stackb);
	}
}

void	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (!*stack || (*stack)->next)
		return ;
	first = *stack;
	second = (*stack)->next;
	*stack = second;
	first->next = second->next;
	second->next = first;
}

void	push(t_list **stacka,t_list **stackb)
{
	t_list	*first;
	t_list	*fromb;

	if (!*stackb)
		return ;
	fromb = *stackb;
	first = *stacka
	*stackb = (*stackb)->next;
	*stacka = fromb;
	fromb->next = first;
}

void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = (*stack)->next;
	last = ft_lstlast(*stack);
	last->next = first;
	first->next = NULL;
}

void	reverse_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;
	t_list	*secondlast;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	secondlast = *stack
	while (secondlast->next->next != NULL)
		secondlast = secondlast->next;
	last = secondlast->next;
	*stack = last;
	last->next = first;
	secondlast->next = NULL;
}
