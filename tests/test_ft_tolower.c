#include "tests.h"
#include <assert.h>
#include <ctype.h>

void test_ft_tolower(void)
{
    // Test lowercase characters
    assert(ft_tolower('a') == tolower('a'));
    assert(ft_tolower('z') == tolower('z'));

    // Test uppercase characters
    assert(ft_tolower('A') == tolower('A'));
    assert(ft_tolower('Z') == tolower('Z'));

    // Test non-alphabetic characters
    assert(ft_tolower('1') == tolower('1'));
    assert(ft_tolower('$') == tolower('$'));

    printf("ft_tolower passed successfully!\n");
}
