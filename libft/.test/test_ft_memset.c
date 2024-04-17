#include <stdio.h>
#include <string.h>
#include "../libft.h"

int test_ft_memset() {
    char test1[10] = "Hello";
    char test2[10] = "Hello";
    char *result = memset(test1, 'a', 5);
    char *actual = ft_memset(test2, 'a', 5);
    
    // Test 1: Check if the memory block is correctly filled with 'a'
    if (memcmp(result, actual, 5) != 0) {
        printf("Test ft_memset with 'a' failed\n");
        printf("Expected: %s\n", result);
        printf("Actual: %s\n", actual);
        return 1;
    }
    
    // Test 2: Check if the function returns the correct pointer to the memory block
    if (result != test1 || actual != test2) {
        printf("Test ft_memset pointer failed\n");
        printf("Expected: %p\n", result);
        printf("Actual: %p\n", actual);
        return 1;
    }
    
    // Test 3: Check if the function correctly handles filling with '\0'
    char test3[10] = "Hello";
    char *result2 = memset(test3, '\0', 5);
    char *actual2 = ft_memset(test3, '\0', 5);
    if (memcmp(result2, actual2, 5) != 0) {
        printf("Test ft_memset with '\\0' failed\n");
        printf("Expected: %s\n", result2);
        printf("Actual: %s\n", actual2);
        return 1;
    }
    
    return 0;
}
