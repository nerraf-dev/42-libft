/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:08:54 by sfarren           #+#    #+#             */
/*   Updated: 2024/04/17 12:12:02 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *content, const char *search_str, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	if (search_str[0] == '\0')
		return ((char *) content);
	while (content[i] != '\0' && i < len)
	{
		start = i;
		while (content[i] == search_str[j])
		{
			i++;
			j++;
			if (search_str[j] == '\0')
				return ((char *)&content[start]);
			if (i == len)
				return (0);
		}
		i = start + 1;
		j = 0;
	}
	return (0);
}