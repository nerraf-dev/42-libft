#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "tests.h"

void test_ft_calloc()
{
    // Test case 1: Allocating memory for 5 integers
    int *ptr1 = ft_calloc(5, sizeof(int));
    assert(ptr1 != NULL);
    for (int i = 0; i < 5; i++)
    {
        assert(ptr1[i] == 0);
    }
    free(ptr1);

    // Test case 2: Allocating memory for 10 characters
    char *ptr2 = ft_calloc(10, sizeof(char));
    assert(ptr2 != NULL);
    for (int i = 0; i < 10; i++)
    {
        assert(ptr2[i] == '\0');
    }
    free(ptr2);

    // Test case 3: Allocating memory for 0 elements
    int *ptr3 = ft_calloc(0, sizeof(int));
    assert(ptr3 != NULL);
    free(ptr3);

    printf("ft_calloc passed successfully!\n");
}