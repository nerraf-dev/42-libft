/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:09:08 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/24 14:27:36 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
params
 s: The string on which to iterate.
 f: The function to apply to each character.

return:
 The string created from the successive applications
 of ’f’.
 Returns NULL if the allocation fails.

Desc:
 Applies the function f to each character of the
 string s, passing its index as the first argument
 and the character itself as the second. A new
 string is created (using malloc(3)) to collect the
 results from the successive applications of f.
*/
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	// get s len
	// allocate mem (malloc) for new str
	// if malloc fails retun 0
	// iterate over string, applying func 'f'
	// write f return value to new string
	//return new string
}