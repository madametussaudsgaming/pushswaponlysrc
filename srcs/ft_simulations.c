/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simulations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:53:33 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/17 15:31:44 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

/*
"a" implies we are pushing from b to a, "b" implies we are pushing from a to b
top one works
*/
int	ft_rarb_a(t_list *A, t_list *B, int c)
{
	int	i;

	i = ft_placement_a(A, c);
	if (i < ft_find_index(B, c))
		i = ft_find_index(B, c);
	return (i);
}
/*
can confirm this is correct
*/

int	ft_rarb_b(t_list *A, t_list *B, int c)
{
	int	i;

	i = ft_placement_b(B, c);
	if (i < ft_find_index(A, c))
		i = ft_find_index(A, c);
	return (i);
}
/*
can confirm this
*/

int	ft_rarrb_a(t_list *A, t_list *B, int c)
{
	int	i;

	i = (ft_placement_a(A, c) + (ft_lstsize(B) - ft_find_index(B, c)));
	return (i);
}
/*FINALLY FIXED*/

int	ft_rarrb_b(t_list *A, t_list *B, int c)
{
	int	i;

	i = ((ft_lstsize(B) - ft_placement_b(B, c)) + ft_find_index(A, c));
	return (i);
}
