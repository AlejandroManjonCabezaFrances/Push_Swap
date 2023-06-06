/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 07:38:23 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/06 07:48:25 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int ft_find_position_smallest(t_stack **a)
{
	int smallest_pos;
    int i;
    t_stack *aux;
    t_stack *aux2;

    smallest_pos = 0;
    i = 1;
    aux = (*a)->next;   //inicializada 2 posicion lista
    aux2 = (*a);        //inicializada 1 posicion lista
    while(aux)
    {
        if(aux->content < aux2->content)
        {
            aux2->content = aux->content;
            smallest_pos = i;
        }
        i++;
        aux = aux->next;
    }
    return (smallest_pos);
}

void ft_index_up(t_stack **a, t_stack **b, int smallest_pos)
{
    while(smallest_pos > 1)
    {
        ft_ra(a);
        smallest_pos--;
    }
    ft_pb(a, b);
}

void ft_index_down(t_stack **a, t_stack **b, int smallest_pos)
{
    while(smallest_pos <= ft_lstsize_ps(*a))
    {
        ft_rra(a);
        smallest_pos++;
    }
    ft_pb(a, b);
}

int ft_sort10(t_stack **a, t_stack **b)
{
    int smallest_pos;

        while(ft_lstsize_ps(*a) > 3)
        {
            smallest_pos = ft_find_position_smallest(a);
            if(smallest_pos <= (ft_lstsize_ps(*a) / 2))
                ft_index_up(a, b, smallest_pos);
            else if(smallest_pos > (ft_lstsize_ps(*a) / 2))
                ft_index_down(a, b, smallest_pos);
        }
        if(ft_is_it_ordered(a) == 0)
            ft_sort3(a);
        while(ft_lstsize_ps(*b) != 0)
        {
            ft_pa(a, b);
        }
    return (0);
}

int ft_is_it_ordered(t_stack **a)
{
    t_stack *aux;
    
    aux = *a;
    while(aux)
    {
        if(aux->next && aux->content > aux->next->content)
            return (0); //lista no ordenada
        aux = aux->next;
    }
    return (1); //lista ordenada
}


