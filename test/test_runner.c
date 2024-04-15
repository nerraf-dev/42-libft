#include "../libft/libft.h"
#include "test_runner.h"
#include <stdio.h>

typedef struct s_test_case {
    int (*test_func)();
    char *description;
} t_test_case;

void run_tests(t_test_case *tests, int num_tests) {
    for (int i = 0; i < num_tests; i++) {
        int result = tests[i].test_func();
        if (result == 0) {
            printf("PASS: %s\n", tests[i].description);
        } else {
            printf("FAIL: %s\n", tests[i].description);
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


        };

	int num_tests = sizeof(tests) / sizeof(t_test_case);

	run_tests(tests, num_tests);

	return 0;
}
