/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:14:29 by beefie            #+#    #+#             */
/*   Updated: 2024/08/02 17:46:55 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_inst(t_instrs lol)
{
	static t_instrs	last = -1;

	if (last == (t_instrs)-1)
		last = lol;
	else if ((last == SA && lol == SB) || (last == SB && lol == SA))
	{
		actual_print(SS);
		last = -1;
	}
	else if ((last == RA && lol == RB) || (last == RB && lol == RA))
	{
		actual_print(RR);
		last= -1;
	}
	else if ((last == RRA && lol == RRB) || (last == RRA && lol == RRB))
	{
		actual_print(RRR);
		last = -1;
	}
	else if ((last == PA && lol == PB) || (last == PB && lol == PA))
		last = -1;
	else
	{
		actual_print(last);
		last = lol;
	}
}

void	actual_print(t_instrs instr)
{
	if (instr == SA)
		ft_printf("sa\n");
	else if (instr == SB)
		ft_printf("sb\n");
	else if (instr == SS)
		ft_printf("ss\n");
	else if (instr == PA)
		ft_printf("pa\n");
	else if (instr == PB)
		ft_printf("pb\n");
	else if (instr == RA)
		ft_printf("ra\n");
	else if (instr == RB)
		ft_printf("rb\n");
	else if (instr == RR)
		ft_printf("rr\n");
	else if (instr == RRA)
		ft_printf("rra\n");
	else if (instr == RRB)
		ft_printf("rrb\n");
	else if (instr == RRR)
		ft_printf("rrr\n");
}
