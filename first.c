/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:52:23 by beefie            #+#    #+#             */
/*   Updated: 2024/08/02 20:50:52 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_three(t_list **stacka, t_list **stackb)
{
	t_stack	*content;
	int	split;
	int	bot_split;
	
	split = ft_lstsize(*stacka);
	bot_split = split / 64 + 10;
	split = split - (split / 64) - 10;
	while(ft_lstsize(*stacka) > 3 && !is_stack_sorted(*stacka))
	{
		content = (*stacka)->content;
		if (content->index > 2 && content->index > split)
		{
			instructions(stacka, stackb, PB);
			split--;
		}
		else if (content->index > 2 && content->index < bot_split)
		{
			instructions(stacka, stackb, PB);
			instructions(stacka, stackb, RB);
			bot_split++;
		}
		else
			instructions(stacka, stackb, RA);
	}
}

void	find_next(t_list **stacka, t_list **stackb)
{
	t_stack	*content;
	t_list	*temp;
	int	index;

	index = 0;
	content = (*stackb)->content;
	temp = *stackb;
	while (content->index != ft_lstsize(*stacka) && stackb)
	{
		index++;
		temp = temp->next;
		content = temp->content;
	}
	if (index > (ft_lstsize(*stackb) / 2))
	{
		while (index < ft_lstsize(*stackb))
		{
			instructions(stacka, stackb, RRB);
			index++;
		}
	}
	else 
	{
		while (index > 0)
		{
			instructions(stacka, stackb, RB);
			index--;
		}
	}
	instructions(stacka, stackb, PA);
}

int	is_stack_sorted(t_list *stacka)
{
	t_stack	*content;
	t_stack	*next;

	content = stacka->content;
	stacka = stacka->next;
	while (stacka)
	{
		next = stacka->content;
		if (content->index - 1 != next->index)
			return (0);

		content = next;
		stacka = stacka->next;
	}
	return (1);
}
