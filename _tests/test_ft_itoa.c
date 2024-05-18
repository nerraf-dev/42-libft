#include <assert.h>
#include "tests.h"

void test_ft_itoa()
{
    char	*int_str;

	int_str = ft_itoa(42);
	printf("ft_itoa RESULT: %s\n", int_str);

	int_str = ft_itoa(123);
	printf("ft_itoa RESULT: %s\n", int_str);

	int_str = ft_itoa(0);
	printf("ft_itoa RESULT: %s\n", int_str);

	int_str = ft_itoa(999);
	printf("ft_itoa RESULT: %s\n", int_str);
	
	int_str = ft_itoa(-999);
	printf("ft_itoa RESULT: %s\n", int_str);

	int_str = ft_itoa(-123);
	printf("ft_itoa RESULT: %s\n", int_str);

    // Test case 1: Positive number
    assert(ft_itoa(12345) == "12345");

    // Test case 2: Negative number
    assert(ft_itoa(-9876) == "-9876");
}