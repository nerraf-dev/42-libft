#include "tests.h"
#include <assert.h>

void test_ft_memset()
{
    // Test case 1: Filling a block of memory with 'A' for 5 bytes
    char str1[10] = "Hello";
    ft_memset(str1, 'A', 5);
    assert(strcmp(str1, "AAAAA") == 0);

    // Test case 2: Filling a block of memory with 0 for 10 bytes
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ft_memset(arr, 0, sizeof(arr));
    for (int i = 0; i < 10; i++)
    {
        assert(arr[i] == 0);
    }

    // Test case 3: Filling a larger block of memory
    char str2[50] = "Hello, world!";
    ft_memset(str2, 'B', 50);
    for (int i = 0; i < 50; i++)
    {
        if (str2[i] != 'B') {
            printf("Error: str2[%d] should be 'B', but it is '%c'\n", i, str2[i]);
        }
    }

    // Test case 4: Filling a block of memory with different fill values
    char str3[10] = "Hello";
    ft_memset(str3, 'C', 5);
    if (strcmp(str3, "CCCCC") != 0) {
        printf("Error: str3 should be 'CCCCC', but it is '%s'\n", str3);
    }

    // Test case 5: Filling a block of memory that is not initially empty
    char str4[10] = "Hello";
    ft_memset(str4, 'D', strlen(str4));
    if (strcmp(str4, "DDDDD") != 0) {
        printf("Error: str4 should be 'DDDDD', but it is '%s'\n", str4);
    }

    // Test case 6: Filling a block of memory with a non-zero initial value
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        ft_memset(&arr2[i], 1, sizeof(int));
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr2[i] != 16843009) {
            printf("Error: arr2[%d] should be 16843009, but it is %d\n", i, arr2[i]);
        }
    }

    // Test case 7: Filling a block of memory with a size of zero
    char str5[10] = "Hello";
    ft_memset(str5, 'E', 0);
    if (strcmp(str5, "Hello") != 0) {
        printf("Error: str5 should be 'Hello', but it is '%s'\n", str5);
    }

    printf("ft_memset tests completed!\n");

}