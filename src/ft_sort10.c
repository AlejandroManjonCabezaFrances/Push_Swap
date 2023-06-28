/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 07:38:23 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/27 07:58:12 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_index_up(t_stack **a, t_stack **b, int smallest_pos)
{
	while (smallest_pos > 1)
	{
		ft_ra(a);
		smallest_pos--;
	}
	ft_pb(a, b);
}

void	ft_index_down(t_stack **a, t_stack **b, int smallest_pos)
{
	while (smallest_pos <= ft_lstsize_ps(*a))
	{
		ft_rra(a);
		smallest_pos++;
	}
	ft_pb(a, b);
}

int	ft_sort10(t_stack **a, t_stack **b)
{
	int	smallest_pos;

	while (ft_lstsize_ps(*a) > 3)
	{
		smallest_pos = ft_find_smallest_position(a);
		if (smallest_pos <= (ft_lstsize_ps(*a) / 2))
			ft_index_up(a, b, smallest_pos);
		else if (smallest_pos > (ft_lstsize_ps(*a) / 2))
			ft_index_down(a, b, smallest_pos);
	}
	if (ft_is_it_ordered(a) == 0)
		ft_sort3(a);
	while (ft_lstsize_ps(*b) != 0)
		ft_pa(a, b);
	return (0);
}
