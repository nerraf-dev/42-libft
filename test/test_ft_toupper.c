#include "../libft/libft.h"
#include <stdio.h>

int test_ft_upper()
{
    char    c1 = 'a';
    if (ft_toupper(c1) != 'A')
    {
        printf("Test case 1 failed\n");
        return (1);
    }

    char    c2 = 'z';
    if (ft_toupper(c2) != 'Z')
    {
        printf("Test case 2 failed\n");
        return (1);
    }

    char    c3 = 'A';
    if (ft_toupper(c3) != 'A')
    {
        printf("Test case 3 failed\n");
        return (1);
    }

    char    c4 = 'Z';
    if (ft_toupper(c4) != 'Z')
    {
        printf("Test case 4 failed\n");
        return (1);
    }

    char    c5 = '1';
    if (ft_toupper(c5) != '1')
    {
        printf("Test case 5 failed\n");
        return (1);
    }

    char    c6 = ' ';
    if (ft_toupper(c6) != ' ')
    {
        printf("Test case 6 failed\n");
        return (1);
    }

    char    c7 = '!';
    if (ft_toupper(c7) != '!')
    {
        printf("Test case 7 failed\n");
        return (1);
    }

    char    c8 = 'a';
    if (ft_toupper(c8) != 'A')
    {
        printf("Test case 8 failed\n");
        return (1);
    }

    // All test cases passed
    printf("All test cases passed\n");
    return (0);
}