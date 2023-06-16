/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:18:20 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/16 13:32:28 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_print_error(void)
{
    write(2, "error\n", 6);
    exit(1);
}

void ft_check_argc(char **str)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        j = 0;
        while (str[i][j])
        {
            if(str[i][j] == '+' || str[i][j] == '-')
            {
                if(str[i][j+1] == '+' || str[i][j+1] == '-')
                    ft_print_error();
                if(str[i][j+1] == '\0' || ((j != 0) && (str[i][j-1] >= '0' && str[i][j-1] <= '9')))
                    ft_print_error();
            }
            if((str[i][j] < '0' || str[i][j] > '9') && (str[i][j] != '+' && str[i][j] != '-'))   
                    ft_print_error(); 
            /* if(ft_strlen(str[i]) == 1)
                ft_print_error();  */        
            j++;
        }
        i++;
    }
}

void ft_repeat_numbers(t_stack **a)
{
    t_stack *aux;  
    t_stack *aux2;

    aux = *a;
    while(aux)
    {
        aux2 = aux->next;
        while(aux2)
        {
            if(aux->content == aux2->content)
                ft_print_error();
            aux2 = aux2->next;
        }
        aux = aux->next;
    }   
}

/* void ft_repeat_numbers(char **str)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        j = 1;
        while (str[i][j])
        {
            if (i != j && ft_strncmp(str[i], str[j], 3) == 0)
                ft_print_error();
            j++;
        }
        i++;
    }
} */
//Funcion Rodri
/* static int  check_maxmin(char **str)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        j = ft_strlen(str[i]);
        if (j == 10 || (j == 11 && str[i][0] == '-'))
        {
            if (str[i][0] == '-')
            {
                if (ft_strncmp(str[i], ft_itoa(INT_MIN), 11) > 0)
                    return (0);
            }
            else
                if (ft_strncmp(str[i], ft_itoa(INT_MAX), 10) > 0)
                    return (0);
        }
        if (j > 11)
            return (0);
        i++;
    }
    return (1);
} */
//Funcion resumida 
/* int check_maxmin(char **str)
{
    int i;
    long num;

    i = 0;
    num = 0;
    while (str[i])
    {
        num = ft_atol(str[i]); // Convertir cadena a long

        if (num > INT_MAX || num < INT_MIN)
            return (0);
        i++;
    }
    return (1);
} */

