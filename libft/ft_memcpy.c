/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:21:09 by sfarren           #+#    #+#             */
/*   Updated: 2024/04/17 22:23:14 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/**
 * Copies a block of memory from a source address to a destination address.
 *
 * @param dest The pointer to the destination address where the memory will 
 * 				be copied to.
 * @param src The pointer to the source address where the memory will be 
 * 				copied from.
 * @param n The number of bytes to be copied.
 * @return A pointer to the destination address.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
