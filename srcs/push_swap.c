/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:25:49 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/16 16:31:42 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfile/push_swap.h"

t_list	*ft_convert_many(int argc, char *argv[], t_list **A)
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
	return (A);
}

t_list	*ft_convert_1(int argc, char *argv[], t_list **A)
{
	int		i;
	char	**tmp;

	A = NULL;
	if (argc < 2)
		ft_error();
	if (argc == 2)
	{
		tmp = ft_split(argv[1]);
		while (tmp++)
		{
			i = ft_atoi(*tmp);
			ft_lstadd_back(A, ft_lstnew(i));
		}
		ft_freestr(tmp);
		free(tmp);
	}
	else
		A = ft_convert_many(argc, argv);
	return (A);
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
	t_list	*A;
	void	ft_argv_analysis(argv);

	A = NULL;
	A = ft_convert_1(argc, argv, &A);
	if (!A)
	{
		ft_freelst(&A);
		ft_error();
	}
	if (ft_lst_dup_int(A))
	{
		ft_freelst(&A);
		ft_error();
	}
	if (!ft_alrsorted(A))
		ft_sort_main(&A);
	ft_freelst(&A);
	return (0);
}
