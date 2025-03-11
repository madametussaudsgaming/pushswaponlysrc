/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:20:19 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/11 15:28:17 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

int	ft_find_index(t_list *lst, int num)
{
	int	i;

	i = 0;
	while (lst && lst->next)
	{
		if (lst->number == num)
			return (i);
		if (lst->next->number == num)
			return (i + 1);
		if (lst->next->next && lst->next->next->number == num)
			return (i + 2);

		lst = lst->next->next;
		i = i + 2;
	}
	if (lst && lst->number == num)
		return (i);
	return (-1);
}

int	ft_node_placement(t_list *lst, int c, char AorB)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = lst;

	if (!lst)
		return (0);

	while (tmp->next)
	{
		if (AorB == 'A' || AorB == 'a')
		{
			if (tmp->number < c && tmp->next->number > c)
				return (i + 1);
		}
		else if (AorB == 'B' || AorB == 'b')
		{
			if (tmp->number > c && tmp->next->number < c)
				return (i + 1);
		}
		tmp = tmp->next;
		i++;
	}
	return (0);
}
