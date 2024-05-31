#include "tests.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void test_ft_putendl_fd()
{
	// Test case 1: Writing an empty string to file descriptor 1 (stdout)
	char *str1 = "";
	int fd1 = 1;
	ft_putendl_fd(str1, fd1);

	// Test case 2: Writing a non-empty string to file descriptor 1 (stdout)
	char *str2 = "Hello, world!";
	int fd2 = 1;
	ft_putendl_fd(str2, fd2);

	// Test case 3: Writing a non-empty string to file descriptor 2 (stderr)
	char *str3 = "Error message";
	int fd3 = 2;
	ft_putendl_fd(str3, fd3);

	printf("ft_putendl_fd passed successfully!\n");
}
