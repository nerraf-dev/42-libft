/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:08:09 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/15 14:22:01 by sfarren          ###   ########.fr       */
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
/*
get length of int
allocate space for len + 1
then putnbr without using write - put the digits into the array!
*/

// n = 123

/*
n/10 = 12.3, 1.23, 0.123
*/

	char	*int_str;
	int		int_len;
	int		i;

	int_len = 0;
	i = n;

	while (i > 0) {
		i = i / 10;
		int_len++;
	}
	if (n < 0)
	{
		int_len++;
		n *= -1;
	}

	*int_str = ft_calloc(int_len + 1, 1); //+1 to include null char

	// if n < 0, int_str[0] has to be '-'
	// if n 0 to 9, convert to char and write to array
	// if n > 9


	return (int_str)

}

int	main(void) {

}