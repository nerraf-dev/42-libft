/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:20:10 by sfarren           #+#    #+#             */
/*   Updated: 2024/04/12 20:26:56 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, t_size n)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
