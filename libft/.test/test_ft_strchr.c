#include "../libft.h"

int test_ft_strchr() {
    const char *str = "Hello, World!";
    int ch = 'o';

    char *result = ft_strchr(str, ch);

    if (result == 0) {
        return 1;
    }

    if (result - str != 4) {
        return 1;
    }

    // Additional test
    const char *str2 = "Hello, World!";
    int ch2 = 'z';

    char *result2 = ft_strchr(str2, ch2);

    if (result2 != 0) {
        return 1;
    }

    // Test when the character is at the beginning of the string
    const char *str3 = "Hello, World!";
    int ch3 = 'H';

    char *result3 = ft_strchr(str3, ch3);

    if (result3 == 0 || result3 - str3 != 0) {
        return 1;
    }

    // Test when the character is at the end of the string
    const char *str4 = "Hello, World!";
    int ch4 = '!';

    char *result4 = ft_strchr(str4, ch4);

    if (result4 == 0 || result4 - str4 != 12) {
        return 1;
    }

    // Test when the string is empty
    const char *str5 = "";
    int ch5 = 'a';

    char *result5 = ft_strchr(str5, ch5);

    if (result5 != 0) {
        return 1;
    }

    return 0;
}
