#include "tests.h"
#include <assert.h>
#include <string.h>

void test_ft_strtrim()
{
	// Test case 1: Trimming an empty string with an empty set
	char *result1 = ft_strtrim("", "");
	assert(strcmp(result1, "") == 0);
	free(result1);

	// Test case 2: Trimming a non-empty string with an empty set
	char *result2 = ft_strtrim("Hello", "");
	assert(strcmp(result2, "Hello") == 0);
	free(result2);

	// Test case 3: Trimming an empty string with a non-empty set
	char *result3 = ft_strtrim("", "abc");
	assert(strcmp(result3, "") == 0);
	free(result3);

	// Test case 4: Trimming a non-empty string with a non-empty set, where the set characters are at the beginning and end of the string
	char *result4 = ft_strtrim("abcHelloabc", "abc");
	assert(strcmp(result4, "Hello") == 0);
	free(result4);

	// Test case 5: Trimming a non-empty string with a non-empty set, where the set characters are not in the string
	char *result5 = ft_strtrim("Hello", "abc");
	assert(strcmp(result5, "Hello") == 0);
	free(result5);

	// Test case 6: Trimming a non-empty string with a non-empty set, where the set characters are in the middle of the string
	char *result6 = ft_strtrim("Hello", "e");
	assert(strcmp(result6, "Hello") == 0);
	free(result6);

	printf("ft_strtrim passed successfully!\n");
}
