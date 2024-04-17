#include <stdio.h>
#include "libft.h"  // Assuming ft_isalpha is declared in libft.h

void test_ft(int (*ft_func)(int), const char* func_name, int c, int expected) {
    int result = ft_func(c);
    if (result == expected) {
        printf("PASS: %s('%c') = %d\n", func_name, c, result);
    } else {
        printf("FAIL: %s('%c') = %d, expected %d\n", func_name, c, result, expected);
    }
}

int main() {
    // Test with some alphabetic characters
    test_ft(ft_isalpha, "ft_isalpha", 'a', 'a');
    test_ft(ft_isalpha, "ft_isalpha", 'z', 'z');
    test_ft(ft_isalpha, "ft_isalpha", 'A', 'A');
    test_ft(ft_isalpha, "ft_isalpha", 'Z', 'Z');
    // Test with some non-alphabetic characters
    test_ft(ft_isalpha, "ft_isalpha", '0', 0);
    test_ft(ft_isalpha, "ft_isalpha", '@', 0);
    test_ft(ft_isalpha, "ft_isalpha", '[', 0);
    test_ft(ft_isalpha, "ft_isalpha", '`', 0);
    test_ft(ft_isalpha, "ft_isalpha", '{', 0);
    // Test with some digit characters
    test_ft(ft_isdigit, "ft_isdigit", '0', '0');
    test_ft(ft_isdigit, "ft_isdigit", '9', '9');
    // Test with some non-digit characters
    test_ft(ft_isdigit, "ft_isdigit", 'a', 0);
    test_ft(ft_isdigit, "ft_isdigit", '@', 0);
    test_ft(ft_isdigit, "ft_isdigit", '[', 0);
    test_ft(ft_isdigit, "ft_isdigit", '`', 0);
    test_ft(ft_isdigit, "ft_isdigit", '{', 0);
    
    // Test with some alphanumeric characters
    test_ft(ft_isalnum, "ft_isalnum", 'a', 'a');
    test_ft(ft_isalnum, "ft_isalnum", 'z', 'z');
    test_ft(ft_isalnum, "ft_isalnum", 'A', 'A');
    test_ft(ft_isalnum, "ft_isalnum", 'Z', 'Z');
    test_ft(ft_isalnum, "ft_isalnum", '0', '0');
    test_ft(ft_isalnum, "ft_isalnum", '9', '9');
    // Test with some non-alphanumeric characters
    test_ft(ft_isalnum, "ft_isalnum", '@', 0);
    test_ft(ft_isalnum, "ft_isalnum", '[', 0);
    test_ft(ft_isalnum, "ft_isalnum", '`', 0);
    test_ft(ft_isalnum, "ft_isalnum", '{', 0);
    
    return 0;
}

