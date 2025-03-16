/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:35:30 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/16 20:03:46 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

/*
if >2 ints in stack_a, sort by shoving to stack_b. bring it back to stack_a,
smallest value MUST be on top somhow. omg im gonna 'commit sepukku' as
the youth say 
*/
void	ft_sort_main(t_list **A)
{
	t_list		*b;
	int			i;

	b = NULL;
	if (ft_lstsize(*A) == 2)
		ft_sa(A, 'f');
	else
	{
		b = ft_move_to_b(A);
		A = ft_move_to_a(A, &b);
		i = ft_find_index(*A, ft_lstsmollest(*A));
		if (i < ft_lstsize(*A) - i)
		{
			while ((*A)->number != ft_lstsmollest(*A))
				ft_ra(A, 'F');
		}
		else
		{
			while ((*A)->number != ft_lstsmollest(*A))
				ft_rra(A, 'F');
		}
	}
}
