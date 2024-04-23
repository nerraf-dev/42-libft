/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:53:55 by sfarren           #+#    #+#             */
/*   Updated: 2024/04/23 16:20:58 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Allocates and returns a substring from the given string.
 *
 * The substring begins at the specified start index and has a maximum length
 * of len.
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string 's'.
 * @param len The maximum length of the substring.
 * @return The substring if successful, NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	/*
	 - 
	*/
	char	*substr;
	int		i;
	int		j;

	substr = malloc(len + 1);
	if (!substr)
		return (0);
	i = 0;
	j = start;
	if (ft_strlen(s1) == 0)
		substr[i] = '\0';
	else
	{
		while (s[i] != '\0' && j < len)
		{
			substr[i] = s[j];
			i++;
			j++;
		}
		substr[i] = '\0';
	}

}
