#include "tests.h"
#include <assert.h>

void test_ft_strncmp()
{
    // Test case 1: Comparing two equal strings
    assert(ft_strncmp("hello", "hello", 5) == 0);
    
    // Test case 2: Comparing two different strings
    assert(ft_strncmp("hello", "world", 5) != 0);
    
    // Test case 3: Comparing strings with different lengths
    assert(ft_strncmp("hello", "hello world", 5) == 0);
    
    // Test case 4: Comparing strings with different lengths
    assert(ft_strncmp("hello world", "hello", 5) == 0);
    
    // Test case 5: Comparing strings with different lengths
    assert(ft_strncmp("hello", "hello world", 10) < 0);
    

    
    printf("ft_strncmp passed successfully!\n");
}