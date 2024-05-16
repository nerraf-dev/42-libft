/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:08:09 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/16 14:00:36 by sfarren          ###   ########.fr       */
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

int	int_length(int n)
{
	int		int_len;

	int_len = 0;
	if (n == 0)
		int_len = 1;
	while (n != 0)
	{
		n /= 10;
		int_len++;
	}
	return (int_len);
}




char	*ft_itoa(int n)
{
	char	*int_str;
	int		int_len;
	int		neg_flag;

	// If negative value, set flag and convert to positive int
	int_len = int_length(n);
	printf("%d\n", int_len);
	if (n < 0)
	{
		neg_flag = 1;
		int_len++;
		n *= -1;
	}
	printf("%d\n", int_len);
	//get int length
	//if neg flag is 1, length++
	
	
	// Allocate the space for the string
	int_str = malloc(int_len + 1 * 1); //+1 to include null char
	while (n != 0)
	{
		printf("%d\n", n);
		int_str[int_len - 1] = (n % 10) + '0';
		n /= 10;
		int_len--;
	}
	// if n < 0, int_str[0] has to be '-'
	// if n 0 to 9, convert to char and write to array
	// if n > 9
	printf("int_str: %s\n", int_str);
	return (int_str);
}

int	main(void) {
	char	*int_str;

	int_str = ft_itoa(42);
	printf("%s\n", int_str);

	int_str = ft_itoa(123);
	printf("%s\n", int_str);

	int_str = ft_itoa(0);
	printf("%s\n", int_str);

	int_str = ft_itoa(999);
	printf("%s\n", int_str);
	
	int_str = ft_itoa(-999);
	printf("%s\n", int_str);

	int_str = ft_itoa(-123);
	printf("%s\n", int_str);
}