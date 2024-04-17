#include <stdio.h>
#include "../libft/libft.h"

int test_ft_atoi() {
    int result = 0;

    // Test case 1: Positive number
    char str1[] = "123";
    if (ft_atoi(str1) != 123) {
        printf("FAIL: ft_atoi(\"%s\") returned %d, expected %d\n", str1, ft_atoi(str1), 123);
        result++;
    }

    // Test case 2: Negative number
    char str2[] = "-456";
    if (ft_atoi(str2) != -456) {
        printf("FAIL: ft_atoi(\"%s\") returned %d, expected %d\n", str2, ft_atoi(str2), -456);
        result++;
    }

    // Test case 3: Leading whitespace
    char str3[] = "    789";
    if (ft_atoi(str3) != 789) {
        printf("FAIL: ft_atoi(\"%s\") returned %d, expected %d\n", str3, ft_atoi(str3), 789);
        result++;
    }

    // Test case 4: Optional sign
    char str4[] = "+100";
    if (ft_atoi(str4) != 100) {
        printf("FAIL: ft_atoi(\"%s\") returned %d, expected %d\n", str4, ft_atoi(str4), 100);
        result++;
    }

    // Test case 5: Invalid input
    char str5[] = "abc";
    if (ft_atoi(str5) != 0) {
        printf("FAIL: ft_atoi(\"%s\") returned %d, expected %d\n", str5, ft_atoi(str5), 0);
        result++;
    }

    // Test case 6: Invalid input
    char str6[] = "++42";
    if (ft_atoi(str6) != 0) {
        printf("FAIL: ft_atoi(\"%s\") returned %d, expected %d\n", str6, ft_atoi(str5), 0);
        result++;
    }

    // Test case 6: Invalid input
    char str7[] = "--42";
    if (ft_atoi(str7) != 0) {
        printf("FAIL: ft_atoi(\"%s\") returned %d, expected %d\n", str7, ft_atoi(str5), 0);
        result++;
    }

    // Test case 6: Invalid input
    char str8[] = "+-42";
    if (ft_atoi(str8) != 0) {
        printf("FAIL: ft_atoi(\"%s\") returned %d, expected %d\n", str8, ft_atoi(str5), 0);
        result++;
    }

    return result;
}