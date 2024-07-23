/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:22:51 by beefie            #+#    #+#             */
/*   Updated: 2024/07/23 18:13:52 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	instructions(t_list **stacka, t_list **stackb, t_instrs instr)
{
	if (intrs == PA)
	{
		push(stacka, stackb);
		ft_printf("pa");
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
