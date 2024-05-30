/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:46:16 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/30 21:12:13 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*last;

	last = 0;
	i = 0;
	while (1)
	{
		if (s[i] == (char)c)
			last = ((char *)&s[i]);
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (last);
}
