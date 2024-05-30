#include <assert.h>
#include "tests.h"

void test_ft_atoi()
{
    // Test case 1: Positive number
    // Test case 1: Positive number
    assert(ft_atoi("12345") == atoi("12345"));

    // Test case 2: Negative number
    assert(ft_atoi("-9876") == atoi("-9876"));

    // Test case 3: Number with leading whitespace
    assert(ft_atoi("   42") == atoi("   42"));

    // Test case 4: Number with trailing whitespace
    assert(ft_atoi("1000   ") == atoi("1000   "));

    // Test case 5: Number with leading and trailing whitespace
    assert(ft_atoi("   -500   ") == atoi("   -500   "));

    // Test case 6: Number with leading plus sign
    assert(ft_atoi("+123") == atoi("+123"));

    // Test case 7: Number with leading minus sign
    assert(ft_atoi("-789") == atoi("-789"));

    // Test case 8: Empty string
    assert(ft_atoi("") == atoi(""));

    // Test case 9: String with non-numeric characters
    assert(ft_atoi("abc123") == atoi("abc123"));

    // Test case 10: String with only whitespace
    assert(ft_atoi("   ") == atoi("   "));


    printf("ft_atoi passed successfully!\n");
}
