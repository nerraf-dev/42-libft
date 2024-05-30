#include "tests.h"
#include <assert.h>

void test_ft_strchr()
{
    const char *str = "Hello, World!";
    int c = 'o';
    char *result = ft_strchr(str, c);
    assert(result != NULL && *result == 'o');

    c = 'z';
    result = ft_strchr(str, c);
    assert(result == NULL);

    str = "";
    c = '\0';
    result = ft_strchr(str, c);
    assert(result != NULL && *result == '\0');

    // Test case 4: Check with a string that contains multiple occurrences of the search character
    const char *str_multi = "Hello, World! Hello, World!";
    int ch_multi = 'o';
    char *result_multi = ft_strchr(str_multi, ch_multi);
    assert(result_multi != NULL && *result_multi == 'o' && strcmp(result_multi, "o, World! Hello, World!") == 0);

    // // Test case 5: Check with a string that contains only the search character
    const char *str_only = "oooooooooo";
    int ch_only = 'o';
    char *result_only = ft_strchr(str_only, ch_only);
    assert(result_only != NULL && *result_only == 'o' && strcmp(result_only, "oooooooooo") == 0);

    // // Test case 6: Check with a NULL string
    // // Note: This test case may cause a segmentation fault if func does not handle NULL pointers correctly.
    // const char *str_null = 0;
    // int ch_null = 'o';
    // char *result_null = ft_strchr(str_null, ch_null);
    // char *result_original = strchr(str_null, ch_null);
    // assert(result_null == result_original);
    // assert(result_null == NULL);


    printf("ft_strchr passed successfully!\n");
}
