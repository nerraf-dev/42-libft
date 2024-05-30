#include <assert.h>
#include <ctype.h>
#include "tests.h"

void test_ft_isalnum(void)
{
    // Test case 1: Lowercase letter
    assert(ft_isalnum('a') == isalnum('a'));
    // Test case 2: Uppercase letter
    assert(ft_isalnum('Z') == isalnum('Z'));
    // Test case 3: Digit
    assert(ft_isalnum('9') == isalnum('9'));
    // Test case 4: Special character
    assert(ft_isalnum('$') == isalnum('$'));
    // Test case 5: Space character
    assert(ft_isalnum(' ') == isalnum(' '));
    // Test case 6: Lowercase letter after 'z'
    assert(ft_isalnum('z' + 1) == isalnum('z' + 1));
    // Test case 7: Uppercase letter before 'A'
    assert(ft_isalnum('A' - 1) == isalnum('A' - 1));
    // Test case 8: Digit before '0'
    assert(ft_isalnum('0' - 1) == isalnum('0' - 1));
    // Test case 9: Lowercase letter before 'a'
    assert(ft_isalnum('a' - 1) == isalnum('a' - 1));
    // Test case 10: Uppercase letter after 'Z'
    assert(ft_isalnum('Z' + 1) == isalnum('Z' + 1));
    // Test case 11: Digit after '9'
    assert(ft_isalnum('9' + 1) == isalnum('9' + 1));

    printf("ft_isalnum  passed successfully!\n");
}
