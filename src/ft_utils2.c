/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 07:28:31 by amanjon-          #+#    #+#             */
/*   Updated: 2023/05/31 16:52:00 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*a;
	size_t		i;

	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	a = malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		a[i] = s[start];
		i++;
		start++;
	}
	a[i] = '\0';
	return (a);
}

static int	ft_count_sub(char const *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			j = 1;
			count++;
		}
		else if (s[i] == c)
		{
			j = 0;
		}
		i++;
	}
	return (count);
}

static int	ft_count_letters(char const *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[i] != c && s[i])
	{
		j++;
		i++;
	}
	return (j);
}

static void	ft_free_subs(char **k, int subs)
{
	while (subs >= 0)
	{
		free (k[subs]);
		subs--;
	}
	free (k);
}

char	**ft_split(char const *s, char c)
{
	char	**k;
	int		subs;
	int		start;
	int		sub_len;

	start = 0;
	subs = -1;
	k = malloc(sizeof(char *) * (ft_count_sub(s, c) + 1));
	if (k == NULL)
		return (NULL);
	while (++subs < ft_count_sub(s, c))
	{
		while (s[start] == c)
			start++;
		sub_len = ft_count_letters(s, c, start);
		k[subs] = ft_substr(s, start, sub_len);
		if (k[subs] == NULL)
		{
			ft_free_subs(k, subs);
			return (NULL);
		}
		start = start + sub_len;
	}
	k[subs] = NULL;
	return (k);
} */