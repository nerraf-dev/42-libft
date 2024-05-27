/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:10:20 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/27 13:44:41 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>

/**
 * Applies the function `f` to each character of the string `s`,
 * passing its index as the first argument.
 *
 * @param s The string to iterate over.
 * @param f The function to apply to each character.
 */
//TODO: ft_striteri(char *s, void (*f)(unsigned int, char*))
/*
Parameters
	s:  The string on which to iterate.
	f:  The function to apply to each character.
Description
	Applies the function ’f’ on each character of
	the string passed as argument, passing its index
	as first argument.  Each character is passed by
	address to ’f’ to be modified if necessary.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	// size_t	len;
	unsigned int	i;

	// len = ft_strlen(s);
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

void test_func(unsigned int i, char* c)
{
    *c += i;
}

int main()
{
    char test_string[] = "abc";
    char original_string[] = "abc";
    char expected_string[] = { 'a', 'c', 'e', '\0' };  // 'a' + 0, 'b' + 1, 'c' + 2

    ft_striteri(test_string, test_func);

    assert(strcmp(test_string, original_string) != 0);
    assert(strcmp(test_string, expected_string) == 0);

    printf("All tests passed.\n");

    return 0;
}
