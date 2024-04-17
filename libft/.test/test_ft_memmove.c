#include "../libft.h"
#include <string.h>
#include <stdio.h>

int test_ft_memmove()
{
    int result = 0;
    
    // Test case 1: Copying non-overlapping memory regions
    char src1[] = "Hello, world!";
    char dest1[20];
    ft_memmove(dest1, src1, sizeof(src1));
    if (strcmp(dest1, src1) != 0)
    {
        printf("Test case 1 failed: Copying non-overlapping memory regions\n");
        result = 1;
    }
    
    // Test case 2: Copying overlapping memory regions (src < dest)
    char dest2[20];
    strcpy(dest2, "**************");
    ft_memmove(dest2 + 7, dest2, 7);
    if (strcmp(dest2, "********Hello, world!") != 0)
    {
        printf("Test case 2 failed: Copying overlapping memory regions (src < dest)\n");
        result = 1;
    }
    
    // Test case 3: Copying overlapping memory regions (src > dest)
    char dest3[20];
    strcpy(dest3, "**************");
    ft_memmove(dest3, dest3 + 7, 7);
    if (strcmp(dest3, "world!******") != 0)
    {
        printf("Test case 3 failed: Copying overlapping memory regions (src > dest)\n");
        result = 1;
    }
    
    return result;
}