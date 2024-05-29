#include "tests.h"
#include <assert.h>

void test_ft_strlcpy()
{
    char src[] = "Hello, world!";
    char dst[20];
    size_t result = ft_strlcpy(dst, src, sizeof(dst));

    // Test case 1: Check if the destination string is correctly copied
    assert(strcmp(dst, src) == 0);
    // printf("Test case 1 passed: Destination string is correctly copied.\n");

    // Test case 2: Check if the return value is correct
    assert(result == strlen(src));
    // printf("Test case 2 passed: Return value is correct.\n");

    // Test case 3: Check with empty source string
    char src_empty[] = "";
    char dst_empty[20];
    size_t result_empty = ft_strlcpy(dst_empty, src_empty, sizeof(dst_empty));
    assert(strcmp(dst_empty, src_empty) == 0);
    assert(result_empty == strlen(src_empty));
    // printf("Test case 3 passed: Empty source string handled correctly.\n");

    // Test case 4: Check with source string longer than destination buffer
    char src_long[] = "This string is definitely longer than the destination buffer.";
    char dst_long[20];
    size_t result_long = ft_strlcpy(dst_long, src_long, sizeof(dst_long));
    assert(result_long == strlen(src_long));
    // printf("Test case 4 passed: Source string longer than destination buffer handled correctly.\n");

    // Test case 5: Check with source string exactly the same length as destination buffer
    char src_same[] = "Exactly 20 chars.";
    char dst_same[20];
    size_t result_same = ft_strlcpy(dst_same, src_same, sizeof(dst_same));
    assert(result_same == strlen(src_same));
    // printf("Test case 5 passed: Source string same length as destination buffer handled correctly.\n");

    // Test case 6: Check with source string shorter than destination buffer
    char src_short[] = "Short";
    char dst_short[20];
    size_t result_short = ft_strlcpy(dst_short, src_short, sizeof(dst_short));
    assert(strcmp(dst_short, src_short) == 0);
    assert(result_short == strlen(src_short));
    // printf("Test case 6 passed: Source string shorter than destination buffer handled correctly.\n");

    // Test case 7: Check with destination buffer of size 0
    char src_zero[] = "Non-empty";
    char dst_zero[0];
    size_t result_zero = ft_strlcpy(dst_zero, src_zero, sizeof(dst_zero));
    assert(result_zero == strlen(src_zero));
    // printf("Test case 7 passed: Destination buffer of size 0 handled correctly.\n");

    // TODO: FIX these tests/the actual function!

    // // Test case 8: Check with NULL source string
    // // Note: This test case may cause a segmentation fault if your function does not handle NULL pointers correctly.
    // char* src_null = NULL;
    // char dst_null[20];
    // size_t result_null = ft_strlcpy(dst_null, src_null, sizeof(dst_null));
    // assert(result_null == 0);
    // printf("Test case 8 passed: NULL source string handled correctly.\n");

    // // Test case 9: Check with NULL destination string
    // // Note: This test case may cause a segmentation fault if your function does not handle NULL pointers correctly.
    // char src_non_null[] = "Non-empty";
    // char* dst_non_null = NULL;
    // size_t result_non_null = ft_strlcpy(dst_non_null, src_non_null, sizeof(dst_non_null));
    // assert(result_non_null == strlen(src_non_null));
    // printf("Test case 9 passed: NULL destination string handled correctly.\n");

    printf("ft_strlcpy tests completed!\n");
}
