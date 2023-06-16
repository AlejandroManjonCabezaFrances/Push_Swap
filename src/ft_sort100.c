/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:05:09 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/16 14:10:23 by amanjon-         ###   ########.fr       */
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
        ft_rb(b);
        biggest_pos--;
    }
    ft_pa(a, b);
}

void ft_index_down_b(t_stack **a, t_stack **b, int biggest_pos)
{
    while(biggest_pos <= ft_lstsize_ps(*b))
    {
        ft_rrb(b);
        biggest_pos++;
    }
    ft_pa(a, b);
}

int ft_sort100(t_stack **a, t_stack **b)
{
    int key_nbr;
    t_stack *aux;
    int biggest_pos;
    
    aux = *a;
    key_nbr = ft_find_number_biggest(a) / 4;
    while(aux)
    {
        if(aux->content <= key_nbr)
            ft_pb(a, b);
        else
        {
            ft_ra(a);
            /* aux = aux->back; */
        }
        aux = aux->next;
    }
    biggest_pos = ft_find_position_biggest(b);
    while(ft_lstsize_ps(*b) > 0)
    {
        if(biggest_pos <= ft_lstsize_ps(*b) / 2)
            ft_index_up(a, b, biggest_pos);
        else if(biggest_pos > ft_lstsize_ps(*b) / 2)
            ft_index_down(a, b, biggest_pos);
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

