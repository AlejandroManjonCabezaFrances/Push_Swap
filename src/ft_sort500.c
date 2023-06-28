/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort500.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:04:54 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/27 07:57:25 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort500(t_stack **a, t_stack **b)
{
	int	chunks;
	int	biggest_pos;
	int	smallest_number;

	smallest_number = ft_find_smallest_number(a);
	chunks = ft_find_biggest_number(a) / 8;
	while (ft_lstsize_ps(*a) > 0)
	{
		ft_push_chunks_to_b(a, b, smallest_number);
		smallest_number = smallest_number + chunks;
	}
	while (ft_lstsize_ps(*b) > 0)
	{
		biggest_pos = ft_find_biggest_position(b);
		if (biggest_pos <= (ft_lstsize_ps(*b) / 2))
			ft_index_up_b(a, b, biggest_pos);
		else if (biggest_pos > (ft_lstsize_ps(*b) / 2))
			ft_index_down_b(a, b, biggest_pos);
	}
}
