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

int ft_rrarrb_b(t_list *A, t_list *B, int c)
{
	int i;

	i = 0;
	if (ft_placement_b(B, c))
		i = ft_lstsize(B) - ft_placement_b(B, c);
	if ((i < (ft_lstsize(A) - ft_find_index(A, c))) && ft_find_index(A, c))
		i = ft_lstsize(A) - ft_find_index(A, c);
	return (i);
}

int ft_rrarrb_a(t_list *A, t_list *B, int c)
{
	int i;

	i = 0;
	if (ft_placement_a(A, c))
		i = ft_lstsize(A) - ft_placement_a(A, c);
	if (i < ((ft_lstsize(B) - ft_find_index(B, c))) && ft_find_index(B, c))
		i = ft_lstsize(B) - ft_find_index(B, c);
	return (i);
}

int ft_rrarb_a(t_list *A, t_list *B, int c)
{
	int i;

	i = 0;
	if (ft_placement_a(A, c))
		i = ft_lstsize(A) - ft_placement_a(A, c);
	i = ft_find_index(B, c) + i;
	return (i);
}

int ft_rrarb_b(t_list *A, t_list *B, int c)
{
	int i;

	i = 0;
	if (ft_find_index(A, c))
		i = ft_lstsize(A) - ft_find_index(A, c);
	i = ft_placement_b(B, c) + i;
	return (i);
}
