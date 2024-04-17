#include "../libft.h"
#include "test_runner.h"
#include <stdio.h>
#include <string.h>

int test_ft_strlcat() {
    char dest[20] = "Hello";
    char src[] = " World!";
    size_t size = sizeof(dest);

     size_t dest_len = strlen(dest);
    size_t src_len = strlen(src);
    size_t result = ft_strlcat(dest, src, size);

    // Check if the result is correct
    if (result != dest_len + src_len) {
        printf("FAIL: ft_strlcat returned %zu, expected %zu\n", result, dest_len + src_len);
        return 1;
    }

    // Check if the destination string is correct
    if (strcmp(dest, "Hello World!") != 0) {
        printf("FAIL: ft_strlcat did not concatenate strings correctly\n");
        return 1;
    }

    // Check if the destination string is null-terminated
    if (dest[size - 1] != '\0') {
        printf("FAIL: ft_strlcat did not null-terminate the destination string\n");
        return 1;
    }

    printf("PASS: ft_strlcat\n");
    return 0;
}

// Add more test cases here if needed
