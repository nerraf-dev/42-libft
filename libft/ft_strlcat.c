/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:56:54 by sfarren           #+#    #+#             */
/*   Updated: 2024/04/17 13:14:59 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_tt	ft_strlcat(char *dest, const char *src,size_t_t size)
{
	size_tt	dest_count;
	size_tt	src_count;
	size_tt	i;

	dest_count = 0;
	src_count = 0;
	i = 0;
	while (dest[dest_count] != '\0' && dest_count < size)
		dest_count++;
	while (src[src_count] != '\0')
		src_count++;
	if (size <= dest_count)
		return (size + src_count);
	while (src[i] != '\0' && dest_count + i < size - 1)
	{
		dest[dest_count + i] = src[i];
		i++;
	}
	dest[dest_count + i] = '\0';
	return (dest_count + src_count);
}
