/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:11:22 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/10 18:05:43 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

int	ft_lstsize(t_list *stack)
{
	t_list			*node;
	unsigned int	i;

	node = stack;
	i = 0;
	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}