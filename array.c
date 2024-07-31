/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:04:16 by beefie            #+#    #+#             */
/*   Updated: 2024/07/31 19:28:10 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		**ttarray(t_list *stack)
{
	int		index;
	int		size;
	t_stack	**array;

	index = 0;
	size = ft_lstsize(stack);
	array = malloc(size * sizeof(t_stack *) + 1);
	while (index < size)
	{
		array[index] = stack->content;
		stack = stack->next;
		index++;
	}
	array[index] = NULL;
	return (array);
	
}

int	bubble(t_stack **array)
{
	int	index;
	int	temp;

	index = 0;
	temp = 0;
	while (*array)
	{
		if (array[index]->value == array[index + 1]->value)
			return (1);
		while ((array[index + 1] != NULL) && (array[index]->value > array[index + 1]->value))
		{
			temp = array[index]->value;
			array[index] = array[index + 1];
			array[index + 1]->value = temp;
			index--;
		}
		index++;
	}
	set_index(array);
	return (0);
}

void	set_index(t_stack **array)
{
	int	index;

	index = 0;
	while (array[index])
	{
		array[index]->index = index;
		index++;
	}
}

