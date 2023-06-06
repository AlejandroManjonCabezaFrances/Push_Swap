/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 07:29:51 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/05 07:43:19 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*ft_lstnew_ps(int content)
{
	t_stack	*k;

	k = malloc(sizeof(t_stack));
	if (k == NULL)
		return (NULL);
	k->content = content;
	k->next = NULL;
	return (k);
}

/* Descripción Crea un nuevo nodo utilizando malloc(3). La
variable miembro ’content’ se inicializa con el
contenido del parámetro ’content’. La variable
’next’, con NULL. */

/* Valor devuelto El nuevo nodo */