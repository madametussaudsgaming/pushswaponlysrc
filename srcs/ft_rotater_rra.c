/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotater_rra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <ryanpadasian@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 23:51:55 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/19 23:51:55 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

int apply_rrarb(t_list **A, t_list **B, int c, char AB)
{
	if (AB == 'a')
	{
		while ((*A)->number != c)
			ft_rra(A, 'T');
		while (ft_placement_b(*B, c) > 0)
			ft_rb(B, 'T');
		ft_pb(A, B, 'T');
	}
	else
	{
		while (ft_placement_a(*A, c) > 0)
			ft_rra(A, 'T');
		while ((*B)->number != c)
			ft_rb(B, 'T');
		ft_pa(A, B, 'T');
	}
	return (-1);
}

int apply_rrarrb(t_list **A, t_list **B, int c, char AB)
{
	if (AB == 'a')
	{
		while ((*A)->number != c && ft_placement_b(*B, c) > 0)
			ft_rrr(A, B, 'T');
		while ((*A)->number != c)
			ft_rra(A, 'T');
		while (ft_placement_b(*B, c) > 0)
			ft_rrb(B, 'T');
		ft_pb(A, B, 'T');
	}
	else
	{
		while ((*B)->number != c && ft_placement_a(*A, c) > 0)
			ft_rrr(A, B, 'T');
		while ((*B)->number != c)
			ft_rrb(B, 'T');
		while (ft_placement_a(*A, c) > 0)
			ft_rra(A, 'T');
		ft_pa(A, B, 'T');
	}
	return (-1);
}