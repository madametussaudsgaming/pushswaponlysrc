/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpadasia <rpadasia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:44:02 by rpadasia          #+#    #+#             */
/*   Updated: 2025/03/22 14:34:40 by rpadasia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>

typedef struct s_list
{
	struct s_list	*next;
	long			number;
}	t_list;

void	ft_error(void);
int		ft_atoi(char *str);
int		ft_lst_dup_int(t_list *lst);
t_list	*ft_lstlast(t_list *A);
void	ft_lstadd_back(t_list **lst, t_list *node);
int		ft_lstsmollest(t_list *lst);
int		ft_lstfattest(t_list *lst);
int		ft_alrsorted(t_list *A);
int		ft_atoi(char *str);
void	ft_ra(t_list **A, char print);
void	ft_rra(t_list **A, char print);
void	ft_pb(t_list **A, t_list **B, char print);
void	ft_sa(t_list **A, char print);
void	ft_rb(t_list **B, char print);
void	ft_rrb(t_list **B, char print);
void	ft_pa(t_list **A, t_list **B, char print);
void	ft_sb(t_list **B, char print);
void	ft_rr(t_list **A, t_list **B, char print);
void	ft_rrr(t_list **A, t_list **B, char print);
void	ft_putendl_fd(char *s, int fd);
int		ft_rarb_a(t_list *A, t_list *B, int c);
int		ft_rarb_b(t_list *A, t_list *B, int c);
int		ft_rarrb_a(t_list *A, t_list *B, int c);
int		ft_rarrb_b(t_list *A, t_list *B, int c);
int 	ft_rrarrb_b(t_list *A, t_list *B, int c);
int 	ft_rrarrb_a(t_list *A, t_list *B, int c);
int	 	ft_rrarb_a(t_list *A, t_list *B, int c);
int 	ft_rrarb_b(t_list *A, t_list *B, int c);
t_list	*ft_lstnew(int content);
void	ft_freestr(char **lst);
void	ft_freelst(t_list **lst);
int		ft_isnum(int c);
int		ft_sign(char *str, int j);
void	ft_space_or_num(char *str);
void	ft_argv_analysis(char **argv);
void	sort_3_integers(t_list **stack);
int		ft_lstsize(t_list *stack);
int		ft_find_index(t_list *AB, int num);
int		ft_placement_b(t_list *lst, int c);
int		ft_placement_a(t_list *lst, int c);
int		ft_best_rotation_a(t_list *A, t_list *B);
int		ft_best_rotation_b(t_list *A, t_list *B);
int 	apply_rrarb(t_list **A, t_list **B, int c, char s);
int 	apply_rrarrb(t_list **A, t_list **B, int c, char s);
int 	apply_rarb(t_list **A, t_list **B, int c, char s);
int		apply_rarrb(t_list **A, t_list **B, int c, char s);
char 	*ft_strncpy(char *s1, char *s2, int n);
size_t	ft_strlcpy(char	*dest, const char *src, size_t destsize);
int		ft_word_count(char *str);
char	*ft_word_dup(char *str, int start, int end);
char	**ft_split(char *argv);
void	ft_sort_main(t_list **a);