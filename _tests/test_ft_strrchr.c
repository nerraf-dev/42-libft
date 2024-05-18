#include "tests.h"
#include <assert.h>

void test_ft_strrchr()
{
    const char *str = "Hello, World!";
    int ch = 'o';
    char *result = ft_strrchr(str, ch);
    assert(result != NULL && *result == 'o');
    printf("Test 1 passed\n");

    ch = 'z';
    result = ft_strrchr(str, ch);
    assert(result == NULL);
    printf("Test 2 passed\n");

    str = "";
    ch = '\0';
    result = ft_strrchr(str, ch);
    assert(result != NULL && *result == '\0');
    printf("Test 3 passed\n");
}
