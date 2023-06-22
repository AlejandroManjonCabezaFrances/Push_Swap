/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 07:55:42 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/22 13:05:56 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	**ft_push_swap(char **argv, t_stack **a, t_stack **b)
{
	char	**str;
	int		i;
	int		j;

	i = 1;
	str = 0;
	while (argv[i])
	{
		str = ft_split(argv[i], ' ');
		ft_check_argc(str);
		j = 0;
		while (str[j])
		{
			ft_lstadd_back_ps(a, ft_lstnew_ps(ft_atol(str[j])));
			j++;
		}
		i++;
	}
	ft_repeat_numbers(a);
	ft_type_of_sorting(a, b);
	return (a);
}

int	main(int argc, char **argv)
{
	t_stack	**a;
	t_stack	**b;
	t_stack	*aux;

	a = malloc(sizeof(t_stack *));
	*a = NULL;
	if (a == NULL)
		return (0);
	b = malloc(sizeof(t_stack *));
	*b = NULL;
	if (b == NULL)
		return (0);
	if (argc > 1)
		a = ft_push_swap(argv, a, b);
	if (!a)
		ft_print_error();
	aux = *a;
	while (aux)
	{
		printf("main ->%d\n", aux->content);
		aux = aux->next;
	}
	return (0);
}
