/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:55:13 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/15 11:17:54 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_check_max_min(long nbr)
{
    if(nbr > INT_MAX || nbr < INT_MIN)
    {
        ft_print_error();
    }
}

int ft_atol(const char *str)
{
    int i;
    int neg;
    long result;

    i = 0;
    neg = 1;
    result = 0;
    
    while(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
    if(str[i] == '-')
    {
        neg = neg * (-1);
        i++;
    }
    else if(str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    result = result * neg;
    ft_check_max_min(result);
    return ((int)result);
}

/* void ft_bubble_sort(t_stack **a)
{
    int aux;
    t_stack *temp;

    temp = *a;
    while((*a)->next != NULL)
    {
        if(temp->content > temp->next->content)
        {
            aux = temp->content;
            temp->content = temp->next->content;
            temp->next->content = aux;
            *a = temp;
        }
        else
            *a = (*a)->next;
    }
    *a = temp;
} */


