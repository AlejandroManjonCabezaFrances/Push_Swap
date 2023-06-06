/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 07:55:42 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/06 07:51:56 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack **ft_push_swap(char **argv, t_stack **a, t_stack **b)
{
    char **str;
    char c;
    int i;
    int j;
    t_stack *aux;

    b = NULL;
    i = 1; 
    j = 0;   
    c = ' ';
    while(argv[i])
    {
        str = ft_split(argv[i], c);
        j = 0;
        while (str[j])
        {
            ft_lstadd_back_ps(a, ft_lstnew_ps(ft_atol(str[j])));
            j++;
        }
        i++;
    }
    ft_type_of_sorting(a, b);
    aux = *a;
    while (aux)
    {
        printf("%d\n", aux->content);
        aux = aux->next;
    }
    return (a);
}



int main(int argc, char **argv)
{
    t_stack **a;
    t_stack **b;
  
    a = malloc(sizeof(t_stack *));
  /*   a = 0; */
    b = malloc(sizeof(t_stack *));
  /*   b = 0; */

    if(argc == 1)
        return (0);
    if(!argc)
        write(2, "error\n", 7);
    if(argc > 1)
        ft_push_swap(argv, a, b);
    return (0);
}