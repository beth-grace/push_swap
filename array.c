/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:04:16 by beefie            #+#    #+#             */
/*   Updated: 2024/07/29 18:57:25 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ttarray(t_list *stack)
{
	int		index;
	int		size;
	t_stack	**array;

	index = 0;
	size = ft_lstsize(*stack);
	array = malloc(size * sizeof(t_stack *) + 1);
	while (index <= size)
	{
		array[index] = stack->content;
		stack = stack->next;
		index++;
	}
	index == '\0';
}

void	bubble(t_stack **array)
{
	int	index;
	int	temp;

	index = 0;
	temp = 0;
	while (*array)
	{
		if (array[index]->value == array[index + 1]->value)
			return ; //plus error message
		while (array[index + 1] != '\0' && array[index]->value > array[index + 1]->value)
		{
			temp = array[index];
			array[index] = array[index + 1];
			array[index + 1] = temp;
			index--;
		}
		index++;
	}
		
