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

int	ft_placement_a(t_list *lst, int c)
{
	int		i;
	t_list	*tmp;

	i = 1;
	if (c < lst->number && c > ft_lstlast(lst)->number)
		i = 0;
	else if (c > ft_lstfattest(lst) || c < ft_lstsmollest(lst))
		i = ft_find_index(lst, ft_lstsmollest(lst));
	else
	{
		tmp = lst->next;
		while (lst->number > c || tmp->number < c)
		{
			lst = lst->next;
			tmp = lst->next;
			i++;
		}
	}
	return (i);
}

int	ft_placement_b(t_list *lst, int c)
{
	int		i;
	t_list	*tmp;

	i = 1;
	if (c > lst->number && c < ft_lstlast(lst)->number)
		i = 0;
	else if (c > ft_lstfattest(lst) || c < ft_lstsmollest(lst))
		i = ft_find_index(lst, ft_lstfattest(lst));
	else
	{
		tmp = lst->next;
		while (lst->number < c || tmp->number > c)
		{
			lst = lst->next;
			tmp = lst->next;
			i++;
		}
	}
	return (i);
}
