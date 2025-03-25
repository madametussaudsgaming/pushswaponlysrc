/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_best_rotation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:28:12 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/22 12:13:55 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

int	ft_best_rotation_a(t_list *A, t_list *B)
{
	int	best;
	t_list *btmp;

	btmp = B;
	best = ft_rarb_a(A, B, B->number);
	while (btmp)
	{
		if (ft_rrarrb_a(A, B, btmp->number) < best)
			best = ft_rrarrb_a(A, B, btmp->number);
		if (ft_rarrb_a(A, B, btmp->number) < best)
			best = ft_rarrb_a(A, B, btmp->number);
		if (ft_rrarb_a(A, B, btmp->number) < best)
			best = ft_rrarb_a(A, B, btmp->number);
		btmp = btmp->next;
	}
	return (best);
}

int    ft_best_rotation_b(t_list *A, t_list *B)
{
    t_list    *atmp;
    int        best;

    atmp = A;
    best = ft_rarb_b(A, B, A->number);
	while (atmp)
	{
    	if (ft_rrarrb_b(A, B, atmp->number) < best)
			best = ft_rrarrb_b(A, B, atmp->number);
    	if (ft_rarrb_b(A, B, atmp->number) < best)
			best = ft_rarrb_b(A, B, atmp->number);
    	if (ft_rrarb_b(A, B, atmp->number) < best)
			best = ft_rrarb_b(A, B, atmp->number);
		atmp = atmp->next;
	}
    return (best);
}