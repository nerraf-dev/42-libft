/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:07:03 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/06 13:44:00 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
	/*
	take a string: "apple,pear,banana"
	pick the split char (c): ","
	Get start (s) = 0
	move through string looking for c.
			- s = 0, counts through apple.
			- c is in index 5
			- len is 5
			s = index +1 (5 is the comma, move to next.)
			c is at index 10
			len is 10 - 6 = 4+1
	*/
//TODO: ft_split
// char	**ft_split(char const *s, char c)
// {
// 	char    *word_string;
// 	size_t  count;

// 	word_string = "apple,pear,banana";
// 	count = 0;

// }



int main(void)
{
	char    *word_string;
	char    c;
	int		i;
	int		start;

	word_string = "apple,pear,banana\0";
	c = ',';
	i = 0;
	start = 0;


	while (word_string[i] != '\0')
	{
		
		printf("%d", i);
		//set next start to i+1
		start = i + 1;
		i++;
	}


	//need to allocate memory (malloc/calloc) - need number of elements and the size (chars = 1b)
	
}