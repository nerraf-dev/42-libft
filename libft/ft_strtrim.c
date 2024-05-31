/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:05:34 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/31 12:34:42 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
- Parameters
	s1:  The string to be trimmed.
	set:  The reference set of characters to trim.
- Return value
	The trimmed string.
	NULL if the allocation fails.
*/
static int	is_in_set(char c, const char *set);
int			find_start(char const *s1, char const *set);
int			find_end(char const *s1, char const *set, int len);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*trimmed;

	len = ft_strlen(s1);
	start = find_start(s1, set);
	end = find_end(s1, set, len);
	len = (end + 1) - start;
	trimmed = ft_substr(s1, start, len);
	return (trimmed);
}

static int	is_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	find_start(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
	{
		start++;
	}
	return (start);
}

int	find_end(char const *s1, char const *set, int len)
{
	int	end;

	end = len - 1;
	while (end > 0 && is_in_set(s1[end], set))
		end--;
	return (end);
}
