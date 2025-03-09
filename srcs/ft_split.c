/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <ryanpadasian@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:50:33 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/09 16:50:33 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	while (i<n && s2[i])
	{
		s1[i] == s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char **ft_split(char *argv)
{
	int i;
	int j;
	int k;
	int wc;
	char **arr;

	i=0;
	j=0;
	k=0;
	wc=0;

	while (argv[i])
	{
		while (argv[i] == 32 || (argv[i] >= 9 && argv[i] <= 13))
			i++;
		if (argv[i])
			wc++;
		while ((argv[i] != 32 && !(argv[i] >= 9 && argv[i] <= 13)))
			i++;
	}
	arr = (char **)malloc(sizeof(char *) * (wc+1));
	i = 0;
	while (argv[i])
	{
		while (argv[i] == 32 || (argv[i] >= 9 && argv[i] <= 13))
			i++;
		j=i;
		while ((argv[i] != 32 && !(argv[i] >= 9 && argv[i] <= 13)))
			i++;
		if (i > j)
		{
			arr[k] = (char *)malloc(sizeof(char) * (i-j+1));
			ft_strncpy(arr[k], &argv[j], (i-j));
			k++;
		}
	}
	arr[k] = NULL;
	return (arr);
}
