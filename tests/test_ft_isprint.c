#include "tests.h"
#include <assert.h>

void test_ft_isprint(void)
{
    // Test printable characters
    assert(ft_isprint('A') == 1);
    assert(ft_isprint('z') == 1);
    assert(ft_isprint('0') == 1);
    assert(ft_isprint('9') == 1);
    assert(ft_isprint(' ') == 1);
    assert(ft_isprint('~') == 1);

    // Test non-printable characters
    assert(ft_isprint('\t') == 0);
    assert(ft_isprint('\n') == 0);
    assert(ft_isprint('\r') == 0);
    assert(ft_isprint('\v') == 0);
    assert(ft_isprint('\f') == 0);
    assert(ft_isprint('\b') == 0);
    assert(ft_isprint('\0') == 0);
    assert(ft_isprint(127) == 0);

    // Add more test cases here...

    printf("ft_isprint passed successfully!\n");
}