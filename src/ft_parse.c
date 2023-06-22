/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:18:20 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/22 13:05:36 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_print_error(void)
{
	write(2, "error\n", 6);
	exit(1);
}

void	ft_check_argc(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == '+' || str[i][j] == '-')
			{
				if (str[i][j + 1] == '+' || str[i][j + 1] == '-' )
					ft_print_error();
				if (str[i][j + 1] == '\0' || ((j != 0) && (str[i][j - 1] >= '0'
					&& str[i][j - 1] <= '9')))
					ft_print_error();
			}
			if ((str[i][j] < '0' || str[i][j] > '9') && (str[i][j] != '+'
				&& str[i][j] != '-'))
				ft_print_error();
			j++;
		}
		i++;
	}
}

void	ft_repeat_numbers(t_stack **a)
{
	t_stack	*aux;
	t_stack	*aux2;

	aux = *a;
	while (aux)
	{
		aux2 = aux->next;
		while (aux2)
		{
			if (aux->content == aux2->content)
				ft_print_error();
			aux2 = aux2->next;
		}
		aux = aux->next;
	}
}
