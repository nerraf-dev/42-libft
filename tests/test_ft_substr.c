#include <assert.h>
#include "tests.h"

void test_ft_substr()
{
	// Test 1: Substring within the string
	char *str = "Hello, World!";
	char *expected = "World!";
	char *result = ft_substr(str, 7, 6);
	assert(strcmp(result, expected) == 0);
	free(result);

	// Test 2: Substring starting at the beginning of the string
	str = "Hello, World!";
	expected = "Hello";
	result = ft_substr(str, 0, 5);
	assert(strcmp(result, expected) == 0);
	free(result);

	// Test 3: Substring starting at the end of the string
	str = "Hello, World!";
	expected = "World!";
	result = ft_substr(str, 7, 100);
	assert(strcmp(result, expected) == 0);
	free(result);

	// Test 4: Substring with length 0
	str = "Hello, World!";
	expected = "";
	result = ft_substr(str, 0, 0);
	assert(strcmp(result, expected) == 0);
	free(result);

	// Test 5: Substring with start index greater than string length
	str = "Hello, World!";
	expected = "";
	result = ft_substr(str, 20, 5);
	assert(strcmp(result, expected) == 0);
	free(result);

	printf("ft_substr passed");
}
