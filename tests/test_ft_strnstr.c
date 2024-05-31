#include "tests.h" // Include the header file for the function you're testing

void test_ft_strnstr(void)
{

    char *str = "Hello, world!";
    char *search = "world";
    char *result = ft_strnstr(str, search, 13);
    assert(strcmp(result, "world!") == 0);

    char *str2 = "Hello, world!";
    char *search2 = "foo";
    char *result2 = ft_strnstr(str2, search2, 13);
    assert(result2 == NULL);

    char *str3 = "Hello, world!";
    char *search3 = "";
    char *result3 = ft_strnstr(str3, search3, 13);
    assert(strcmp(result3, "Hello, world!") == 0);

    char *str4 = "Hello, world!";
    char *search4 = "world";
    char *result4 = ft_strnstr(str4, search4, 5);
    assert(result4 == NULL);


    printf("ft_strnstr passed!\n");
}
