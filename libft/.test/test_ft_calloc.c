#include "../libft.h"
#include <stdlib.h>
int test_ft_calloc()
{
    char *ptr = ft_calloc(5, sizeof(char));
    if (ptr == NULL)
        return 1;
    for (int i = 0; i < 5; i++)
    {
        if (ptr[i] != 0)
        {
            free(ptr);
            return 1;
        }
    }
    free(ptr);

    // Test case 1: Allocating memory for 0 elements
    ptr = ft_calloc(0, sizeof(int));
    if (ptr != NULL)
    {
        free(ptr);
        return 1;
    }

    // Test case 2: Allocating memory for 10 elements of size 4 bytes each
    int *intPtr = ft_calloc(10, sizeof(int));
    if (intPtr == NULL)
        return 1;
    for (int i = 0; i < 10; i++)
    {
        if (intPtr[i] != 0)
        {
            free(intPtr);
            return 1;
        }
    }
    free(intPtr);

    // Test case 3: Allocating memory for 3 elements of size 10 bytes each
    char *charPtr = ft_calloc(3, 10);
    if (charPtr == NULL)
        return 1;
    for (int i = 0; i < 30; i++)
    {
        if (charPtr[i] != 0)
        {
            free(charPtr);
            return 1;
        }
    }
    free(charPtr);

    return 0;
}