#include "tests.h"
#include <assert.h>
#include <string.h>

void test_ft_split()
{
    // Test case 1: Splitting an empty string
    char **result1 = ft_split("", ' ');
    assert(result1[0] == NULL);
    free(result1);

    // Test case 2: Splitting a string with no delimiters
    char **result2 = ft_split("Hello", ' ');
    assert(strcmp(result2[0], "Hello") == 0);
    assert(result2[1] == NULL);
    free(result2);

    // Test case 3: Splitting a string with a single delimiter
    char **result3 = ft_split("Hello World", ' ');
    assert(strcmp(result3[0], "Hello") == 0);
    assert(strcmp(result3[1], "World") == 0);
    assert(result3[2] == NULL);
    free(result3);

    // Test case 4: Splitting a string with multiple delimiters
    char **result4 = ft_split("Hello,World,How,Are,You", ',');
    assert(strcmp(result4[0], "Hello") == 0);
    assert(strcmp(result4[1], "World") == 0);
    assert(strcmp(result4[2], "How") == 0);
    assert(strcmp(result4[3], "Are") == 0);
    assert(strcmp(result4[4], "You") == 0);
    assert(result4[5] == NULL);
    free(result4);

    printf("ft_split passed successfully!\n");
}
