/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:50:33 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/22 14:57:37 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int	i;

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

// static int	wordle_counter(const char *s, char c)
// {
// 	size_t	count;
// 	int		in_word;

// 	count = 0;
// 	in_word = 0;
// 	while (*s)
// 	{
// 		if (*s != c && in_word == 0)
// 		{
// 			in_word = 1;
// 			count++;
// 		}
// 		else if (*s == c)
// 			in_word = 0;
// 		s++;
// 	}
// 	return (count);
// }

// static char	*copy(const char *start, size_t	len)
// {
// 	char	*word;

// 	word = (char *)malloc(len + 1 * (sizeof(char)));
// 	if (!word)
// 		return (NULL);
// 	ft_strlcpy(word, start, len + 1);
// 	return (word);
// }

// static void	free_bird(char **result, size_t i)
// {
// 	while (i-- > 0)
// 		free(result[i]);
// 	free(result);
// }

// static int	next_wordle(char **result, const char **s, char c, size_t i)
// {
// 	size_t	len;

// 	len = 0;
// 	while ((*s)[len] && ((*s)[len] != c))
// 		len++;
// 	if (len > 0)
// 	{
// 		result[i] = copy(*s, len);
// 		if (!result[i])
// 		{
// 			free_bird(result, i);
// 			return (0);
// 		}
// 		*s += len;
// 	}
// 	else
// 	{
// 		result[i] = (char *)malloc(1 * sizeof(char));
// 		if (!result[i])
// 		{
// 			free_bird(result, i);
// 			return (0);
// 		}
// 	}
// 	return (1);
// }

// char	**ft_split(const char *s, char c)
// {
// 	char		**result;
// 	size_t		words;
// 	size_t		i;

// 	i = 0;
// 	if (!s)
// 		return (NULL);
// 	words = wordle_counter(s, c);
// 	result = (char **)malloc((words + 1) * sizeof(char *));
// 	if (!result)
// 		return (NULL);
// 	while (*s && i < words)
// 	{
// 		if (*s != c)
// 		{
// 			if (!next_wordle(result, &s, c, i++))
// 				return (NULL);
// 		}
// 		else
// 			s++;
// 	}
// 	result[i] = NULL;
// 	return (result);
// }