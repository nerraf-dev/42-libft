#include <stdio.h>
#include <string.h>
#include "../libft.h"

// Tests return 0 on success, 1 on failure
int test_ft_memchr() {
    char str[] = "Hello, World!";
    char ch = 'o';
    size_t n = strlen(str);

    // Test case 1: Search for 'o' in the string
    if (ft_memchr(str, ch, n) != memchr(str, ch, n)) {
        printf("Test case 1 failed\n");
        return 1;
    }

    // Test case 2: Search for 'z' in the string
    ch = 'z';
    if (ft_memchr(str, ch, n) != memchr(str, ch, n)) {
        printf("Test case 2 failed\n");
        return 1;
    }

    // Test case 3: Search for '\0' in the string
    ch = '\0';
    if (ft_memchr(str, ch, n) != memchr(str, ch, n)) {
        printf("Test case 3 failed\n");
        return 1;
    }

    printf("All test cases passed\n");
    return 0;
}