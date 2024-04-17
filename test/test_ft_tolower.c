#include "../libft/libft.h"
#include <stdio.h>

int test_ft_tolower()
{
    char    c1 = 'A';
    if (ft_tolower(c1) != 'a')
    {
        printf("Test case 1 failed\n");
        return (1);
    }

    char    c2 = 'Z';
    if (ft_tolower(c2) != 'z')
    {
        printf("Test case 2 failed\n");
        return (1);
    }

    char    c3 = 'a';
    if (ft_tolower(c3) != 'a')
    {
        printf("Test case 3 failed\n");
        return (1);
    }

    char    c4 = 'z';
    if (ft_tolower(c4) != 'z')
    {
        printf("Test case 4 failed\n");
        return (1);
    }

    char    c5 = '1';
    if (ft_tolower(c5) != '1')
    {
        printf("Test case 5 failed\n");
        return (1);
    }

    char    c6 = ' ';
    if (ft_tolower(c6) != ' ')
    {
        printf("Test case 6 failed\n");
        return (1);
    }

    char    c7 = '!';
    if (ft_tolower(c7) != '!')
    {
        printf("Test case 7 failed\n");
        return (1);
    }

    char    c8 = 'A';
    if (ft_tolower(c8) != 'a')
    {
        printf("Test case 8 failed\n");
        return (1);
    }

    // All test cases passed
    printf("All test cases passed\n");
    return (0);
}