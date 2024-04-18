#include "tests.h"
#include <assert.h>

void test_ft_strlcpy()
{
    char src[] = "Hello, world!";
    char dst[20];
    size_t result = ft_strlcpy(dst, src, sizeof(dst));

    // Test case 1: Check if the destination string is correctly copied
    assert(strcmp(dst, src) == 0);
    printf("Test case 1 passed: Destination string is correctly copied.\n");

    // Test case 2: Check if the return value is correct
    assert(result == strlen(src));
    printf("Test case 2 passed: Return value is correct.\n");
}
