/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:35:30 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/17 15:43:52 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"
/* 
if >2 ints in stack_a, sort by shoving to stack_b. bring it back to stack_a,
smallest value MUST be on top somhow. omg im gonna 'commit sepukku' as
the youth say 
*/
void	ft_sort_last_int(t_list **A)
{
	int	i;

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

void	ft_push_to_b(t_list **A, t_list **B)
{
	t_list	*tmp;
	int		i;

	while (ft_lstsize(*A) > 3 && !ft_alrsorted(*A))
	{
		tmp = *A;
		i = ft_rotate_type(*A, *B, 'a');
		while (i >= 0)
		{
			if (i == ft_rarb_b(*A, *B, tmp->number))
				i = ft_apply_rotation(A, B, tmp->number, 'a', 'r');
			else if (i == ft_rrarrb_b(*A, *B, tmp->number))
				i = ft_apply_rotation(A, B, tmp->number, 'a', 'R');
			else if (i == ft_rarrb_b(*A, *B, tmp->number))
				i = ft_apply_rotation(A, B, tmp->number, 'a', 'B');
			else if (i == ft_rrarb_b(*A, *B, tmp->number))
				i = ft_apply_rotation(A, B, tmp->number, 'a', 'A');
			else
				tmp = tmp->number;
		}
	}
}

void ft_push_to_a(t_list **A, t_list **B)
{
	
}

void	ft_sort_main(t_list **A)
{
	t_list		*b;
	t_list		*tmp;
	int			i;

	b = NULL;
	if (ft_lstsize(*A) == 2)
		ft_sa(A, 'T');
	else
	{
		ft_pb(A, &b, 'T');
		ft_pb(A, &b, 'T');
		ft_push_to_b(A, &b);
		sort_3_integers(A);
		while (b)
		{
			tmp = b;
			i = ft_rotate_type(*A, b, 'b');
			while (i >= 0)
			{
				if (i == ft_rarb_a(*A, b, tmp->number))
					i = ft_apply_rotation(A, &b, tmp->number, 'b', 'r');
				else if (i == ft_rarrb_a(*A, b, tmp->number))
					i = ft_apply_rotation(A, &b, tmp->number, 'b', 'B');
				else if (i == ft_rrarrb_a(*A, b, tmp->number))
					i = ft_apply_rotation(A, &b, tmp->number, 'b', 'R');
				else if (i == ft_rrarb_a(*A, b, tmp->number))
					i = ft_apply_rotation(A, &b, tmp->number, 'b', 'A');
				else
					tmp = tmp->next;
			}
		}
	}
	ft_sort_last_int(A);
}
