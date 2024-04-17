#include "../libft.h"
#include "test_runner.h"
#include <stdio.h>
#include <string.h>

int test_ft_strlcpy() {
    char dst[10];
    const char *src = "Hello";
    size_t dstsize = sizeof(dst);

    size_t result = ft_strlcpy(dst, src, dstsize);

    if (result != 5) {
        printf("FAIL: ft_strlcpy returns incorrect length\n");
        return 1;
    }

    if (strcmp(dst, "Hello") != 0) {
        printf("FAIL: ft_strlcpy does not copy the string correctly\n");
        return 1;
    }

    return 0;
}

// Add more test cases here
