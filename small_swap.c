/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:49:49 by beefie            #+#    #+#             */
/*   Updated: 2024/08/07 17:45:26 by bmilford         ###   ########.fr       */
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
		else if ((second->value > first->value)
			&& (second->value > third->value))
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
