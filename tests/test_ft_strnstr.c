#include "tests.h" // Include the header file for the function you're testing

void test_ft_strnstr(void)
{
    assert(ft_strnstr("Hello, world!", "", 13) == strnstr("Hello, world!", "", 13));
    assert(ft_strnstr("Hello, world!", "Hello", 13) == strnstr("Hello, world!", "Hello", 13));
    assert(ft_strnstr("Hello, world!", "world", 13) == strnstr("Hello, world!", "world", 13));
    assert(ft_strnstr("Hello, world!", "not found", 13) == strnstr("Hello, world!", "not found", 13));
    assert(ft_strnstr("Hello", "Hello, world!", 5) == strnstr("Hello", "Hello, world!", 5));
    assert(ft_strnstr("Hello, world!", "world", 5) == strnstr("Hello, world!", "world", 5));

    printf("ft_strnstr passed!\n");
}
