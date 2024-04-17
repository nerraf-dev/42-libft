#include <stdio.h>
#include <string.h>
#include "../libft.h"

int test_ft_strrchr() {
    const char *str = "Hello, World!";
    int ch = 'o';

    // Call your function
    char *result = ft_strrchr(str, ch);
    // Compare the result with the expected output
    if (result != NULL) {
        printf("Character '%c' found at index %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found\n", ch);
    }
    // Compare with the expected output using the standard library function
    char *expected = strrchr(str, ch);
    if (result == expected) {
        return 0;
    } else {
        return 1;
    }
    // Test with the first character
    ch = 'H';
    result = ft_strrchr(str, ch);
    expected = strrchr(str, ch);
    if (result != expected) {
        printf("Test with the first character failed\n");
        return 1;
    }

    // Test with the last character
    ch = '!';
    result = ft_strrchr(str, ch);
    expected = strrchr(str, ch);
    if (result != expected) {
        printf("Test with the last character failed\n");
        return 1;
    }

    // Test with a character not in the string
    ch = 'z';
    result = ft_strrchr(str, ch);
    expected = strrchr(str, ch);
    if (result != expected) {
        printf("Test with a character not in the string failed\n");
        return 1;
    }

    // Test with an empty string
    str = "";
    ch = 'o';
    result = ft_strrchr(str, ch);
    expected = strrchr(str, ch);
    if (result != expected) {
        printf("Test with an empty string failed\n");
        return 1;
    }

    // Test with a NULL string
    str = NULL;
    result = ft_strrchr(str, ch);
    expected = strrchr(str, ch);
    if (result != expected) {
        printf("Test with a NULL string failed\n");
        return 1;
    }

    return 0;
}
