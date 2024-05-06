/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:08:09 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/06 12:22:45 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.

Return value: The string representing the integer.
NULL if the allocation fails.
*/

//TODO: char *ft_itoa(int n)

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return ("-2147483648");
	
/*
get length of int


*/


}