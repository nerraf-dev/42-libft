#include <assert.h>
#include <ctype.h>
#include "tests.h"

void test_ft_isalpha(void)
{
    // Existing test cases

    assert(isalpha('a') == 1 && ft_isalpha('a') == 1);     // Lowercase letter
    assert(isalpha('Z') == 1 && ft_isalpha('Z') == 1);     // Uppercase letter
    assert(isalpha('1') == 0 && ft_isalpha('1') == 0);     // Non-alphabetic character
    assert(isalpha('\0') == 0 && ft_isalpha('\0') == 0);   // Null character

    // Additional test cases
    assert(isalpha('b') == 1 && ft_isalpha('b') == 1);     // Lowercase letter
    assert(isalpha('C') == 1 && ft_isalpha('C') == 1);     // Uppercase letter
    assert(isalpha('9') == 0 && ft_isalpha('9') == 0);     // Non-alphabetic character
    assert(isalpha(' ') == 0 && ft_isalpha(' ') == 0);     // Space character
    assert(isalpha('\n') == 0 && ft_isalpha('\n') == 0);   // Newline character

    printf("ft_isalpha passed successfully!\n");
}
