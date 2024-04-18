#include "tests.h"
#include <assert.h>

void test_ft_strchr()
{
    const char *str = "Hello, World!";
    int c = 'o';
    char *result = ft_strchr(str, c);
    assert(result != NULL && *result == 'o');
    printf("Test 1 passed\n");

    c = 'z';
    result = ft_strchr(str, c);
    assert(result == NULL);
    printf("Test 2 passed\n");

    str = "";
    c = '\0';
    result = ft_strchr(str, c);
    assert(result != NULL && *result == '\0');
    printf("Test 3 passed\n");
}
