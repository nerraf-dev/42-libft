#include "tests.h"
#include <assert.h>

void test_ft_isascii(void)
{
    // Test case 8: Testing with a value in the middle of the ASCII range
    assert(ft_isascii(64) == 1);

    // Test case 9: Testing with a value just below the middle of the ASCII range
    assert(ft_isascii(63) == 1);

    // Test case 10: Testing with a value just above the middle of the ASCII range
    assert(ft_isascii(65) == 1);

    // Test case 11: Testing with a value below the ASCII range
    assert(ft_isascii(-100) == 0);

    // Test case 12: Testing with a value above the ASCII range
    assert(ft_isascii(200) == 0);

    printf("ft_isascii cases passed!\n");
}