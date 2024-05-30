#include "tests.h"
#include <assert.h>

void test_ft_strdup()
{
    char    *str;
    char    *result;

    // Test case 1: Empty string
    str = "";
    result = ft_strdup(str);
    assert(strcmp(result, str) == 0);
    // printf("Test case 1 passed: ft_strdup(\"%s\")\n", str);

    // Test case 2: String with special characters
    str = "Hello\tworld\n";
    result = ft_strdup(str);
    assert(strcmp(result, str) == 0);
    // printf("Test case 2 passed: ft_strdup(\"%s\")\n", str);

    // Test case 3: String with leading and trailing spaces
    str = "   Spaces   ";
    result = ft_strdup(str);
    assert(strcmp(result, str) == 0);
    // printf("Test case 3 passed: ft_strdup(\"%s\")\n", str);

    // Test case 4: String with numbers
    str = "12345";
    result = ft_strdup(str);
    assert(strcmp(result, str) == 0);
    // printf("Test case 4 passed: ft_strdup(\"%s\")\n", str);

    // Test case 5: String with special characters and numbers
    str = "!@#$%^&*()12345";
    result = ft_strdup(str);
    assert(strcmp(result, str) == 0);
    // printf("Test case 5 passed: ft_strdup(\"%s\")\n", str);

    printf("All test cases passed successfully!\n");
}
