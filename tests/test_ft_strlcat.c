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

    // TODO: Fix Dest < Src test!
    // Test case 2: Concatenate src to dest with smaller size
    // size_t smaller_size = 10;
    // ft_strlcat(dest, src, smaller_size);
    // assert(strcmp(dest, "Hello Wor") == 0 && "Test case 2 failed");

    // TODO: FIX empty src
    // Test case 3: Concatenate empty src to dest
    // const char *empty_src = "";
    // ft_strlcat(dest, empty_src, size);
    // assert(strcmp(dest, "Hello Wor") == 0 && "Test case 3 failed");

    // Test case 4: Concatenate src to dest with exact size
    // char dest2[12] = "Hello";
    // ft_strlcat(dest2, src, 12);
    // assert(strcmp(dest2, "Hello World!") == 0 && "Test case 4 failed");

    // Test case 5: Concatenate src to dest with larger size
    char dest3[20] = "Hello";
    ft_strlcat(dest3, src, sizeof(dest3));
    assert(strcmp(dest3, "Hello World!") == 0 && "Test case 5 failed");

    // Test case 6: Concatenate src to empty dest
    char empty_dest[10] = "";
    ft_strlcat(empty_dest, src, sizeof(empty_dest));
    assert(strcmp(empty_dest, " World!") == 0 && "Test case 6 failed");

    printf("ft_strlcat tests completed!\n");
}