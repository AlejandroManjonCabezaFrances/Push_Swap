/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:36:08 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/05 10:11:48 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
#include <limits.h> //INT_MAX INT_MIN

# include "../libft/Libft/include/libft.h"
# include "../libft/ft_printf/include/ft_printf.h"
# include "../libft/Gnl/include/get_next_line.h"

typedef struct s_stack
{
	int					content;
	struct s_stack		*next;
}	t_stack;

void	ft_index_down(t_stack **a, t_stack **b, int smallest_pos);
void	ft_index_up(t_stack **a, t_stack **b, int smallest_pos);
void	ft_lstclear_ps(t_stack **lst, void (*del)(int *));
void	ft_lstadd_front_ps(t_stack **lst, t_stack *new);
void	ft_lstdelone_ps(t_stack *lst, void (*del)(int));
void	ft_lstadd_back_ps(t_stack **lst, t_stack *new);
void	ft_lstiter_ps(t_stack *lst, void (*f)(int));
void	ft_type_of_sorting(t_stack **a, t_stack **b);
int		ft_sort10(t_stack **a, t_stack **b);
void	ft_rrr(t_stack **a, t_stack **b);
void	ft_ss(t_stack **a, t_stack **b);
void	ft_pa(t_stack **a, t_stack **b);
void	ft_pb(t_stack **a, t_stack **b);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_check_max_min(int nbr);
void	ft_sort2(t_stack **a);
void	ft_sort3(t_stack **a);
void	del_ps(int *content);
void	ft_rra(t_stack **a);
void	ft_rrb(t_stack **b);
void	ft_sa(t_stack **a);
void	ft_sb(t_stack **b);
void	ft_ra(t_stack **a);
void	ft_rb(t_stack **b);
int		ft_is_it_ordered(t_stack **a);
int		ft_find_position_smallest(t_stack **a);
int		ft_lstsize_ps(t_stack *lst);
int		main(int argc, char **argv);
int		ft_atol(const char *str);
t_stack **ft_push_swap(char **argv, t_stack **a, t_stack **b);
t_stack	*ft_lstlast_ps(t_stack *lst);
t_stack	*ft_lstnew_ps(int content);
/* void 	bubble_sort(t_stack **a); */


#endif