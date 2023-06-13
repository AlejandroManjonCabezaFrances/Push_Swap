/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:49:27 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/12 08:22:59 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_ra(t_stack **a)
{
    t_stack *aux;
    if(ft_lstsize_ps(*a) > 1)
    {
        aux = *a;   //aux guarda el primer nodo de la lista
        *a = (*a)->next;    //actualizas cabecera puntero
        aux->next = NULL;
        ft_lstadd_back_ps(a, aux);
        write(1, "ra\n", 3);
    }
}

void ft_rb(t_stack **b)
{
    t_stack *aux;
    if(ft_lstsize_ps(*b) > 1)
    {
        aux = *b;   
        *b = (*b)->next;
        aux->next = NULL;
        ft_lstadd_back_ps(b, aux);
        write(1, "rb\n", 3);
    }
}

void ft_rr(t_stack **a, t_stack **b)
{
    t_stack *aux;
    if(ft_lstsize_ps(*a) > 1 && ft_lstsize_ps(*b) > 1)
    {
        aux = *a;
        *a = (*a)->next;
        aux->next = NULL;
        ft_lstadd_back_ps(a, aux);
        aux = *b;
        *b = (*b)->next;
        aux->next = NULL;
        ft_lstadd_back_ps(b, aux);
        write(1, "rr\n", 3);
    }
}