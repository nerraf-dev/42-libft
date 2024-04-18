#include "tests.h"
#include <assert.h>

void test_ft_isascii(void)
{
    // Test case 1: Testing with an ASCII character
    assert(ft_isascii('A') == 1);
    printf("Test case 1 passed\n");

    // Test case 2: Testing with a non-ASCII character
    assert(ft_isascii('a') == 1);
    printf("Test case 2 passed\n");

    // Test case 3: Testing with a negative value
    assert(ft_isascii(-1) == 0);
    printf("Test case 3 passed\n");

    // Test case 4: Testing with the lowest ASCII value
    assert(ft_isascii(0) == 1);
    printf("Test case 4 passed\n");

    // Test case 5: Testing with the highest ASCII value
    assert(ft_isascii(127) == 1);
    printf("Test case 5 passed\n");

    // Test case 6: Testing with a value just below the ASCII range
    assert(ft_isascii(-1) == 0);
    printf("Test case 6 passed\n");

    // Test case 7: Testing with a value just above the ASCII range
    assert(ft_isascii(128) == 0);
    printf("Test case 7 passed\n");

    printf("All test cases passed!\n");
}