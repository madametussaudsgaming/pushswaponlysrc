/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_onlya.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:03:32 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/08 16:03:33 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

void	ft_ra(t_list **A, int print)
{
	t_list *tmp;

	tmp = *A;
	*A = ft_lstlast(*A);
	(*A)->next = tmp;
	*A = tmp->next;
	tmp->next = NULL;
	if (print == 0)
		write(1, "ra\n", 3);
}

void	ft_rra(t_list **A, int print)
{
	t_list *tmp;
	int i;

	i = ft_lstsize(A);
	tmp = *A;


}