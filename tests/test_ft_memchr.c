#include "tests.h"
#include <assert.h>

void test_ft_memchr()
{
    const char *str = "Hello, World!";
    char ch = 'W';
    void *result = ft_memchr(str, ch, strlen(str));
    assert(result != NULL && "Test failed: character not found in string");

    ch = 'Z';
    result = ft_memchr(str, ch, strlen(str));
    assert(result == NULL && "Test failed: character found in string");

    const char *empty_str = "";
    ch = 'A';
    result = ft_memchr(empty_str, ch, strlen(empty_str));
    assert(result == NULL && "Test failed: character found in empty string");

    const char *long_str = "This is a long string";
    ch = 'i';
    result = ft_memchr(long_str, ch, strlen(long_str));
    assert(result != NULL && "Test failed: character not found in long string");

    printf("ft_memchr passed successfully!\n");
}
