/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simulations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:53:33 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/11 15:54:01 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

/*
"a" implies we are pushing from b to a, "b" implies we are pushing from a to b
*/
int	ft_rarb_a(t_list *A, t_list *B, int c)
{
	int	i;

	i = ft_node_placement(A, c, 'a');
	if (i < ft_find_index(B, c))
		i = ft_find_index(B, c);
	return (i);
}

int	ft_rarb_b(t_list *A, t_list *B, int c)
{
	int	i;

	i = ft_node_placement(B, c, 'b');
	if (i < ft_find_index(A, c))
		i = ft_find_index(A, c);
	return (i);
}

int ft_rarrb_b(t_list *A, t_list *B, int c)
{
	int i;

	i = (ft_node_placement(A, c, 'a') + (ft_lstsize(B) - ft_find_index(B, c)));
	return (i);
}

int ft_rrarb_a(t_list *A, t_list *B, int c)
{
	return (ft_node_placement(B, c, 'b') + (ft_lstsize(A) - ft_find_index(A, c)));
}