#include "../libft.h"
#include "test_runner.h"
#include <stdio.h>

typedef struct s_test_case {
    int (*test_func)();
    char *description;
} t_test_case;

void run_tests(t_test_case *tests, int num_tests) {
    int passed_tests = 0;
    int failed_tests = 0;
    char *failed_tests_desc[num_tests];

    for (int i = 0; i < num_tests; i++) {
        int result = tests[i].test_func();
        if (result == 0) {
            printf("PASS: %s\n", tests[i].description);
            passed_tests++;
        } else {
            printf("\n\033[1;31mFAIL: %s\033[0m\n\n", tests[i].description);
            failed_tests_desc[failed_tests] = tests[i].description;
            failed_tests++;
        }
    }

    printf("\n\nTest Overview:\n");
    printf("Passed tests: %d\n", passed_tests);
    printf("Failed tests: %d\n", failed_tests);
    if (failed_tests > 0) {
        printf("\nFailed test cases:\n");
        for (int i = 0; i < failed_tests; i++) {
            printf("%s\n", failed_tests_desc[i]);
        }
    }
}

int main() {
	t_test_case tests[] = {
        {test_ft_atoi, "ft_atoi converts a string to an integer"},
        {test_ft_bzero, "ft_bzero sets a block of memory to zero"},
        {test_ft_isalnum, "ft_isalnum returns true for alphanumeric characters and false for others"},
        {test_ft_isalpha, "ft_isalpha returns true for alphabetic characters and false for others"},
        {test_ft_isascii, "ft_isascii returns true for ASCII characters and false for others"},
        {test_ft_isdigit, "ft_isdigit returns true for digits and false for others"},
        {test_ft_isprint, "ft_isprint returns true for printable characters and false for others"},
        {test_ft_memset, "ft_memset sets a block of memory to a given value"},
        {test_ft_strchr, "ft_strchr returns a pointer to the first occurrence of a character in a string"},
        {test_ft_strlcat, "ft_strlcat concatenates two strings"},
        {test_ft_strlen, "ft_strlen returns the length of a string"},
        {test_ft_strlcpy, "ft_strlcpy copies the string correctly and returns the correct length"},
        {test_ft_strlen, "ft_strlen returns the length of a string"},
        {test_ft_strncmp, "ft_strncmp compares two strings"},
        {test_ft_strrchr, "ft_strrchr returns a pointer to the last occurrence of a character in a string"},
        {test_ft_strnstr, "ft_strnstr finds a substring in a string"},
        {test_ft_tolower, "ft_tolower converts an uppercase character to lowercase"},
        {test_ft_toupper, "ft_toupper converts a lowercase character to uppercase"},
        {test_ft_memchr, "ft_memchr locates a byte in a byte string"},
        {test_ft_memcmp, "ft_memcmp compares two memory areas"},
        {test_ft_memcpy, "ft_memcpy copies a block of memory from a source address to a destination address"},

        };

	int num_tests = sizeof(tests) / sizeof(t_test_case);

	run_tests(tests, num_tests);

	return 0;
}
