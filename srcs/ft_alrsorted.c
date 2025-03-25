/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alrsorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:30:39 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/11 10:51:12 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

int	ft_alrsorted(t_list *A)
{
	int	tmp;

	tmp = A->number;
	while (A)
	{
		if (tmp > A->number)
			return (0);
		tmp = A->number;
		A = A->next;
	}
	return (1);
}
