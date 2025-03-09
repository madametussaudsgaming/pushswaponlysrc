/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_both.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <ryanpadasian@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:25:26 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/09 16:25:26 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../headerfile/push_swap.h"

void	 ft_rr(t_list **A, t_list **B, char print)
{
	ft_ra(A, 'F');
	ft_rb(B, 'F');

	if (print == 1 && *A && *B)
		write(1, "rr\n", 3);
}

void	ft_rrr(t_list **A, t_list **B, char print)
{
	ft_rra(A, 'F');
	ft_rrb(B, 'F');
	if (print == 1)
		write(1, "rrr\n", 4);
}