#include "../libft.h"
#include <stdio.h>
#include <string.h>

// Tests return 0 on success, 1 on failure
int test_ft_memcpy()
{
    int result = 0;
    
    // Test case 1: Copying a string
    char src1[] = "Hello, world!";
    char dest1[20];
    ft_memcpy(dest1, src1, strlen(src1) + 1);
    if (strcmp(dest1, src1) != 0)
    {
        printf("Test case 1 failed: Copying a string\n");
        result = 1;
    }
    
    // Test case 2: Copying an array of integers
    int src2[] = {1, 2, 3, 4, 5};
    int dest2[5];
    ft_memcpy(dest2, src2, sizeof(src2));
    for (int i = 0; i < 5; i++)
    {
        if (dest2[i] != src2[i])
        {
            printf("Test case 2 failed: Copying an array of integers\n");
            result = 1;
            break;
        }
    }
    
    // Test case 3: Copying a struct
    typedef struct {
        int x;
        int y;
    } Point;
    
    Point src3 = {10, 20};
    Point dest3;
    ft_memcpy(&dest3, &src3, sizeof(Point));
    if (dest3.x != src3.x || dest3.y != src3.y)
    {
        printf("Test case 3 failed: Copying a struct\n");
        result = 1;
    }
    
    return result;
}