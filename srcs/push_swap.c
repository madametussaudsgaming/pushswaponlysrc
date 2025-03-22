/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:25:49 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/22 14:36:00 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

void	ft_convert_many(int argc, char *argv[], t_list **A)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = ft_atoi(argv[i]);
		ft_lstadd_back(A, ft_lstnew(j));
		i++;
	}
}

void	ft_convert_1(int argc, char *argv[], t_list **A)
{
	int		i;
	char	**tmp;
	char	**ptr;

	if (argc < 2)
		ft_error();
	if (argc == 2)
	{
		tmp = ft_split(argv[1]);
		ptr = tmp;
		while (*ptr)
		{
			i = ft_atoi(*ptr);
			ft_lstadd_back(A, ft_lstnew(i));
			ptr++;
		}
		ft_freestr(tmp);
	}
	else
		ft_convert_many(argc, argv, A);
}

int	ft_lst_dup_int(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		while (tmp)
		{
			if (lst->number == tmp->number)
				return (1);
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	t_list		*a;

	ft_argv_analysis(argv);
	a = NULL;
	ft_convert_1(argc, argv, &a);
	if (!a)
	{
		ft_freelst(&a);
		ft_error();
	}
	if (ft_lst_dup_int(a))
	{
		ft_freelst(&a);
		ft_error();
	}
	if (!ft_alrsorted(a))
		ft_sort_main(&a);
	ft_freelst(&a);
	return (0);
}
