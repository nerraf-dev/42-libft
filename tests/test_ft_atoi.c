#include "tests.h" // Include the header file for the function you're testing

void test_ft_atoi(void)
{
    // Test case 1: Positive number
    char str1[] = "12345";
    int expected1 = 12345;
    int result1 = ft_atoi(str1);
    assert(result1 == expected1);

    // Test case 2: Negative number
    char str2[] = "-9876";
    int expected2 = -9876;
    int result2 = ft_atoi(str2);
    assert(result2 == expected2);

    // Test case 3: Number with leading whitespace
    char str3[] = "    42";
    int expected3 = 42;
    int result3 = ft_atoi(str3);
    assert(result3 == expected3);

    // Test case 4: Number with trailing characters
    char str4[] = "123abc";
    int expected4 = 123;
    int result4 = ft_atoi(str4);
    assert(result4 == expected4);

    // Test case 5: Number with leading sign
    char str5[] = "+789";
    int expected5 = 789;
    int result5 = ft_atoi(str5);
    assert(result5 == expected5);

    // Test case 6: Empty string
    char str6[] = "";
    int expected6 = 0;
    int result6 = ft_atoi(str6);
    assert(result6 == expected6);
}