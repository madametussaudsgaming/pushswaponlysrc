/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_onlyb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:03:34 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/22 14:55:55 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

void	ft_rb(t_list **B, char print)
{
	t_list	*tmp;

	if (!*B || !(*B)->next)
		return ;
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
	t_list	*tmp;
	int		i;

	if (!*B || !(*B)->next)
		return ;
	i = 0;
	tmp = *B;
	while ((*B)->next)
	{
		i++;
		*B = (*B)->next;
	}
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
	t_list	*tmp;

	if (!*B)
		return ;
	tmp = *A;
	*A = *B;
	*B = (*B)->next;
	(*A)->next = tmp;
	if (print == 'T')
	{
		write(1, "pa\n", 3);
	}
}

void	ft_sb(t_list **B, char print)
{
	t_list	*tmp;

	tmp = *B;
	*B = (*B)->next;
	tmp->next = (*B)->next;
	(*B)->next = tmp;
	if (print == 'T')
		write(1, "sb\n", 3);
}
