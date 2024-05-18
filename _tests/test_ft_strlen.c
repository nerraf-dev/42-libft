#include "tests.h"
#include <assert.h>

void test_ft_strlen()
{
    // Test case 1: Empty string
    const char *str1 = "";
    assert(ft_strlen(str1) == 0 && "Test case 1 failed");

    // Test case 2: String with one character
    const char *str2 = "a";
    assert(ft_strlen(str2) == 1 && "Test case 2 failed");

    // Test case 3: String with multiple characters
    const char *str3 = "Hello, world!";
    assert(ft_strlen(str3) == 13 && "Test case 3 failed");

    // Add more test cases here...

    printf("All test cases passed!\n");
}