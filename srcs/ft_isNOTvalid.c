/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isNOTvalid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:28:04 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/16 21:24:46 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

int	ft_isnum(int c)
{
	return(c >= '0' && c <= '9');
}

int ft_sign(char *str, int j)
{
	if (str[j] == '-' && ft_isnum(str[j+1]) && (j == 0 || str[j - 1] == ' '))
		return (1);
	return (0);
}

void ft_space_or_num(char *str)
{
	int i;

	if (!str || str[0] == '\0' || str[0] == ' ')
		ft_error();
	i = 0;
	while (str[i])
	{
		if (ft_sign(str, i))
			i++;
		else if (ft_isnum(str[i]))
			i++;
		else if (str[i] == ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			ft_error();
		else if (str[i] == ' ')
			i++;
		else
			ft_error();
	}
}

void	ft_argv_analysis(char **argv)
{
	int	i;

	i = 1;
	if (!argv[i])
		ft_error();
	while (argv[i])
	{
		ft_space_or_num(argv[i]);
		i++;
	}
}