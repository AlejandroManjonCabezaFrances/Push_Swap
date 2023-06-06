/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:16:18 by amanjon-          #+#    #+#             */
/*   Updated: 2023/05/23 13:11:16 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstiter_ps(t_stack *lst, void (*f)(int))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
