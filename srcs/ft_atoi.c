/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:48:37 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/22 14:34:13 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

int	ft_atoi(char *str)
{
	long	res;
	int		isnegative;
	long	i;

	res = 0;
	i = 0;
	isnegative = 0;
	while (str[i] && ((str[i] <= 13 && str[i] >= 9) || str[i] == 32))
		i++;
	if (str[i] == '-')
		isnegative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res *= 10;
		res += ((int)str[i] - 48);
		i++;
	}
	if (res > INT_MAX || res < INT_MIN)
		ft_error();
	if (isnegative)
		return (-res);
	else
		return (res);
}
