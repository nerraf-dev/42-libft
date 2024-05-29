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

}