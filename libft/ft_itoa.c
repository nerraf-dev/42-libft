/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:08:09 by sfarren           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/05/16 14:00:36 by sfarren          ###   ########.fr       */
=======
/*   Updated: 2024/05/15 19:30:24 by sfarren          ###   ########.fr       */
>>>>>>> 0c66ed47b22f1693cf653cf559ff085f0000046a
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
//TODO: Remove this
#include <stdio.h>
=======
//TODO: remove stdio
#include <stdio.h>

>>>>>>> 0c66ed47b22f1693cf653cf559ff085f0000046a
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
<<<<<<< HEAD
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
=======
>>>>>>> 0c66ed47b22f1693cf653cf559ff085f0000046a
	int		int_len;
	int		neg_flag;

<<<<<<< HEAD
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
=======
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
>>>>>>> 0c66ed47b22f1693cf653cf559ff085f0000046a
	return (int_str);
}

int	main(void) {
	char	*int_str;

<<<<<<< HEAD
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
=======


int	main(void) {
	int	i;

	i = int_length(123);
	printf("%d\n",i);
>>>>>>> 0c66ed47b22f1693cf653cf559ff085f0000046a
}