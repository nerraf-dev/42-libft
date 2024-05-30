#include "tests.h"
#include <assert.h>
#include <ctype.h>

void test_ft_isdigit(void)
{
    // Test cases for digits
    assert(isdigit('0') == ft_isdigit('0'));
    assert(isdigit('1') == ft_isdigit('1'));
    assert(isdigit('2') == ft_isdigit('2'));
    assert(isdigit('3') == ft_isdigit('3'));
    assert(isdigit('4') == ft_isdigit('4'));
    assert(isdigit('5') == ft_isdigit('5'));
    assert(isdigit('6') == ft_isdigit('6'));
    assert(isdigit('7') == ft_isdigit('7'));
    assert(isdigit('8') == ft_isdigit('8'));
    assert(isdigit('9') == ft_isdigit('9'));

    // Test cases for non-digits
    assert(isdigit('a') == ft_isdigit('a'));
    assert(isdigit('A') == ft_isdigit('A'));
    assert(isdigit(' ') == ft_isdigit(' '));
    assert(isdigit('\n') == ft_isdigit('\n'));
    assert(isdigit('$') == ft_isdigit('$'));



    printf("All tests passed successfully!\n");
}
