#include "../libft/libft.h"

// Tests return 0 on success, 1 on failure
int test_ft_strncmp() {
    const char *s1 = "Hello, World!";
    const char *s2 = "Hello, World!";
    const char *s3 = "Hello, Mars!";
    const char *s4 = "Hello World!!";

    // Test with equal strings
    if (ft_strncmp(s1, s2, 13) != 0) {
        return 1;
    }

    // Test with different strings
    if (ft_strncmp(s1, s3, 13) >= 0) {
        return 1;
    }

    // Test with n less than the length of the strings
    if (ft_strncmp(s1, s2, 5) != 0) {
        return 1;
    }

    // Test with n greater than the length of the strings
    if (ft_strncmp(s1, s4, 15) <= 0) {
        return 1;
    }

    // Test with one string shorter than the other
    if (ft_strncmp(s1, s4, 13) >= 0) {
        return 1;
    }

    return 0;
}