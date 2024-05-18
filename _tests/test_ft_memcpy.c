#include "tests.h"
#include <assert.h>

void test_ft_memcpy()
{
    char src[] = "Hello, World!";
    char dest[20];

    // Test case 1: Copying a string
    ft_memcpy(dest, src, sizeof(src));
    assert(strcmp(dest, src) == 0 && "Test case 1 failed: Copying a string");

    // Test case 2: Copying a portion of a string
    ft_memcpy(dest, src, 5);
    assert(strncmp(dest, src, 5) == 0 && "Test case 2 failed: Copying a portion of a string");

    // Test case 3: Copying an empty string
    ft_memcpy(dest, "", 1);
    assert(dest[0] == '\0' && "Test case 3 failed: Copying an empty string");

    // Add more test cases here...

    printf("All test cases passed for ft_memcpy!\n");
}