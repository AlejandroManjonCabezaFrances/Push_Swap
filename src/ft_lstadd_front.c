/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 08:10:41 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/12 07:57:53 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstadd_front_ps(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}

/* Descripción Añade el nodo ’new’ al principio de la lista ’lst’. */
/* new_next apunta a lo que apuntaba el *b. Se actualiza el *lst */