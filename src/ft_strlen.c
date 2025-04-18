/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:58:38 by sfarren           #+#    #+#             */
/*   Updated: 2025/04/18 18:45:03 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_strlen.c
 * @brief Implementation of the ft_strlen function.
 *
 * This function calculates the length of a null-terminated string.
 *
 * @param str The input string whose length is to be calculated.
 *            It must be a valid null-terminated string.
 *
 * @return The length of the string (no. of characters before \0).
 */
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
