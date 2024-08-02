/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:37:52 by beefie            #+#    #+#             */
/*   Updated: 2024/08/02 20:06:15 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft.h"

typedef enum e_instrs
{
	PA,
	PB,
	SA,
	SB,
	SS,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR
}	t_instrs;

typedef struct s_stack
{
	int	value;
	int	index;
}	t_stack;

t_list	*ttstack(int argc, char **argv);
t_stack	**ttarray(t_list *stack);
int		bubble(t_stack **stack);
void	set_index(t_stack **array, int len);
void	quick3(t_list **stacka, t_list **stackb);
void	quick5(t_list **stacka, t_list **stackb);
void	print_inst(t_instrs lol);
void	instructions(t_list **stacka, t_list **stackb, t_instrs instr);
void	find_three(t_list **stacka, t_list **stackb);
void	thirdfat(t_list **stacka, t_list **stackb);
void	fourthfat(t_list **stacka, t_list **stackb);
void	finish5(t_list **stacka, t_list **stackb);
void	swap(t_list **stack);
void	push(t_list **stacka, t_list **stackb);
void	rotate(t_list **stack);
void	reverse_rotate(t_list **stack);
void	actual_print(t_instrs instr);
void	find_next(t_list **stacka, t_list **stackb);
int		is_stack_sorted(t_list *stacka);
# endif
