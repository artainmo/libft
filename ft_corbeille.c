/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artainmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:35:29 by artainmo          #+#    #+#             */
/*   Updated: 2019/10/14 18:30:46 by artainmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Trims until it finds a char that doesn’t need to be trimmed starting from begin string and does the same starting from end string. */
static int ft_is_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char const	*ft_trim_begin(char *s1, char const *set)
{
	int i;
	int l;

	i = 0;
	while (ft_is_set(s1[i], set))
	{
		l = 0;
		while (s1[l])
		{
			s1[l] = s1[l + 1];
			l++;
		}
	}
	return (s1);
}

static char const	*ft_trim_end(char *s1, char const *set)
{
	int i;
	int l;

	i = ft_strlen(s1) - 1;
	while (ft_is_set(s1[i], set))
	{
		l = i;
		while (s1[l])
		{
			s1[l] = s1[l + 1];
			l++;
		}
		i--;
	}
	return (s1);
}

char				*ft_strtrim(char *s1, char const *set)
{
	char	*cpy;
	int		i;

	i = 0;
	if (!(cpy = ft_strdup(s1)))
		return (0);
	ft_trim_begin(cpy, set);
	ft_trim_end(cpy, set);
	return (cpy);
}
