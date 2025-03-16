/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:20:19 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/16 17:15:57 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"


t_list	*ft_lstlast(t_list *A)
{
	while (A->next != NULL)
		A = A->next;
	return (A);
}

void	ft_lstadd_back(t_list **lst, t_list *node)
{
	if (!*lst)
		*lst = node;
	else
		(ft_lstlast(*lst))->next = node;
}

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		ft_error();
	node->number = content;
	node->next = NULL;
	return (node);
}

int	ft_find_index(t_list *AB, int num)
{
	int		i;

	i = 0;
	while (AB->number != num)
	{
		i++;
		AB = AB->next;
	}
	return (i);
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
