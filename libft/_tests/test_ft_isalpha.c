#include <assert.h>
#include "tests.h"

void test_ft_isalpha(void)
{
    // Test case 1: Lowercase letter
    assert(ft_isalpha('a') == 1);
    // Test case 2: Uppercase letter
    assert(ft_isalpha('Z') == 1);
    // Test case 3: Non-alphabetic character
    assert(ft_isalpha('1') == 0);
    // Test case 4: Null character
    assert(ft_isalpha('\0') == 0);

    // Add more test cases here...

    printf("All tests passed successfully!\n");
}