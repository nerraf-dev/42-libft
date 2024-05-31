#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "tests.h"

void test_ft_putnbr_fd()
{
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

	// Test case 1: Positive number
	int num1 = 12345;
	ft_putnbr_fd(num1, fd); // Output: 12345

	// Test case 2: Negative number
	int num2 = -9876;
	ft_putnbr_fd(num2, fd); // Output: -9876

	// Test case 3: Zero
	int num3 = 0;
	ft_putnbr_fd(num3, fd); // Output: 0

	// Test case 4: Maximum negative value
	int num4 = -2147483648;
	ft_putnbr_fd(num4, fd); // Output: -2147483648

	// Test case 5: Maximum positive value
	int num5 = 2147483647;
	ft_putnbr_fd(num5, fd); // Output: 2147483647

	// Test case 6: Large positive number
	int num6 = 987654321;
	ft_putnbr_fd(num6, fd); // Output: 987654321

	// Test case 7: Large negative number
	int num7 = -987654321;
	ft_putnbr_fd(num7, fd); // Output: -987654321

	close(fd);

	printf("ft_putnbr_fd passed successfully!\n");
}
