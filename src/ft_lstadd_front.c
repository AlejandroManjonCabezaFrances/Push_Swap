/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 08:10:41 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/05 15:09:24 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstadd_front_ps(t_stack **lst, t_stack *new)
{
	printf("add1");
	new->next = *lst;
	printf("add2");
	*lst = new;
	printf("add3");
}

/* Descripción Añade el nodo ’new’ al principio de la lista ’lst’. */
/* El nuevo nodo pasa a apuntar al nodo que antes era el primero de la lista.
Se modifica el valor del puntero del primer nodo para que apunte al nuevo nodo  */