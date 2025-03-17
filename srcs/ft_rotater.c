/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotater.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:36:23 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/17 17:52:31 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

void	ft_rotate_both(t_list **A, t_list **B, int c, char s, int reverse)
{
	if (s == 'a')
	{
		while ((*A)->number != c && ft_node_placement(*B, c, 'B') > 0)
		{
			if (reverse)
				ft_rrr(A, B, 'T');
			else
				ft_rr(A, B, 'T');
		}
	}
	else
	{
		while ((*B)->number != c && ft_node_placement(*A, c, 'A') > 0)
		{
			if (reverse)
				ft_rrr(A, B, 'T');
			else
				ft_rr(A, B, 'T');
		}
	}
}

void	ft_rotate_one(t_list **stack, int c, int reverse)
{
	while ((*stack)->number != c)
	{
		if (reverse)
			ft_rra(stack, 'T');
		else
			ft_ra(stack, 'T');
	}
}

void	ft_find_and_push(t_list **A, t_list **B, int c, char s, int reverse)
{
	ft_rotate_both(A, B, c, s, reverse);
	if (s == 'a' || s == 'A')
	{
		ft_rotate_one(A, c, reverse);
		ft_rotate_one(B, c, reverse);
		ft_pb(A, B, 'T');
	}
	else
	{
		ft_rotate_one(B, c, reverse);
		ft_rotate_one(A, c, reverse);
		ft_pa(A, B, 'T');
	}
}
/*r (ra rb), R (rra rrb), A (rra rb), B (ra rrb)
*/

int ft_apply_rotation(t_list **A, t_list **B, int c , char s, char type)
{
	if (type == 'r')
		ft_find_and_push(A, B, c, s, 0);
		
}