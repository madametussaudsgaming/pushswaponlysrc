/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:44:02 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/08 16:03:09 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>


typedef struct s_list
{
	struct s_list	*next;
	long			number;
}	t_list;

void	ft_error(void);
int		ft_atoi(char *str);
int 	ft_lst_dup_int(t_list *lst)
