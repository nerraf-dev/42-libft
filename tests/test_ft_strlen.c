#include "tests.h"
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

    // Test case 4: String with leading and trailing spaces
    const char *str4 = "  Spaces  ";
    assert(ft_strlen(str4) == 10 && "Test case 4 failed");

    // Test case 5: String with special characters
    const char *str5 = "!@#$%^&*()";
    assert(ft_strlen(str5) == 10 && "Test case 5 failed");

    // Test case 6: String with newline characters
    const char *str6 = "a\nb\nc";
    assert(ft_strlen(str6) == 5 && "Test case 6 failed");

    printf("ft_strlen cases passed!\n");
}