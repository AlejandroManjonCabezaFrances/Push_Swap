/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 08:03:09 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/27 07:23:58 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstclear_ps(t_stack **lst)
{
	t_stack	*aux;

	while (*lst)
	{
		aux = (*lst)->next;
		free(*lst);
		(*lst) = aux;
	}
	*lst = NULL;
}

/* void	del_ps(int *content)
{
	free(content);
} */
/* Descripción Itera la lista ’lst’ y aplica la función ’f’
en el contenido de cada nodo.
Parámetros lst: un puntero al primer nodo.f: un puntero
a la función que utilizará cada nodo.
Función del. borra el contenido del nodo y función free
libera me memoria ocupada por el nodo */
