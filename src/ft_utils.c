/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:55:13 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/05 07:39:49 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_check_max_min(int nbr)
{
    if(nbr >= INT_MAX || nbr <= INT_MIN)
    {
        write(2, "error\n", 7);
        return;
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


