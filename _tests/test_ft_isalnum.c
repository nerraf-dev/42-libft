#include <assert.h>
#include "tests.h"

void test_ft_isalnum(void)
{
    // Test case 1: Lowercase letter
    assert(ft_isalnum('a') == 1);
    // Test case 2: Uppercase letter
    assert(ft_isalnum('Z') == 1);
    // Test case 3: Digit
    assert(ft_isalnum('9') == 1);
    // Test case 4: Special character
    assert(ft_isalnum('$') == 0);
    // Test case 5: Space character
    assert(ft_isalnum(' ') == 0);

    // Add more test cases here...

    printf("All tests passed successfully!\n");
}