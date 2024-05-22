/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:07:03 by sfarren           #+#    #+#             */
/*   Updated: 2024/05/22 21:39:21 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//TODO: ft_split
/*
Parameters
	s:  The string to be split.
	c:  The delimiter character.
Return value
	The array of new strings resulting from the split.
	NULL if the allocation fails.
Description
	Allocates (with malloc(3)) and returns an array
	of strings obtained by splitting ’s’ using the
	character ’c’ as a delimiter.  The array must end
	with a NULL pointer.
*/
static int	word_count(char const *s, char c);
static char	*store_word(const char *str, int start, int end);
static void	*ft_free(char **words, int count);
static char	**init_words(char const *s, char c);


char	**ft_split(char const *s, char c)
{
	char	**words;
	int		len;
	int		i;
	int		j;
	int		new_word;

	len = ft_strlen(s);
	i = 0;
	j = 0;
	new_word = -1;  // set to -1 as this will hold the index for the new word
	// if (!s || !c || s[i] == c)
	// 	return (0);
	words = init_words(s, c);
	if (!words)
		return (0);
	while (i < len)
	{
		if (s[i] != c && new_word == -1)
			new_word = i;
		else if ((s[i] == c || i == len - 1) && new_word != -1)
		{
			words[j] = store_word(s, new_word, i);
			if (!words[j])
				return (ft_free(words, j)); //need to free memory if word allocation fails. need to use 'free'
			j++;
			new_word = -1;  //flag reset
		}
		i++;
	}
	return (words);
}

static char	**init_words(char const *s, char c)
{
	size_t	count;

	count = word_count(s, c);
	return (ft_calloc(count + 1, sizeof(char *)));
}

static char	*store_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (0);
	while (start < end)
	{
		word[i] = str[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	word_count(char const *s, char c)
{
	int	count;
	int	i;
	int	delim;

	i = 0;
	delim = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && delim == 0)
		{
			count++;
			delim = 1;
		}
		else if (s[i] == c)
			delim = 0;
		i++;
	}
	return (count);
}

static void	*ft_free(char **words, int count)
{
	int	i;

	i = 0;
	while (i< count)
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}

// int main(void)
// {
// 	// int	i;
// 	// i = ft_strlen(" ");
// 	// if (!i)
// 	// 	printf("len: %d\n", i);
// 	ft_split("apple,pear,lime", ',');
// 	// ft_split(",", ',');
// }

int main(void)
{
	char **words;
	int i = 0;

	words = ft_split("lorem ipsum dolor sit amet", ' ');

	while (words[i])
	{
		printf("Word %d: %s\n", i, words[i]);
		i++;
	}

	// Don't forget to free the memory
	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);

	return 0;
}

int test_split()