#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10] = "123456789";
    
    // Test 1: Zero out the first 5 characters of str1
    ft_bzero(str1, 5);
    printf("Test 1: %s\n", str1); // Expected output: "     o"
    
    // Test 2: Zero out the entire str2
    ft_bzero(str2, strlen(str2));
    printf("Test 2: %s\n", str2); // Expected output: ""
    
    // Test 3: Zero out the first 3 characters of str3
    ft_bzero(str3, 3);
    printf("Test 3: %s\n", str3); // Expected output: "   456789"
    
    return 0;
}