/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:08:09 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/15 19:30:24 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//TODO: remove stdio
#include <stdio.h>

/*
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.

Return value: The string representing the integer.
NULL if the allocation fails.
*/

//TODO: char *ft_itoa(int n)

int	int_length(int n)
{
	int		int_len;
	int		i;

	int_len = 0;
	if (n < 0)
		i = n * -1;
	i = n;
	printf("%d\n", n);
	while (i > 0)
	{
		i = i / 10;
		int_len++;
	}
	printf("%d\n", int_len);
	return (int_len);
}

char	*ft_itoa(int n)
{
/*
get length of int.
allocate space for int_str. 
	length = int length + 1, to include null terminator
	if int is negative, then length + 1 to include the initial '-' character

*/
	char	*int_str;
	int		i;
	int		int_len;
	int		neg_flag;

	// Get length of the integer
	neg_flag = 0;
	i = n;
	if (n < 0)
	{
		neg_flag = 1;
		i *= -1;
	}
	int_len = int_length(i);
	ft_putnbr_fd(i, 1);
	ft_putnbr_fd(neg_flag, 1);

	int_str = ft_calloc(int_len + 1, 1); //+1 to include null char

	// if n < 0, int_str[0] has to be '-'
	// if n 0 to 9, convert to char and write to array
	// if n > 9
	return (int_str);
}




int	main(void) {
	int	i;

	i = int_length(123);
	printf("%d\n",i);
}