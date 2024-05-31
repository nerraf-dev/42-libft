#include "tests.h"
#include <assert.h>
#include <string.h>


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

void test_ft_strmapi(void)
{
	// Test 1: Empty string
	char *result = ft_strmapi("", sentence_case);
	assert(strcmp(result, "") == 0);
	free(result);

	// Test 2: All lowercase letters
	result = ft_strmapi("hello", sentence_case);
	assert(strcmp(result, "Hello") == 0);
	free(result);

	// Test 3: All uppercase letters
	result = ft_strmapi("WORLD", sentence_case);
	assert(strcmp(result, "World") == 0);
	free(result);

	// Test 4: Mixed case letters
	result = ft_strmapi("HeLlO", sentence_case);
	assert(strcmp(result, "Hello") == 0);
	free(result);

	// Test 5: Non-alphabetic characters
	result = ft_strmapi("123!@#", sentence_case);
	assert(strcmp(result, "123!@#") == 0);
	free(result);

	printf("ft_strmapi passed!\n");
}
