/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:05:34 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/21 12:57:45 by sfarren          ###   ########.fr       */
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
int	is_in_set(char c, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*trimmed;

	start = 0;
	len = ft_strlen(s1);
	end = len -1;
	while (s1[start])
	{
		while (is_in_set(s1[start], set))
			start++;
		if (!is_in_set(s1[start], set))
			break ;
	}
	while (end > start)
	{
		while (is_in_set(s1[end], set))
			end--;
		if (!is_in_set(s1[end], set))
			break ;
	}
	len = (end + 1) - start;
	trimmed = ft_substr(s1, start, len);
	return (trimmed);
}

int	is_in_set(char c, const char *set)
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

int main(void)
{
	char *str;
	// ft_strtrim("hello. ", " .");
	str = ft_strtrim("lorem ipsum dolor sit amet", "tel");
	printf("trimmed: %s\n", str);
	str = ft_strtrim("    ", " ");
	printf("trimmed: %s\n", str);
}
