/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:05:09 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/15 17:48:45 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "../include/push_swap.h"

int ft_sort100(t_stack **a, t_stack **b)
{
    int key_nbr;
    int count;
    t_stack *aux;
    
    aux = *a;
    key_nbr = ft_find_number_biggest(a) / 4;
    while(aux)
    {
        if(aux->content <= key_nbr)
            ft_pb(a, b);
        else
            ft_ra(a); 
        aux = aux->next;
    }
    return (0);
}

int ft_find_number_biggest(t_stack **a)
{
    int biggest_num;
    t_stack *aux;

    aux = *a;
    biggest_num = (*a)->content;
    while(aux)
    {
        if(aux->content > biggest_num)
            biggest_num = aux->content;
        aux = aux->next;
    }
    return (biggest_num);
} */