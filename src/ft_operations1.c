/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:11:35 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/05 15:07:22 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_sa(t_stack **a)
{
    t_stack *aux;
    if(ft_lstsize_ps(*a) >= 2)
    {
        aux = (*a);
        (*a) = (*a)->next;
        aux->next = (*a)->next;
        (*a)->next = aux;
        write(1, "sa\n", 3);
    }
}

void ft_sb(t_stack **b)
{
    t_stack *aux;
    if(ft_lstsize_ps(*b) >= 2)
    {
        aux = (*b);
        (*b) = (*b)->next;
        aux->next = (*b)->next;
        (*b)->next = aux;
        write(1, "sb\n", 3);
    }
}

void ft_ss(t_stack **a, t_stack **b)
{
    t_stack *aux;
    if((ft_lstsize_ps(*a) >= 2) && (ft_lstsize_ps(*b) >= 2))
    {
        aux = (*a);
        (*a) = (*a)->next;
        aux->next = (*a)->next;
        (*a)->next = aux;
        aux = (*b);
        (*b) = (*b)->next;
        aux->next = (*b)->next;
        (*b)->next = aux;
        write(1, "ss\n", 3);
    }
}

void ft_pa(t_stack **a, t_stack **b)
{
    t_stack *aux;
    if(ft_lstsize_ps(*b) >= 1)
    {
        aux = *b;  
        *b = (*b)->next;    //actualiza nodo b (estará vacío o NULL)
        ft_lstadd_front_ps(a, aux);
        write(1, "pa\n", 3);
    }
}

void ft_pb(t_stack **a, t_stack **b)
{
    t_stack *aux;
    if(ft_lstsize_ps(*a) >= 1)
    {
        printf("pb1---");
        aux = *a;
        *a = (*a)->next;    //actualiza nodo a (estará vacío o NULL)
        ft_lstadd_front_ps(b, aux);
        printf("pb2---");
        write(1, "pb\n", 3);
    }
}