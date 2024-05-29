#include "tests.h"
#include <assert.h>

void test_ft_tolower(void)
{
    // Test lowercase characters
    assert(ft_tolower('a') == 'a');
    assert(ft_tolower('z') == 'z');

    // Test uppercase characters
    assert(ft_tolower('A') == 'a');
    assert(ft_tolower('Z') == 'z');

    // Test non-alphabetic characters
    assert(ft_tolower('1') == '1');
    assert(ft_tolower('$') == '$');

    printf("ft_tolower passed successfully!\n");
}
