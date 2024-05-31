#include "tests.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <assert.h>

void test_ft_putstr_fd()
{
    // Test case 1: Outputting an empty string to stdout
     printf("Running test case 1...\n");
    int stdout_fd = dup(STDOUT_FILENO); // Save stdout file descriptor
    int pipe_fd[2];
    pipe(pipe_fd);
    dup2(pipe_fd[1], STDOUT_FILENO); // Redirect stdout to pipe
    pid_t pid = fork();
    if (pid == 0) {
        ft_putstr_fd("", STDOUT_FILENO);
        exit(0);
    }
    close(pipe_fd[1]); // Close write end of the pipe

    fd_set set;
    FD_ZERO(&set);
    FD_SET(pipe_fd[0], &set);
    struct timeval timeout = {0, 500000}; // 0.5 seconds
    if (select(pipe_fd[0] + 1, &set, NULL, NULL, &timeout) > 0) {
        char output1[1];
        read(pipe_fd[0], output1, 1);
        assert(output1[0] == '\0');
    }

    close(pipe_fd[0]);
    dup2(stdout_fd, STDOUT_FILENO); // Restore stdout
    close(stdout_fd); // Close the duplicate descriptor
    wait(NULL); // Wait for child process to finish
    close(pipe_fd[0]);
    close(pipe_fd[1]);



    // Test case 2: Outputting a non-empty string to stdout
    printf("Running test case 2...\n");
    pipe(pipe_fd);
    dup2(pipe_fd[1], STDOUT_FILENO); // Redirect stdout to pipe
    pid = fork();
    if (pid == 0) {
        ft_putstr_fd("Hello, world!", STDOUT_FILENO);
        exit(0);
    }
    fflush(stdout); // Ensure all output is flushed to the pipe
    close(pipe_fd[1]); // Close write end of the pipe
    fd_set set2;
    FD_ZERO(&set2);
    FD_SET(pipe_fd[0], &set2);
    timeout.tv_sec = 0;
    timeout.tv_usec = 500000; // 0.5 seconds
    int ready = 0;
while (!ready) {
    ready = select(pipe_fd[0] + 1, &set2, NULL, NULL, &timeout);
    if (ready == -1) {
        perror("select failed");
        exit(1);
    }
}
char output2[14];
ssize_t bytes_read = read(pipe_fd[0], output2, 13); // Read one less to leave space for null terminator
if (bytes_read == -1) {
    perror("read failed");
    exit(1);
}
output2[bytes_read] = '\0'; // Null terminate the string
printf("output2: %s\n", output2);
assert(strcmp(output2, "Hello, world!") == 0);
}
    close(pipe_fd[0]);
    dup2(stdout_fd, STDOUT_FILENO); // Restore stdout
    close(stdout_fd); // Close the duplicate descriptor
    wait(NULL); // Wait for child process to finish
    close(pipe_fd[0]);
    close(pipe_fd[1]);

    // Test case 3: Outputting a string to a file
    printf("Running test case 3...\n");
    int file_fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    ft_putstr_fd("This is a test.", file_fd);
    close(file_fd);
    file_fd = open("test_output.txt", O_RDONLY);
    char output3[16];
    read(file_fd, output3, 15); // Read one less to leave space for null terminator
    output3[15] = '\0'; // Null terminate the string
    close(file_fd);
    assert(strcmp(output3, "This is a test.") == 0);

    printf("ft_putstr_fd passed successfully!\n");
}
