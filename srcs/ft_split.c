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
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	ft_word_count(char *str)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	while (str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i])
			wc++;
		while (str[i] && str[i] != 32 && !(str[i] >= 9 && str[i] <= 13))
			i++;
	}
	return (wc);
}

char	*ft_word_dup(char *str, int start, int end)
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *argv)
{
	int		i;
	int		j;
	int		k;
	int		wc;
	char	**arr;

	wc = ft_word_count(argv);
	arr = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!arr)
		return (NULL);
	i = 0;
	k = 0;
	while (argv[i])
	{
		while (argv[i] == 32 || (argv[i] >= 9 && argv[i] <= 13))
			i++;
		j = i;
		while (argv[i] && argv[i] != 32 && !(argv[i] >= 9 && argv[i] <= 13))
			i++;
		if (i > j)
			arr[k++] = ft_word_dup(argv, j, i);
	}
	arr[k] = NULL;
	return (arr);
}
