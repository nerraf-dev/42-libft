#include "tests.h"
#include <assert.h>

void test_ft_toupper(void)
{
    // Test lowercase letters
    assert(ft_toupper('a') == 'A');
    assert(ft_toupper('b') == 'B');
    assert(ft_toupper('z') == 'Z');

    // Test uppercase letters
    assert(ft_toupper('A') == 'A');
    assert(ft_toupper('B') == 'B');
    assert(ft_toupper('Z') == 'Z');

    // Test non-alphabetic characters
    assert(ft_toupper('1') == '1');
    assert(ft_toupper('$') == '$');
    assert(ft_toupper('\n') == '\n');



    printf("ft_toupper passed successfully!\n");
}