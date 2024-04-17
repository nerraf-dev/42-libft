#include "../libft/libft.h"
#include <stdio.h>

// Tests return 0 on success, 1 on failure
int test_ft_strnstr()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;

    // Test case 1: Search string is present in the larger string
    ptr = ft_strnstr(largestring, smallstring, 12);
    if (ptr != NULL)
    {
        printf("Test case 1 failed\n");
        return 1;
    }

    // Test case 2: Search string is not present in the larger string
    ptr = ft_strnstr(largestring, smallstring, 8);
    if (ptr != NULL)
    {
        printf("Test case 2 failed\n");
        return 1;
    }

    // Test case 3: Search string is an empty string
    ptr = ft_strnstr(largestring, "", 12);
    if (ptr != largestring)
    {
        printf("Test case 3 failed\n");
        return 1;
    }

    // Test case 4: Search string is longer than the larger string
    ptr = ft_strnstr(largestring, "Bar Baz Foo", 12);
    if (ptr != NULL)
    {
        printf("Test case 4 failed\n");
        return 1;
    }

    // All test cases passed
    printf("All test cases passed\n");
    return 0;
}