/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <ryanpadasian@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:29:19 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/15 00:29:19 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

void	ft_free(char **lst)
{
	char	*tmp;

	while (*lst)
	{
		tmp = *lst;
		lst++;
		free(tmp);
	}
	*lst = NULL;
}
