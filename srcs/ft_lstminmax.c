/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstminmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:03:51 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/22 12:22:37 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

int	ft_lstsmollest(t_list *lst)
{
	int	smol;

	smol = lst->number;
	while (lst)
	{
		if (lst->number < smol)
			smol = lst->number;
		lst = lst->next;
	}
	return (smol);
}

int	ft_lstfattest(t_list *lst)
{
	int	fat;

	fat = lst->number;
	while (lst)
	{
		if (lst->number > fat)
			fat = lst->number;
		lst = lst->next;
	}
	return (fat);
}

void	sort_3_integers(t_list **A)
{
	if (ft_lstsmollest(*A) == (*A)->number)
	{
		ft_rra(A, 'T');
		ft_sa(A, 'T');
	}
	else if (ft_lstfattest(*A) == (*A)->number)
	{
		ft_ra(A, 'T');
		if (!ft_alrsorted(*A))
			ft_sa(A, 'T');
	}
	else
	{
		if (ft_find_index(*A, ft_lstfattest(*A)) == 1)
			ft_rra(A, 'T');
		else
			ft_sa(A, 'T');
	}
}
