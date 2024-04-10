#include <stdio.h>
#include "libft.h"  // Assuming ft_isalpha is declared in libft.h

void test_ft_isalpha(int c, int expected) {
    int result = ft_isalpha(c);
    if (result == expected) {
        printf("PASS: ft_isalpha('%c') = %d\n", c, result);
    } else {
        printf("FAIL: ft_isalpha('%c') = %d, expected %d\n", c, result, expected);
    }
}

void test_ft_isdigit(int c, int expected) {
    int result = ft_isdigit(c);
    if (result == expected) {
        printf("PASS: ft_isdigit('%c') = %d\n", c, result);
    } else {
        printf("FAIL: ft_isdigit('%c') = %d, expected %d\n", c, result, expected);
    }
}

void test_ft_isalnum(int c, int expected) {
    int result = ft_isalnum(c);
    if (result == expected) {
        printf("PASS: ft_isalnum('%c') = %d\n", c, result);
    } else {
        printf("FAIL: ft_isalnum('%c') = %d, expected %d\n", c, result, expected);
    }
}

int main() {
    // Test with some alphabetic characters
    test_ft_isalpha('a', 'a');
    test_ft_isalpha('z', 'z');
    test_ft_isalpha('A', 'A');
    test_ft_isalpha('Z', 'Z');

    // Test with some non-alphabetic characters
    test_ft_isalpha('0', 0);
    test_ft_isalpha('@', 0);
    test_ft_isalpha('[', 0);
    test_ft_isalpha('`', 0);
    test_ft_isalpha('{', 0);

    // Test with some digit characters
    test_ft_isdigit('0', '0');
    test_ft_isdigit('9', '9');

    // Test with some non-digit characters
    test_ft_isdigit('a', 0);
    test_ft_isdigit('@', 0);
    test_ft_isdigit('[', 0);
    test_ft_isdigit('`', 0);
    test_ft_isdigit('{', 0);
    
    // Test with some alphanumeric characters
    test_ft_isalnum('a', 'a');
    test_ft_isalnum('z', 'z');
    test_ft_isalnum('A', 'A');
    test_ft_isalnum('Z', 'Z');
    test_ft_isalnum('0', '0');
    test_ft_isalnum('9', '9');

    // Test with some non-alphanumeric characters
    test_ft_isalnum('@', 0);
    test_ft_isalnum('[', 0);
    test_ft_isalnum('`', 0);
    test_ft_isalnum('{', 0);
    
    return 0;
}