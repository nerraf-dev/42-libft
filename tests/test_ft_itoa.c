
#include "tests.h"
#include <assert.h>
#include <limits.h>

void test_ft_itoa()
{
	// Test positive numbers
	assert(strcmp(ft_itoa(42), "42") == 0);
	assert(strcmp(ft_itoa(123), "123") == 0);
	assert(strcmp(ft_itoa(999), "999") == 0);

	// Test negative numbers
	assert(strcmp(ft_itoa(-42), "-42") == 0);
	assert(strcmp(ft_itoa(-123), "-123") == 0);
	assert(strcmp(ft_itoa(-999), "-999") == 0);

	// Test zero
	assert(strcmp(ft_itoa(0), "0") == 0);

	// Test maximum and minimum integer values
	assert(strcmp(ft_itoa(INT_MAX), "2147483647") == 0);
	assert(strcmp(ft_itoa(INT_MIN), "-2147483648") == 0);

	printf("ft_itoa passed successfully!\n");
}
