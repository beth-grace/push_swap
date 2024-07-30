/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:52:23 by beefie            #+#    #+#             */
/*   Updated: 2024/07/30 18:24:47 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_three(t_list **stack)
{
	t_stack	*content;

	while(ft_lstsize(stacka) <3)
	{
		content = (*stack)->content;
		if (content->index > 2)
			instructions(stacka, stackb, PA);
		else
			instructions(stacka, stackb, RA);
	}
}
