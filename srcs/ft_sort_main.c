/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:35:30 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/22 15:07:07 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"
/*
if >2 ints in stack_a, sort by shoving to stack_b. bring it back to stack_a,
smallest value MUST be on top somhow. omg im gonna 'commit sepukku' as
the youth say
*/

void	pb_until_3_left(t_list **A, t_list **B)
{
	int		i;
	t_list	*tmp;

	while (ft_lstsize(*A) > 3 && !ft_alrsorted(*A))
	{
		tmp = *A;
		i = ft_best_rotation_b(*A, *B);
		while (i >= 0)
		{
			if (i == ft_rarb_b(*A, *B, tmp->number))
				i = apply_rarb(A, B, tmp->number, 'a');
			else if (i == ft_rrarrb_b(*A, *B, tmp->number))
				i = apply_rrarrb(A, B, tmp->number, 'a');
			else if (i == ft_rarrb_b(*A, *B, tmp->number))
				i = apply_rarrb(A, B, tmp->number, 'a');
			else if (i == ft_rrarb_b(*A, *B, tmp->number))
				i = apply_rrarb(A, B, tmp->number, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_list	*stack_b_sort(t_list **A)
{
	t_list	*b;

	b = NULL;
	if (ft_lstsize(*A) > 3 && !ft_alrsorted(*A))
		ft_pb(A, &b, 'T');
	if (ft_lstsize(*A) > 3 && !ft_alrsorted(*A))
		ft_pb(A, &b, 'T');
	if (ft_lstsize(*A) > 3 && !ft_alrsorted(*A))
		pb_until_3_left(A, &b);
	if (!ft_alrsorted(*A))
		sort_3_integers(A);
	return (b);
}

t_list	**sort_a(t_list **A, t_list **B)
{
	int		i;
	t_list	*tmp;

	while (*B)
	{
		tmp = *B;
		i = ft_best_rotation_a(*A, *B);
		while (i >= 0)
		{
			if (i == ft_rarb_a(*A, *B, tmp->number))
				i = apply_rarb(A, B, tmp->number, 'b');
			else if (i == ft_rrarb_a(*A, *B, tmp->number))
				i = apply_rrarb(A, B, tmp->number, 'b');
			else if (i == ft_rrarrb_a(*A, *B, tmp->number))
				i = apply_rrarrb(A, B, tmp->number, 'b');
			else if (i == ft_rarrb_a(*A, *B, tmp->number))
				i = apply_rarrb(A, B, tmp->number, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (A);
}

void	ft_sort_main(t_list **a)
{
	t_list	*b;
	int		i;

	b = NULL;
	if (ft_lstsize(*a) == 2)
		ft_sa(a, 'T');
	else
	{
		b = stack_b_sort(a);
		a = sort_a(a, &b);
		i = ft_find_index(*a, ft_lstsmollest(*a));
		if (i < ft_lstsize(*a) - i)
		{
			while ((*a)->number != ft_lstsmollest(*a))
				ft_ra(a, 'T');
		}
		else
		{
			while ((*a)->number != ft_lstsmollest(*a))
				ft_rra(a, 'T');
		}
	}
}
