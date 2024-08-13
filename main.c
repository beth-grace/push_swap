/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:36:15 by beefie            #+#    #+#             */
/*   Updated: 2024/08/10 15:30:58 by beefie           ###   ########.fr       */
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
			ttstack_er(&list);
		content->index = 0;
		*tmp = ft_lstnew(content);
		tmp = &((*tmp)->next);
		index++;
	}
	return (list);
}

void	ttstack_er(t_list **list)
{
	ft_lstclear(list, free);
	ft_printf("error\n");
	exit(1);
}

int	main(int argc, char **argv)
{
	t_list		*stacka;
	t_list		*stackb;
	t_stack		**array;

	stacka = ttstack(argc, argv);
	stackb = 0;
	array = ttarray(stacka);
	if (bubble(array))
	{
		ft_printf("error\n");
		ft_lstclear(&stacka, free);
		free(array);
		exit(1);
	}
	free(array);
	find_three(&stacka, &stackb);
	quick3(&stacka, &stackb);
	while (stackb)
		find_next(&stacka, &stackb);
	print_inst(-1);
	ft_lstclear(&stacka);
	ft_lstclear(&stackb);
}
