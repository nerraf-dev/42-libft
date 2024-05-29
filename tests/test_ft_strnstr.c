#include "tests.h" // Include the header file for the function you're testing

void test_ft_strnstr(void)
{
    assert(strcmp(ft_strnstr("Hello, world!", "", 13), "Hello, world!") == 0);
    assert(strcmp(ft_strnstr("Hello, world!", "Hello", 13), "Hello, world!") == 0);
    assert(strcmp(ft_strnstr("Hello, world!", "world", 13), "world!") == 0);
    assert(ft_strnstr("Hello, world!", "not found", 13) == NULL);
    assert(ft_strnstr("Hello", "Hello, world!", 5) == NULL);
    assert(ft_strnstr("Hello, world!", "world", 5) == NULL);

    printf("ft_strnstr passed!\n");
}