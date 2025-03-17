/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_best_rotation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:28:12 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/17 17:52:37 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

static int	ft_best_rotation(t_list *A, t_list *B)
{
	int	moves[4];
	int	i;
	int	best;

	moves[0] = ft_rarb_b(A, B, 'F');
	moves[1] = ft_rrarrb_b(A, B, 'F');
	moves[2] = ft_rarrb_b(A, B, 'F');
	moves[3] = ft_rrarb_b(A, B, 'F');
	best = moves[0];
	i = 1;
	while (i < 4)
	{
		if (moves[i] < best)
			best = moves[i];
		i++;
	}
	return (best);
}

int	ft_rotate_type(t_list *A, t_list *B, char mode)
{
	t_list	*tmp;
	int		i;
	int		move;

	if (mode == 'a' || mode == 'A')
		tmp = A;
	else
		tmp = B;
	i = ft_best_rotation(A, B);
	while (tmp)
	{
		move = ft_best_rotation(A, B);
		if (move < i)
			i = move;
		tmp = tmp->number;
	}
	return (i);
}