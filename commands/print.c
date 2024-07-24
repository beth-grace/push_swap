/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beefie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:14:29 by beefie            #+#    #+#             */
/*   Updated: 2024/07/24 13:41:24 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_inst(t_instrs lol)
{
	static t_instr	last = -1;

	if (last < 0)
		last = lol;
	else if ((last == SA && lol == SB) || (last == SB && lol == SA))
		instructions(SS);
	else if ((last == RA && lol == RB) || (last == RB && lol == RA))
		instructions(RR);
	else if ((last == RRA && lol == RRB) || (last == RRA && lol == RRB))
		instructions(RRR);
}

void	actual_print(t_instrs instr)
{
	ft_printf(instr);
}
