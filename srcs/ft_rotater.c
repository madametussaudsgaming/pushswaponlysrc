/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotater.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:36:23 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/19 11:57:25 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

void	ft_rotate_both(t_list **A, t_list **B, t_r_info re)
{
	if (re.id == 'a')
	{
		while ((*A)->number != re.val && ft_node_placement(*B, re.val, 'B') > 0)
		{
			if (re.rev)
				ft_rrr(A, B, 'T');
			else
				ft_rr(A, B, 'T');
		}
	}
	else
	{
		while ((*B)->number != re.val && ft_node_placement(*A, re.val, 'A') > 0)
		{
			if (re.rev)
				ft_rrr(A, B, 'T');
			else
				ft_rr(A, B, 'T');
		}
	}
}

void	ft_rotate_one(t_list **stack, t_r_info info)
{
	while ((*stack)->number != info.val)
	{
		if (info.rev)
			ft_rra(stack, 'T');
		else
			ft_ra(stack, 'T');
	}
}

void	ft_find_and_push(t_list **A, t_list **B, t_r_info info)
{
	ft_rotate_both(A, B, info);
	if (info.id == 'a' || info.id == 'A')
	{
		ft_rotate_one(A, info);
		ft_rotate_one(B, info);
		ft_pb(A, B, 'T');
	}
	else
	{
		ft_rotate_one(B, info);
		ft_rotate_one(A, info);
		ft_pa(A, B, 'T');
	}
}
/*r (ra rb), R (rra rrb), A (rra rb), B (ra rrb)
*/

int	ft_apply_rotation(t_list **A, t_list **B, t_r_info info)
{
	if (info.type == 'r')
		ft_find_and_push(A, B, info);
	else if (info.type == 'R')
	{
		info.rev = 1;
		ft_find_and_push(A, B, info);
	}
	else if (info.type == 'A')
	{
		info.rev = 1;
		ft_rotate_one(A, info);
		info.rev = 0;
		ft_rotate_one(B, info);
		ft_pb(A, B, 'T');
	}
	else if (info.type == 'B')
	{
		info.rev = 0;
		ft_rotate_one(A, info);
		info.rev = 1;
		ft_rotate_one(B, info);
		ft_pb(A, B, 'T');
	}
	return (-1);
}