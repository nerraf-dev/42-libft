/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:08:09 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/17 14:15:02 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//TODO: Remove this
#include <stdio.h>
/*
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.

Return value: The string representing the integer.
NULL if the allocation fails.
*/

//TODO: char *ft_itoa(int n)
static int	int_length(int n);

char	*ft_itoa(int n)
{
	char	*int_str;
	int		int_len;
	int		num;
	int		i;

	// Get integer length. The sign is included in the return value.
	int_len = int_length(n);
	num = n;
	if (n < 0)
		num *= -1;
	// Set a counter to compensate for indexing/null char	
	i = int_len -1;
	printf("n: %d\n", n);
	printf("len: %d\n", int_len);

	// Allocate the space for the string
	int_str = malloc(int_len + 1 * 1); //+1 to include null char
	if (!int_str)
		return (NULL);
	int_str[0] = '0';		//just to pre-set the initial space of memory to celar any prior junk
	printf("num: %d\n", num);
	while (num != 0)
	{
		printf("n:: %d\n", (num % 10));
		int_str[i] = (num % 10) + 48;
		num /= 10;
		i--;
	}
	// IF the number is negative the first digit is in [1], with '-' being in [0].
	if (n < 0)
		int_str[0] = '-';
	int_str[int_len] = '\0';

	if (int_str[int_len] == '\0')
		printf("int_str: %s\n", int_str);
	return (int_str);
}

//length counting function
static int	int_length(int n)
{
	int	count;

	count = 0;
	// If n is negative, inc counter to include space for '-'
	// and change n to positive
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	// In cases of n being 0, the counter is set at 1
	if (n == 0)
		count = 1;
	// in other cases the int cna be counted
	// divide by 10, inc counter until [n] reaching 0
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}


int	main(void)
{
	char	*int_str;

	int_str = ft_itoa(42);
	printf("ft_itoa RESULT: %s\n", int_str);

	int_str = ft_itoa(123);
	printf("ft_itoa RESULT: %s\n", int_str);

	int_str = ft_itoa(0);
	printf("ft_itoa RESULT: %s\n", int_str);

	int_str = ft_itoa(999);
	printf("ft_itoa RESULT: %s\n", int_str);
	
	int_str = ft_itoa(-999);
	printf("ft_itoa RESULT: %s\n", int_str);

	int_str = ft_itoa(-123);
	printf("ft_itoa RESULT: %s\n", int_str);
}