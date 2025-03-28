/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_onlya.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:03:32 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/22 14:50:41 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

void	ft_ra(t_list **A, char print)
{
	t_list	*tmp;

	if (!*A || !(*A)->next)
		return ;
	tmp = *A;
	*A = ft_lstlast(*A);
	(*A)->next = tmp;
	*A = tmp->next;
	tmp->next = NULL;
	if (print == 'T')
		write(1, "ra\n", 3);
}

void	ft_rra(t_list **A, char print)
{
	t_list	*tmp;
	int		i;

	if (!*A || !(*A)->next)
		return ;
	i = 0;
	tmp = *A;
	while ((*A)->next)
	{
		*A = (*A)->next;
		i++;
	}
	(*A)->next = tmp;
	while (i > 1)
	{
		tmp = tmp-> next;
		i--;
	}
	tmp->next = NULL;
	if (print == 'T')
		write(1, "rra\n", 4);
}

void	ft_pb(t_list **A, t_list **B, char print)
{
	t_list	*tmp;

	if (!*A)
		return ;
	tmp = *B;
	*B = *A;
	*A = (*A)->next;
	(*B)->next = tmp;
	if (print == 'T')
		write(1, "pb\n", 3);
}

void	ft_sa(t_list **A, char print)
{
	t_list	*tmp;

	tmp = *A;
	*A = (*A)->next;
	tmp->next = (*A)->next;
	(*A)->next = tmp;
	if (print == 'T')
		write(1, "sa\n", 3);
}
