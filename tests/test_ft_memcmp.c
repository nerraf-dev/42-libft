#include "tests.h"
#include <assert.h>

void test_ft_memcmp()
{
    // Test case 1: Comparing two empty strings
    const char *str1 = "";
    const char *str2 = "";
    int result = ft_memcmp(str1, str2, 0);
    assert(result == 0 && "Test case 1 failed: Expected 0");

    // Test case 2: Comparing two equal strings
    const char *str3 = "Hello";
    const char *str4 = "Hello";
    result = ft_memcmp(str3, str4, 5);
    assert(result == 0 && "Test case 2 failed: Expected 0");

    // Test case 3: Comparing two different strings
    const char *str5 = "Hello";
    const char *str6 = "World";
    result = ft_memcmp(str5, str6, 5);
    assert(result != 0 && "Test case 3 failed: Expected non-zero");

    

    printf("ft_memcmp passed!\n");
}