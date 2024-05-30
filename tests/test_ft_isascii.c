#include "tests.h"
#include <assert.h>
#include <ctype.h>

void test_ft_isascii(void)
{
    // Test case 8: Testing with a value in the middle of the ASCII range
    assert(ft_isascii(64) == isascii(64));

    // Test case 9: Testing with a value just below the middle of the ASCII range
    assert(ft_isascii(63) == isascii(63));

    // Test case 10: Testing with a value just above the middle of the ASCII range
    assert(ft_isascii(65) == isascii(65));

    // Test case 11: Testing with a value below the ASCII range
    assert(ft_isascii(-100) == isascii(-100));

    // Test case 12: Testing with a value above the ASCII range
    assert(ft_isascii(200) == isascii(200));

    printf("ft_isascii cases passed!\n");
}
