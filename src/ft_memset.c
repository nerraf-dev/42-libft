/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:02:40 by sfarren           #+#    #+#             */
/*   Updated: 2024/04/10 22:11:55 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Fills a block of memory with a specified value.
 *
 * @param mem Pointer to the memory block to be filled.
 * @param c The value to be set. It is passed as an int, but internally
 *          it is converted to an unsigned char.
 * @param len Number of bytes to be filled.
 * @return Pointer to the memory block after it has been filled.
 */
void	*ft_memset(void *mem, int c, unsigned int len)
{
	unsigned char	*str;
	unsigned int	i;

	str = (unsigned char *)mem;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (mem);
}
