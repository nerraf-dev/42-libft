/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:08:09 by sfarren           #+#    #+#             */
/*   Updated: 2024/04/13 20:21:13 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
ft_strlcpy() copies up to dstsize - 1 characters from the string src to dst,
 NUL-terminating the result if dstsize is not 0.

 return the total length of the string they tried to create.
 For strlcpy() that means the length of src. 
*/

t_size	ft_strlcpy(char *dst, const char *src, t_size dstsize)
{
	t_size	i;
	t_size	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize != 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);

}