/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:08:54 by sfarren           #+#    #+#             */
/*   Updated: 2024/04/15 18:24:33 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *content, const char *search_str, t_size len)
{
	t_size	i;
	t_size	j;

	i = 0;
	j = 0;
	if (search_str[0] == '\0')
		return ((char *) content);
	while (content[i] != '\0' && i < len)
	{
		if (content[i] == search_str[0])
		{
			j = 0;
			while (content[i + j] == search_str[j]
				&& search_str[j] != '\0' && i + j < len)
				j++;
			if (search_str[j] == '\0')
				return ((char *) content + i);
		}
	}
	return (0);
}
