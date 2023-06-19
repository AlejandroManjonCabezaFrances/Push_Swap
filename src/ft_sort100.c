/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:05:09 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/19 18:49:29 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int ft_find_position_biggest(t_stack **b)
{
    t_stack *aux;
    int biggest_pos;
    int biggest_num;
    int i;

    aux = *b;
    biggest_num = (*b)->content;
    i = 0;
    while(aux)
    {
        if(aux->content > biggest_num)
        {
            biggest_num = aux->content;
            biggest_pos = i;
        }
        aux = aux->next;
        i++;
    }
    return (biggest_pos);
}

void ft_index_up_b(t_stack **a, t_stack **b, int biggest_pos)
{
    while(biggest_pos > 1)
    {
        printf("index_up\n");
        ft_rb(b);
        biggest_pos--;
    }
    ft_pa(a, b);
}

void ft_index_down_b(t_stack **a, t_stack **b, int biggest_pos)
{
    while(biggest_pos <= ft_lstsize_ps(*b))
    {
        printf("index down\n");
        ft_rrb(b);
        biggest_pos++;
    }
    ft_pa(a, b);
}

// 100
// 1er intervalo: de numero menor a X (25 por ejemplo)
// ultimo cachito 75 - numero mayor
// 100 / 4 = 25
// funcion que comprueba que si quedan mas numeros en ese intervalo
// si no quedan, cambiamos de intervalo (por ejemplo 25-50)
// determinar si el numero mayor esta mas cerca si hacemos reverse rotate o rotate
// guardarse el numero mayor 

int ft_intervals_left(t_stack **a, int i)
{
    t_stack *aux;

    aux = *a;
    while (aux)
    {
        if (aux->content == ft_find_number_biggest(a))
            return (0);
        if (aux->content < i)
            return (1);
        aux = aux->next;
    }
    return (0);
}

int ft_sort100(t_stack **a, t_stack **b)
{
    t_stack *aux;
    int key_nbr;
    int biggest_pos;
    int interval;
    
    aux = *a;
    key_nbr = ft_find_number_biggest(a) / 4;
    interval = 0;
    while(aux)
    {      
        aux = *a;
        if (!aux)
            break;
        if(aux->content <= interval)
        {
            ft_pb(a, b);
        }
        else
            ft_ra(a);
        if (ft_intervals_left(a, interval) == 0)
        {
            interval = interval + key_nbr;
            printf("interval = %d\n", interval);
        }
    }
            while(*b)
            {
                printf("%d\n", (*b)->content);
                *b = (*b)->next;
            }
    while(ft_lstsize_ps(*b) > 0)
    {
        biggest_pos = ft_find_position_biggest(b);
        printf("biggest_pos = %d\n", biggest_pos);
        if(biggest_pos <= ft_lstsize_ps(*b) / 2)
            ft_index_up_b(a, b, biggest_pos);
        else if(biggest_pos > (ft_lstsize_ps(*b) / 2))
            ft_index_down_b(a, b, biggest_pos);
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
}

