#include "tests.h"
#include <assert.h>
#include <ctype.h>

void test_ft_isprint(void)
{
    // Test printable characters
    assert(ft_isprint('A') == isprint('A'));
    assert(ft_isprint('z') == isprint('z'));
    assert(ft_isprint('0') == isprint('0'));
    assert(ft_isprint('9') == isprint('9'));
    assert(ft_isprint(' ') == isprint(' '));
    assert(ft_isprint('~') == isprint('~'));

    // Test non-printable characters
    assert(ft_isprint('\t') == isprint('\t'));
    assert(ft_isprint('\n') == isprint('\n'));
    assert(ft_isprint('\r') == isprint('\r'));
    assert(ft_isprint('\v') == isprint('\v'));
    assert(ft_isprint('\f') == isprint('\f'));
    assert(ft_isprint('\b') == isprint('\b'));
    assert(ft_isprint('\0') == isprint('\0'));
    assert(ft_isprint(127) == isprint(127));

    // Add more test cases here...

    printf("ft_isprint passed successfully!\n");
}
