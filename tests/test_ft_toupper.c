#include "tests.h"
#include <assert.h>
#include <ctype.h>

void test_ft_toupper(void)
{
    // Test lowercase letters
    assert(ft_toupper('a') == toupper('a'));
    assert(ft_toupper('b') == toupper('b'));
    assert(ft_toupper('z') == toupper('z'));

    // Test uppercase letters
    assert(ft_toupper('A') == toupper('A'));
    assert(ft_toupper('B') == toupper('B'));
    assert(ft_toupper('Z') == toupper('Z'));

    // Test non-alphabetic characters
    assert(ft_toupper('1') == toupper('1'));
    assert(ft_toupper('$') == toupper('$'));
    assert(ft_toupper('\n') == toupper('\n'));



    printf("ft_toupper passed successfully!\n");
}
