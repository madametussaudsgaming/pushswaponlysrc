/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_onlyboth.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:25:26 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/10 15:24:28 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

void	 ft_rr(t_list **A, t_list **B, char print)
{
	ft_ra(A, 'F');
	ft_rb(B, 'F');

	if (print == 'T')
		write(1, "rr\n", 3);
}

// void ft_rrrx(t_list **B, char print)
// {
// 	t_list *tmp;
// 	int i;

// 	i = 0;
// 	tmp = *B;
// 	while ((*B)->next)
// 	{
// 		i++;
// 		*B = (*B)->next;
// 	}
// 	(*B)->next = tmp;
// 	while (i > 1)
// 	{
// 		tmp = tmp->next;
// 		i--;
// 	}
// 	tmp->next = NULL;
// 	if (print == 'T')
// 		write(1, "rrr\n", 4);
// }

void	ft_rrr(t_list **A, t_list **B, char print)
{
	// t_list *tmp;
	// int		i;

	// if (!*A || !((*A)->next) || !*B || !((*B)->next))
	// 	return ;
	// i = 0;
	// tmp = *A;
	// while ((*A)->next)
	// {
	// 	i++;
	// 	*A = (*A)->next;
	// }
	// (*A)->next = tmp;
	// while (i > 1)
	// {
	// 	tmp = tmp->next;
	// 	i--;
	// }
	// tmp->next = NULL;
	// ft_rrrx(B, print);
	ft_rra(A, 'F');
	ft_rrb(B, 'F');
	if (print == 'T')
		write(1, "rrr\n", 4);
}