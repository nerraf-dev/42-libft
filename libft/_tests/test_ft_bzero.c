#include <assert.h>
#include <string.h>
#include "tests.h"

void test_ft_bzero()
{
    char str[10] = "Hello";
    
    // Test case 1: Check if ft_bzero sets the memory to zero
    ft_bzero(str, sizeof(str));
    for (size_t i = 0; i < sizeof(str); i++)
    {
        assert(str[i] == '\0' && "Test case 1 failed: ft_bzero did not set the memory to zero");
    }
    
    // Test case 2: Check if ft_bzero handles empty string correctly
    strcpy(str, "Hello"); // Reset the string
    ft_bzero(str, 0);
    assert(strcmp(str, "Hello") == 0 && "Test case 2 failed: ft_bzero modified the string when n is 0");
    
    // Test case 3: Check if ft_bzero handles large n correctly
    char large_str[1000] = "Large String";
    ft_bzero(large_str, sizeof(large_str));
    for (unsigned long i = 0; i < sizeof(large_str); i++)
    {
        assert(large_str[i] == 0 && "Test case 3 failed: ft_bzero did not set the memory to zero for large n");
    }
}