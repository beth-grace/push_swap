/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:36:15 by beefie            #+#    #+#             */
/*   Updated: 2024/07/31 19:28:51 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
t_list	*ttstack(int argc, char **argv)
{
	int		index;
	int		err;
	t_list	*list;
	t_list	**tmp;
	t_stack	*content;

	index = 1;
	err = 0;
	tmp = &list;
	while (index < argc)
	{
		content = malloc(sizeof(t_stack));
		content->value = ft_atoi_strict(argv[index], &err);
		if (err == 1)
		{
			ft_lstclear(&list, free);
			exit(1);
		}
		content->index = 0;
		*tmp = ft_lstnew(content);
		tmp = &((*tmp)->next);
	}
	return (list);
}

int main(int argc, char **argv)
{
	t_list		*stacka;
	t_list		*stackb;
	t_stack		**array;

	stacka = ttstack(argc, argv);
	array = ttarray(stacka);
	bubble(array);
	find_three(&stacka, &stackb);
	quick3(&stacka, &stackb);
}
	

