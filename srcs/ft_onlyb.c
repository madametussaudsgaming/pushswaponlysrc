/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_onlyb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:03:34 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/22 12:49:27 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

void	ft_rb(t_list **B, char print)
{
	t_list *tmp;

	tmp = *B;
	*B = ft_lstlast(*B);
	(*B)->next = tmp;
	*B = tmp->next;
	tmp->next = NULL;
	if (print == 'T')
		write(1, "rb\n", 3);
}

void	ft_rrb(t_list **B, char print)
{
	t_list *tmp;
	int i;

	i = ft_lstsize(*B);
	tmp = *B;
	(*B)->next = tmp;
	while (i > 1)
	{
		tmp = tmp-> next;
		i--;
	}
	tmp->next = NULL;
	if (print == 'T')
		write(1, "rrb\n", 4);
}

void	ft_pa(t_list **A, t_list **B, char print)
{
	t_list *tmp;

	tmp = *B;
	*B = *A;
	*A = (*A)->next;
	(*B)->next = tmp;
	if (print == 'T')
	{
		write(1, "pa\n", 3);
	}
}

void 	ft_sb(t_list **B, char print)
{
	t_list *tmp;

	tmp = *B;
	*B = (*B)->next;
	tmp->next = (*B)->next;
	(*B)->next = tmp;
	if (print == 'T')
		write(1, "sb\n", 3);
}