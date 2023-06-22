/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:34:55 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/22 13:29:46 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rra(t_stack **a)
{
	t_stack	*tail;
	t_stack	*aux;

	if (ft_lstsize_ps(*a) > 1)
	{
		aux = *a;
		tail = ft_lstlast_ps(aux);
		while (aux->next != tail)
			aux = aux->next;
		aux->next = NULL;
		ft_lstadd_front_ps(a, tail);
		write(1, "rra\n", 5);
	}
}

void	ft_rrb(t_stack **b)
{
	t_stack	*tail;
	t_stack	*aux;

	if (ft_lstsize_ps(*b) > 1)
	{
		aux = *b;
		tail = ft_lstlast_ps(aux);
		while (aux->next != tail)
			aux = aux->next;
		aux->next = NULL;
		ft_lstadd_front_ps(b, tail);
		write(1, "rrb\n", 5);
	}
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	t_stack	*tail;
	t_stack	*aux;

	if (ft_lstsize_ps(*a) > 1)
	{
		aux = *a;
		tail = ft_lstlast_ps(aux);
		while (aux->next != tail)
			aux = aux->next;
		aux->next = NULL;
		ft_lstadd_front_ps(a, tail);
		aux = *b;
		tail = ft_lstlast_ps(aux);
		while (aux->next != tail)
			aux = aux->next;
		aux->next = NULL;
		ft_lstadd_front_ps(b, tail);
		write(1, "rrr\n", 5);
	}
}
/* while(aux->next != NULL && aux->next != tail) */
