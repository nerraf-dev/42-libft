#include "tests.h"
#include <stdio.h>
#include <unistd.h>

void test_ft_putchar_fd()
{
	// Test case 1: Writing a single character to stdout
	int stdout_backup = dup(STDOUT_FILENO); // Backup stdout file descriptor
	int pipefd[2];
	pipe(pipefd);
	dup2(pipefd[1], STDOUT_FILENO); // Redirect stdout to pipe write end

	ft_putchar_fd('A', STDOUT_FILENO);

	char output;
	read(pipefd[0], &output, 1);
	close(pipefd[0]);
	close(pipefd[1]);
	dup2(stdout_backup, STDOUT_FILENO); // Restore stdout file descriptor

	assert(output == 'A');
	printf("ft_putchar_fd passed successfully!\n");
}
