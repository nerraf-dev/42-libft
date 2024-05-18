#include "tests.h"
#include <assert.h>

void test_ft_strlcat()
{
    char dest[20] = "Hello";
    const char *src = " World!";
    size_t size = sizeof(dest);

    // Test case 1: Concatenate src to dest
    ft_strlcat(dest, src, size);
    assert(strcmp(dest, "Hello World!") == 0 && "Test case 1 failed");

    // Test case 2: Concatenate src to dest with smaller size
    size_t smaller_size = 10;
    ft_strlcat(dest, src, smaller_size);
    assert(strcmp(dest, "Hello Wor") == 0 && "Test case 2 failed");

    // Test case 3: Concatenate empty src to dest
    const char *empty_src = "";
    ft_strlcat(dest, empty_src, size);
    assert(strcmp(dest, "Hello Wor") == 0 && "Test case 3 failed");

    // Add more test cases here...
}