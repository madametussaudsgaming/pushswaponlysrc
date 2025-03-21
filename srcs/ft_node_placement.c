/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodeplacement.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <ryanpadasian@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:25:57 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/19 22:25:57 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

// This function finds the correct place of the number in stack_a.
// In other words, it check what index number nbr_push will get
// after it is being pushed to the stack_a.
int	ft_placement_a(t_list *lst, int c)
{
	int		i;
	int		max_index;
	t_list	*tmp;

	i = 0;
	max_index = 0;
	tmp = lst;
	if (!lst)
		return (0);
	while (tmp->next)
	{
		if (tmp->number < c && tmp->next->number > c)
			return (i + 1);
		if (tmp->number > lst->number)
			max_index = i + 1;
		tmp = tmp->next;
		i++;
	}
	return (max_index);
}

// This function finds the correct place of the number in stack_b.
// In other words, it check what index number nbr_push will get
// after it is being pushed to the stack_b.
int	ft_placement_b(t_list *lst, int c)
{
	int		i;
	int		max_index;
	t_list	*tmp;

	i = 0;
	max_index = 0;
	tmp = lst;
	if (!lst)
		return (0);
	while (tmp->next)
	{
		if (tmp->number > c && tmp->next->number < c)
			return (i + 1);
		if (tmp->number < lst->number)
			max_index = i + 1;
		tmp = tmp->next;
		i++;
	}
	return (max_index);
}
