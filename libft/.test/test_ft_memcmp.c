#include "../libft.h"
#include <stdio.h>

// Tests return 0 on success, 1 on failure
int test_ft_memcmp() {
    // Test case 1: Comparing equal memory areas
    char str1[] = "Hello";
    char str2[] = "Hello";
    int result = ft_memcmp(str1, str2, sizeof(str1));
    if (result != 0) {
        printf("Test case 1 failed\n");
        return 1;
    }

    // Test case 2: Comparing different memory areas
    char str3[] = "Hello";
    char str4[] = "World";
    result = ft_memcmp(str3, str4, sizeof(str3));
    if (result >= 0) {
        printf("Test case 2 failed\n");
        return 1;
    }

    // Test case 3: Comparing partial memory areas
    char str5[] = "Hello";
    char str6[] = "Hell";
    result = ft_memcmp(str5, str6, 4);
    if (result != 0) {
        printf("Test case 3 failed\n");
        return 1;
    }

    // All test cases passed
    return 0;
}