/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:09:51 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/12 07:57:02 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_lstsize_ps(t_stack *lst)
{
	t_stack *aux;
	int	size;

	aux = lst;
	size = 0;
	while (aux)
	{
		aux = aux->next;
		size++;
	}
	return (size);
}

/* Cuenta el número de nodos de una lista. */
/* Valor devuelto La longitud de la lista. */