// FILEPATH: /Users/simon/Library/CloudStorage/GoogleDrive-geeky.teacher.cs@gmail.com/My Drive/Campus42/Projects/libft/test/test_ft_bzero.c

#include "../libft.h"
#include <string.h>

// Tests return 0 on success, 1 on failure
int test_ft_bzero() {
    char s1[10] = "Hello";
    char s2[10] = "Hello";

    ft_bzero(s1, 5);
    bzero(s2, 5);

    // Test if the function sets the first n bytes of the string to 0
    if (memcmp(s1, s2, 5) != 0) {
        return 1;
    }

    // Test with n = 0
    strcpy(s1, "Hello");
    strcpy(s2, "Hello");

    ft_bzero(s1, (0));
    bzero(s2, (0));

    if (memcmp(s1, s2, 5) != 0) {
        return 1;
    }

    return 0;
}