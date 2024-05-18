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

    // Add more test cases here...
}