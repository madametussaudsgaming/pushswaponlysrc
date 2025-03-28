/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:20:19 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/22 13:12:36 by rpadasia         ###   ########.fr       */
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

t_list	*ft_lstnew(int content)
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
	while (AB)
	{
		if (AB->number == num)
			return (i);
		i++;
		AB = AB->next;
	}
	return (-1);
}
