/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:09:08 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/27 13:52:36 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
Parameters
	s:  The string on which to iterate.
	f:  The function to apply to each character.
Return value
	The string created from the successive applications
	of ’f’.
	Returns NULL if the allocation fails.
Description
	Applies the function ’f’ to each character of the
	string ’s’, and passing its index as first argument
	to create a new string (with malloc(3)) resulting
	from successive applications of ’f’
*/
char	sentence_case(unsigned int i, char c);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	// Get length of string 's'
	// Allocate array of string length (plus null char)
	//  return null if allocation fails
	// Iterate over s
	//   call function on each character
	//    write return value to array
	//return result
	size_t	len;
	size_t	i;
	char	*str;

	len = ft_strlen(s);
	str = malloc(len + 1);
	i = 0;
	if (!str)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char	*s;

	s = ft_strmapi("hello, world!", sentence_case);
	printf("result: %s\n", s);
	s = ft_strmapi("HELLO, WORLD!", sentence_case);
	printf("result: %s\n", s);
	s = ft_strmapi("heLLo, WoRld!", sentence_case);
	printf("result: %s\n", s);
}

char	sentence_case(unsigned int i, char c)
{
	if (i == 0)
	{
		if (c >= 97 && c <= 122)
			c -= 32;
	}
	if (i > 0)
	{
		if (c >= 65 && c <= 90)
			c += 32;
	}
	return (c);
}
