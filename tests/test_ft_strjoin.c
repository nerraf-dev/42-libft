#include "tests.h"
#include <assert.h>
#include <string.h>

void test_ft_strjoin()
{
	// Test case 1: Concatenating two empty strings
	char *result1 = ft_strjoin("", "");
	assert(strcmp(result1, "") == 0);
	free(result1);

	// Test case 2: Concatenating an empty string with a non-empty string
	char *result2 = ft_strjoin("", "Hello");
	assert(strcmp(result2, "Hello") == 0);
	free(result2);

	// Test case 3: Concatenating a non-empty string with an empty string
	char *result3 = ft_strjoin("Hello", "");
	assert(strcmp(result3, "Hello") == 0);
	free(result3);

	// Test case 4: Concatenating two non-empty strings
	char *result4 = ft_strjoin("Hello", " World");
	assert(strcmp(result4, "Hello World") == 0);
	free(result4);

	// Test case 5: Concatenating two long strings
	char *result5 = ft_strjoin("This is a long string", " and this is another long string");
	assert(strcmp(result5, "This is a long string and this is another long string") == 0);
	free(result5);

	printf("ft_strjoin passed successfully!\n");
}
