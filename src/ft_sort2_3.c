/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort2_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:02:53 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/12 10:07:54 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_type_of_sorting(t_stack **a, t_stack **b)
{
    if(ft_is_it_ordered(a) == 0)
    {
        if(ft_lstsize_ps(*a) == 2)
            ft_sort2(a);
        else if(ft_lstsize_ps(*a) == 3)
            ft_sort3(a);
        else if(ft_lstsize_ps(*a) > 3 && ft_lstsize_ps(*a) <= 10)
            ft_sort10(a, b);
    }
    else
        return ;
}

void ft_sort2(t_stack **a)
{
    if((*a)->content > (*a)->next->content)
        ft_sa(a);
}

void ft_sort3(t_stack **a)
{   
    if((*a)->content > (*a)->next->content && (*a)->content < (*a)->next->next->content && (*a)->next->content < (*a)->next->next->content)
        ft_sa(a);
    else if((*a)->content > (*a)->next->content && (*a)->next->content > (*a)->next->next->content && (*a)->content > (*a)->next->next->content)
    {
        ft_sa(a);
        ft_rra(a);
    }
    else if((*a)->next->next->content < (*a)->content && (*a)->next->next->content > (*a)->next->content && (*a)->content > (*a)->next->content)
        ft_ra(a);
    else if((*a)->next->next->content < (*a)->next->content && (*a)->next->next->content > (*a)->content && (*a)->content < (*a)->next->content)
    {
        ft_sa(a);
        ft_ra(a);
    }
    else if((*a)->content < (*a)->next->content && (*a)->content > (*a)->next->next->content && (*a)->next->content > (*a)->next->next->content)
        ft_rra(a);
}