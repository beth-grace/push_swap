/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:36:15 by beefie            #+#    #+#             */
/*   Updated: 2024/08/02 23:52:13 by beefie           ###   ########.fr       */
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
	list = 0;
	tmp = &list;
	while (index < argc)
	{
		content = malloc(sizeof(t_stack));
		content->value = ft_atoi_strict(argv[index], &err);
		if (err == 1)
		{
			ft_lstclear(&list, free);
			ft_printf("error: NaN");
			exit(1);
		}
		content->index = 0;
		*tmp = ft_lstnew(content);
		tmp = &((*tmp)->next);
		index++;
	}
	return (list);
}

int	main(int argc, char **argv)
{
	t_list		*stacka;
	t_list		*stackb;
	t_stack		**array;

	stacka = ttstack(argc, argv);
	//ft_printf("post stacka\n");
	array = ttarray(stacka);
	//ft_printf("post array\n");
	if (bubble(array))
	{
		ft_printf("error: doubles\n");
		ft_lstclear(&stacka, free);
		exit(1);
	}
		// bad
	//ft_printf("post-bubble\n");
	find_three(&stacka, &stackb);
	//ft_printf("post-find_three\n");
	quick3(&stacka, &stackb);
	while (stackb)
		find_next(&stacka, &stackb);
	print_inst(-1);
}
