/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simulations2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:17:45 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/22 13:15:33 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

// This function calculates how many times we should rotate the stacks together.
// Because after a certain amoun of rotate, we will proceed only with one stack
// rotation. Since here we have reverse rotate,rather than index number,
// we check reverse index number which is
// calculated by list_size - index_number.
int ft_rrarrb_b(t_list *A, t_list *B, int c)
{
	int i;

	i = 0;
	if (ft_placement_b(B, c))
		i = ft_lstsize(B) - ft_placement_b(B, c);
	if (i < (ft_lstsize(A) - ft_find_index(A, c)) && ft_find_index(A, c))
		i = ft_lstsize(A) - ft_find_index(A, c);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rrb case.
int ft_rrarrb_a(t_list *A, t_list *B, int c)
{
	int i;

	i = 0;
	if (ft_placement_a(A, c))
		i = ft_lstsize(A) - ft_placement_a(A, c);
	if (i < (ft_lstsize(B) - ft_find_index(B, c)) && ft_find_index(B, c))
		i = ft_lstsize(B) - ft_find_index(B, c);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rb case.
int ft_rrarb_a(t_list *A, t_list *B, int c)
{
	int i;

	i = ((ft_lstsize(A) - ft_placement_a(A, c)) + ft_find_index(B, c));
	return (i);
}

// Again, this function makes similar calculations.
// This function do same calculations for rra+rb case, from a to b this time:
int ft_rrarb_b(t_list *A, t_list *B, int c)
{
	int i;

	i = ((ft_lstsize(A) - ft_find_index(A, c)) + ft_placement_b(B, c));
	return (i);
}
