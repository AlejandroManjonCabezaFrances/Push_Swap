/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:31:29 by amanjon-          #+#    #+#             */
/*   Updated: 2023/05/31 08:32:07 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstdelone_ps(t_stack *lst, void (*del)(int))
{
	if (lst != NULL && del != NULL)
	{
		(*del)(lst->content);
		free(lst);
	}
}

/* Descripción Toma como parámetro un nodo ’lst’ y libera la memoria
del contenido utilizando la función ’del’dada como parámetro, además
de liberar el nodo. La memoria de ’next’ no debe liberarse. */

/* Parámetros lst: el nodo a liberar. del: un puntero a la función 
utilizada para liberar el contenido del nodo. */