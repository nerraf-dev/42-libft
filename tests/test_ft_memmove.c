#include "tests.h"
#include <assert.h>

void test_ft_memmove()
{
    char src[] = "Hello, World!";
    char dest[20];

    // Test case 1: Copying from src to dest
    ft_memmove(dest, src, 13);
    assert(strcmp(dest, "Hello, World!") == 0);

    // Test case 2: Copying from dest to src
    ft_memmove(src, dest, 13);
    assert(strcmp(src, "Hello, World!") == 0);

    // Test case 3: Copying overlapping memory regions
    ft_memmove(src + 7, src, 7);
    assert(strcmp(src, "Hello,Hello,") == 0);

    // Add more test cases here...

    printf("All tests passed successfully!\n");
}