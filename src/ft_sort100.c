/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:05:09 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/22 13:02:31 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_index_up_b(t_stack **a, t_stack **b, int biggest_pos)
{
	while (biggest_pos > 1)
	{
		ft_rb(b);
		biggest_pos--;
	}
	ft_pa(a, b);
}

void	ft_index_down_b(t_stack **a, t_stack **b, int biggest_pos)
{
	while (biggest_pos <= ft_lstsize_ps(*b))
	{
		ft_rrb(b);
		biggest_pos++;
	}
	ft_pa(a, b);
}

int	ft_num_counter_with_limiter(t_stack **a, int smallest_number)
{
	t_stack	*aux;
	int		count;

	aux = (*a);
	count = 0;
	while (aux)
	{
		if (aux->content <= smallest_number)
			count++;
		aux = aux->next;
	}
	return (count);
}

void	ft_push_chunks_to_b(t_stack **a, t_stack **b, int smallest_number)
{
	int	count;

	count = ft_num_counter_with_limiter(a, smallest_number);
	while (count > 0)
	{
		if ((*a)->content <= smallest_number)
		{
			ft_pb(a, b);
			count--;
		}
		else
			ft_ra(a);
	}
}

void	ft_sort100(t_stack **a, t_stack **b)
{
	int	chunks;
	int	biggest_pos;
	int	smallest_number;

	smallest_number = ft_find_number_smallest(a);
	chunks = ft_find_number_biggest(a) / 4;
	while (ft_lstsize_ps(*a) > 0)
	{
		ft_push_chunks_to_b(a, b, smallest_number);
		smallest_number = smallest_number + chunks;
	}
	while (ft_lstsize_ps(*b) > 0)
	{
		biggest_pos = ft_find_position_biggest(b);
		if (biggest_pos <= (ft_lstsize_ps(*b) / 2))
			ft_index_up_b(a, b, biggest_pos);
		else if (biggest_pos > (ft_lstsize_ps(*b) / 2))
			ft_index_down_b(a, b, biggest_pos);
	}
}
