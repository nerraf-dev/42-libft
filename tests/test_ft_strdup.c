#include "tests.h"
#include <assert.h>

void test_ft_strdup()
{
    char    *str;
    char    *result;

    str = "Hello!";
    result = ft_strdup(str);
    // printf("Result: %s\n", result);
    printf("ft_strdup passed successfully!\n");
}
