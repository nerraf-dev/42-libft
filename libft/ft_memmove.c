/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:37:31 by sfarren           #+#    #+#             */
/*   Updated: 2024/04/23 15:01:21 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Copies a block of memory from a source address to a destination address,
 * handling overlapping memory regions correctly.
 *
 * @param dest The destination address where the memory will be copied to.
 * @param src The source address from where the memory will be copied.
 * @param n The number of bytes to be copied.
 * @return A pointer to the destination address.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (0);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
