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

    // Test case 4: Copying from a larger source to a smaller destination
    char src2[] = "This is a longer string";
    char dest2[10];
    ft_memcpy(dest2, src2, sizeof(dest2));
    assert(strncmp(dest2, src2, sizeof(dest2)) == 0 && "Test case 4 failed: Copying from a larger source to a smaller destination");

    // Test case 5: Copying from a smaller source to a larger destination
    char src3[] = "Short";
    char dest3[10];
    ft_memcpy(dest3, src3, sizeof(src3));
    assert(strncmp(dest3, src3, sizeof(src3)) == 0 && "Test case 5 failed: Copying from a smaller source to a larger destination");

    // Test case 6: Copying a null-terminated string
    char src4[] = "Hello, World!";
    char dest4[20];
    ft_memcpy(dest4, src4, strlen(src4) + 1);
    assert(strcmp(dest4, src4) == 0 && "Test case 6 failed: Copying a null-terminated string");

    printf("ft_memcpy passed!\n");
}