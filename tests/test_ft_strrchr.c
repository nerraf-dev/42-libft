#include "tests.h"
#include <assert.h>

void test_ft_strrchr()
{
    const char *str = "Hello, World!";
    int ch = 'o';
    char *result = ft_strrchr(str, ch);
    assert(result != NULL && *result == 'o');

    ch = 'z';
    result = ft_strrchr(str, ch);
    assert(result == NULL);

    str = "";
    ch = '\0';
    result = ft_strrchr(str, ch);
    assert(result != NULL && *result == '\0');

    // Test case 4: Check with a string that contains multiple occurrences of the search character
    const char *str_multi = "Hello, World! Hello, World!";
    int ch_multi = 'o';
    char *result_multi = ft_strrchr(str_multi, ch_multi);
    assert(result_multi != NULL && *result_multi == 'o' && strcmp(result_multi, "orld!") == 0);

    // Test case 5: Check with a string that contains only the search character
    const char *str_only = "oooooooooo";
    int ch_only = 'o';
    char *result_only = ft_strrchr(str_only, ch_only);
    assert(result_only != NULL && *result_only == 'o' && strcmp(result_only, "o") == 0);

    // Test case 6: Check with a NULL string
    // Note: This test case may cause a segmentation fault if your function does not handle NULL pointers correctly.
    // const char *str_null = NULL;
    // int ch_null = 'o';
    // char *result_null = ft_strrchr(str_null, ch_null);
    // assert(result_null == NULL);

    printf("ft_strrchr passed successfully!\n");
}
