/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:53:55 by sfarren           #+#    #+#             */
/*   Updated: 2024/04/23 16:33:28 by sfarren          ###   ########.fr       */
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

	Hints:
	* First we have to check if the start index is greater than the length of the string or not.
	* We also have to check if the start plus the len is greater than the length of the whole string.
	* Then we allocate enough memory for the substring, and copy from s[start] until we reach len characters copied into our new string.
	* And finally we can return the substring.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;
	int		j;

	if (start > ft_strlen(s))
		return (0);
	if (start + len > ft_strlen(s))
		return (0);
	substr = malloc(len + 1);
	if (!substr)
		return (0);
	if (ft_strlen(s) == 0)
		substr[i] = '\0';
	else
	{
		i = 0;
		j = start;
		while (s[i] != '\0' && j < len)
		{
			substr[i] = s[j];
			i++;
			j++;
		}
		substr[i] = '\0';
	}

}
