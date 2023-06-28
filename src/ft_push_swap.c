/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 07:55:42 by amanjon-          #+#    #+#             */
/*   Updated: 2023/06/28 18:08:17 by amanjon-         ###   ########.fr       */
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
			free(str[j]);
			j++;
		}
		free(str);
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
	ft_lstclear_ps(a);
	ft_lstclear_ps(b);
	free(a);
	free(b);
	return (0);
}
