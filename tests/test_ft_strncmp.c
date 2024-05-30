#include "tests.h"
#include <assert.h>

void test_ft_strncmp()
{
    // Test case 1: Comparing two equal strings
    // Test case 1: Comparing two equal strings
    assert(ft_strncmp("hello", "hello", 5) == strncmp("hello", "hello", 5));

    // Test case 2: Comparing two different strings
    int ft_result = ft_strncmp("hello", "world", 5);
    int std_result = strncmp("hello", "world", 5);

    printf("ft_strncmp: %d, strncmp: %d\n", ft_result, std_result);
    assert(ft_result == std_result);

    // Test case 3: Comparing strings with different lengths
    assert(ft_strncmp("hello", "hello world", 5) == strncmp("hello", "hello world", 5));

    // Test case 4: Comparing strings with different lengths
    assert(ft_strncmp("hello world", "hello", 5) == strncmp("hello world", "hello", 5));

    // Test case 5: Comparing strings with different lengths
    assert(ft_strncmp("hello", "hello world", 10) == strncmp("hello", "hello world", 10));



    printf("ft_strncmp passed successfully!\n");
}
