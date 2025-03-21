/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstminmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:03:51 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/16 16:43:05 by rpadasia         ###   ########.fr       */
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
		if (lst-> number > fat)
			fat = lst->number;
		lst = lst->next;
	}
	return (fat);
}

void	sort_3_integers(t_list **stack)
{
	t_list	*fattest;
	t_list	*smollest;

	fattest = ft_lstfattest(*stack);
	smollest = ft_lstsmollest(*stack);
	if (!stack)
		return ;
	if (*stack == fattest)
		ft_ra(stack, 'T');
	else if ((*stack)->next == fattest)
		ft_rra(stack, 'T');
	if (*stack != smollest)
		ft_sa(stack, 'T');
}
