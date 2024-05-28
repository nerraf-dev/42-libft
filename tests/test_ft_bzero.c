#include <assert.h>
#include <string.h>
#include "tests.h"

void test_ft_bzero()
{
    char str[10] = "Hello";
    
    // Test case 1: Check if ft_bzero sets the memory to zero
    ft_bzero(str, sizeof(str));
    for (size_t i = 0; i < sizeof(str); i++)
    {
        assert(str[i] == '\0' && "Test case 1 failed: ft_bzero did not set the memory to zero");
    }
    
    // Test case 2: Check if ft_bzero handles empty string correctly
    strcpy(str, "Hello"); // Reset the string
    ft_bzero(str, 0);
    assert(strcmp(str, "Hello") == 0 && "Test case 2 failed: ft_bzero modified the string when n is 0");
    
    // Test case 3: Check if ft_bzero handles large n correctly
    char large_str[1000] = "Large String";
    ft_bzero(large_str, sizeof(large_str));
    for (unsigned long i = 0; i < sizeof(large_str); i++)
    {
        assert(large_str[i] == 0 && "Test case 3 failed: ft_bzero did not set the memory to zero for large n");
    }

    // Test case 4: Check if ft_bzero handles non-empty string and size less than string length correctly
    char str4[10] = "Hello";
    ft_bzero(str4, 3);
    if (strcmp(str4, "\0\0\0lo") != 0) {
        printf("Error: str4 should be '\\0\\0\\0lo', but it is '%s'\n", str4);
    }

    // Test case 5: Check if ft_bzero handles non-empty string and size greater than string length correctly
    char str5[10] = "Hello";
    ft_bzero(str5, 15);
    for (size_t i = 0; i < sizeof(str5); i++)
    {
        if (str5[i] != '\0') {
            printf("Error: str5[%lu] should be '\\0', but it is '%c'\n", i, str5[i]);
        }
    }

    // Test case 6: Check if ft_bzero handles non-string memory block correctly
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ft_bzero(arr, sizeof(arr));
    for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] != 0) {
            printf("Error: arr[%lu] should be 0, but it is %d\n", i, arr[i]);
        }
    }

    printf("ft_bzero tests completed!\n");
}