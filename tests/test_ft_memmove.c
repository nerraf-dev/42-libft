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

    // Test case 3: Overlapping source and destination where dest > src
    char src_dest[] = "Hello, World!"; //HellHelloorld!
    ft_memmove(src_dest + 4, src_dest, 5);
    assert(strcmp(src_dest, "HellHellorld!") == 0);

    // Test case 4: Overlapping source and destination where dest < src
    char src_dest2[] = "Hello, World!";
    ft_memmove(src_dest2, src_dest2 + 4, 5);
    assert(strcmp(src_dest2, "o, Wo, World!") == 0);

    // Test case 5: Copying with a size of zero
    char src5[] = "Hello, World!";
    char dest5[20] = "Goodbye, World!";
    ft_memmove(dest5, src5, 0);
    assert(strcmp(dest5, "Goodbye, World!") == 0);

    // Test case 6: Copying with a size larger than source string length
    char src6[] = "Hello, World!";
    char dest6[20];
    ft_memmove(dest6, src6, 15);
    assert(strcmp(dest6, "Hello, World!\0\0\0\0\0") == 0);

    // // Test case 7: Copying with a size larger than destination array length
    // char src7[] = "Hello, World!";
    // char dest7[5];
    // ft_memmove(dest7, src7, 13);
    // printf("Result: %s\n", dest7);  // Print the result
    // assert(strcmp(dest7, "Hello") == 0);

    printf("ft_memmove passed successfully!\n");
}