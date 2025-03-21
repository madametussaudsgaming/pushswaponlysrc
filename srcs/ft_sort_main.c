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

void	pb_until_3_left(t_list **A, t_list **B)
{
	int		i;
	t_list	*tmp;

	while (ft_lstsize(*A) > 3 && !ft_alrsorted(*A))
	{
		tmp = *A;
		i = ft_rotate_type(*A, *B, 'a');
		while (i >= 0)
		{
			if (i == ft_rarb_b(*A, *B, tmp->number))
				i = apply_rarb(A, B, tmp->number, 'a');
			else if (i == ft_rrarrb_b(*A, *B, tmp->number))
				i = apply_rrarrb(A, B, tmp->number, 'a');
			else if (i == ft_rarr_b(*A, *B, tmp->number))
				i = apply_rarrb(A, B, tmp->number, 'a');
			else if (i == ft_rrarb_b(*A, *B, tmp->number))
				i = apply_rrarb(A, B, tmp->number, 'a');
			else
				break;
			tmp = tmp->next;
		}
	}
}

// This function one by one pushes all the elements
// in stack_a to the stack_b, until only three elements
// are left in stack_a. While pushing, it makes sure if
// the stack_b is sorted. When three elements are left,
// it calls the ft_sort_three function to sort left over
// elements in stack_a.
t_list *stack_b_sort(t_list **A)
{
	t_list *b;

	b = NULL;
	if (ft_lstsize(*A) > 3 && !ft_alrsorted(*A))
	{
		ft_pb(A, &b, 'T');
		ft_pb(A, &b, 'T');
		pb_until_3_left(A, &b);
	}
	if (!ft_alrsorted(*A))
		sort_3_integers(A);
	return (b);
}

// This function is pushing back the elements from stack_b
// to stack_a until stack_b is empty.
t_list **sort_a(t_list **A, t_list **B)
{
	int i;
	t_list *tmp;

	while (*B)
	{
		tmp = *B;
		i = ft_rotate_type(*A, *B, 'b');
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

// This function sorts the stack_a if there are more
// than 2 elements in the stack_a.
// And finally it makes final sort in stack_a after
// all values pushed to stack_b, sorted and pushed
// back to stack_a. Because, even the stack_a is
// sorted at the end, the minimum number have to
// at the top of the stack_a. So, it simply brings
// the smallest number of the stack_a to the top.
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
