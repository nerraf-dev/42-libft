#include <assert.h>
#include "tests.h"

void test_ft_atoi()
{
    // Test case 1: Positive number
    assert(ft_atoi("12345") == 12345);

    // Test case 2: Negative number
    assert(ft_atoi("-9876") == -9876);

    // Test case 3: Number with leading whitespace
    assert(ft_atoi("   42") == 42);

    // Test case 4: Number with trailing whitespace
    assert(ft_atoi("1000   ") == 1000);

    // Test case 5: Number with leading and trailing whitespace
    assert(ft_atoi("   -500   ") == -500);

    // Test case 6: Number with leading plus sign
    assert(ft_atoi("+123") == 123);

    // Test case 7: Number with leading minus sign
    assert(ft_atoi("-789") == -789);

    // Test case 8: Empty string
    assert(ft_atoi("") == 0);

    // Test case 9: String with non-numeric characters
    assert(ft_atoi("abc123") == 0);

    // Test case 10: String with only whitespace
    assert(ft_atoi("   ") == 0);

    // Add more test cases here...

    printf("ft_atoi passed successfully!\n");
}