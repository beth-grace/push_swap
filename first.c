/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:52:23 by beefie            #+#    #+#             */
/*   Updated: 2024/07/31 18:53:58 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_three(t_list **stacka, t_list **stackb)
{
	t_stack	*content;

	while(ft_lstsize(*stacka) > 3)
	{
		content = (*stacka)->content;
		if (content->index > 2)
			instructions(stacka, stackb, PA);
		else
			instructions(stacka, stackb, RA);
	}
}


