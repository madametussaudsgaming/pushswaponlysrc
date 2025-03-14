/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simulations2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <ryanpadasian@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:17:45 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/11 17:17:45 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

int ft_rrarrb_a(t_list *A, t_list *B, int c)
{
	int i;

	i = 0;
	if (ft_node_placement(B, c))
		i = ft_lstsize(B) - ft_node_placement(B, c);
	if (i < (ft_lstsize(A) - ft_find_index(A, c)) && ft_find_index(A, c))
		i = ft_lstsize(A) - ft_find_index(A, c);
	return (i);
}

int ft_rrarrb_b(t_list *A, t_list *B, int c)
{
	int i;

	i = 0;
	if (ft_node_placement(A, c))
		i = ft_lstsize(A) - ft_node_placement(A, c);
	if (i < (ft_lstsize(B) - ft_find_index(B, c)) && ft_find_index(B, c))
		i = ft_lstsize(B) - ft_find_index(B, c);
	return (i);
}

int ft_rrarb_a(t_list *A, t_list *B, int c)
{
	int i;

	i = ((ft_lstsize(A) - ft_find_index(A, c)) + ft_node_placement(B, c));
	return (i);
}

int ft_rrarb_b(t_list *A, t_list *B, int c)
{
	int i;

	i = ((ft_lstsize(B) - ft_find_index(B, c)) + ft_node_placement(A, c));
}
