#include "tests.h"
#include <assert.h>

void test_ft_isdigit(void)
{
    // Test cases for digits
    assert(ft_isdigit('0') == 1);
    assert(ft_isdigit('1') == 1);
    assert(ft_isdigit('2') == 1);
    assert(ft_isdigit('3') == 1);
    assert(ft_isdigit('4') == 1);
    assert(ft_isdigit('5') == 1);
    assert(ft_isdigit('6') == 1);
    assert(ft_isdigit('7') == 1);
    assert(ft_isdigit('8') == 1);
    assert(ft_isdigit('9') == 1);

    // Test cases for non-digits
    assert(ft_isdigit('a') == 0);
    assert(ft_isdigit('A') == 0);
    assert(ft_isdigit(' ') == 0);
    assert(ft_isdigit('\n') == 0);
    assert(ft_isdigit('$') == 0);



    printf("All tests passed successfully!\n");
}