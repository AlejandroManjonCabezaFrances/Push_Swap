/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_num_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:35:24 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/22 12:04:49 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_find_position_smallest(t_stack **a)
{
	t_stack	*aux;
	int		smallest_pos;
	int		smallest_num;
	int		i;

	smallest_pos = 0;
	i = 1;
	aux = (*a);
	smallest_num = (*a)->content;
	while (aux)
	{
		if (aux->content < smallest_num)
		{
			smallest_num = aux->content;
			smallest_pos = i;
		}
		aux = aux->next;
		i++;
	}
	return (smallest_pos);
}

int	ft_find_position_biggest(t_stack **b)
{
	t_stack	*aux;
	int		biggest_pos;
	int		biggest_num;
	int		i;

	aux = *b;
	biggest_num = (*b)->content;
	i = 1;
	while (aux)
	{
		if (aux->content > biggest_num)
		{
			biggest_num = aux->content;
			biggest_pos = i;
		}
		aux = aux->next;
		i++;
	}
	return (biggest_pos);
}

int	ft_find_number_smallest(t_stack **a)
{
	t_stack	*aux;
	int		smallest_number;

	aux = (*a);
	smallest_number = (*a)->content;
	while (aux)
	{
		if (aux->content < smallest_number)
			smallest_number = aux->content;
		aux = aux->next;
	}
	return (smallest_number);
}

int	ft_find_number_biggest(t_stack **a)
{
	t_stack	*aux;
	int		biggest_num;

	aux = *a;
	biggest_num = (*a)->content;
	while (aux)
	{
		if (aux->content > biggest_num)
		biggest_num = aux->content;
		aux = aux->next;
	}
	return (biggest_num);
}
