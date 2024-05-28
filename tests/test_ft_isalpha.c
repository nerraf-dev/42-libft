#include <assert.h>
#include "tests.h"

void test_ft_isalpha(void)
{
    // Existing test cases
    assert(ft_isalpha('a') == 1);     // Lowercase letter
    assert(ft_isalpha('Z') == 1);     // Uppercase letter
    assert(ft_isalpha('1') == 0);     // Non-alphabetic character
    assert(ft_isalpha('\0') == 0);    // Null character

    // Additional test cases
    assert(ft_isalpha('b') == 1);     // Lowercase letter
    assert(ft_isalpha('C') == 1);     // Uppercase letter
    assert(ft_isalpha('9') == 0);     // Non-alphabetic character
    assert(ft_isalpha(' ') == 0);     // Space character
    assert(ft_isalpha('\n') == 0);    // Newline character

    printf("ft_isalpha passed successfully!\n");
}
