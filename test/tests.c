#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <limits.h>
#include <ctype.h>

void test_int_max_min() {
	assert(INT_MAX > 0); // Expected: True, INT_MAX is greater than 0
	assert(INT_MIN < 0); // Expected: True, INT_MIN is less than 0
}

void test_ft_isalpha() {
	assert(ft_isalpha('a')); // Expected: True, 'a' is an alphabetic character
	assert(ft_isalpha('z')); // Expected: True, 'z' is an alphabetic character
	assert(!ft_isalpha('1')); // Expected: False, '1' is not an alphabetic character
	assert(!ft_isalpha('!')); // Expected: False, '!' is not an alphabetic character
	assert(!ft_isalpha(' ')); // Expected: False, ' ' is not an alphabetic character
	assert(!ft_isalpha('\0')); // Expected: False, '\0' is not an alphabetic character
	assert(!ft_isalpha(128)); // Expected: False, 128 is not an alphabetic character
}

void test_ft_isdigit() {
	assert(ft_isdigit('0')); // Expected: True, '0' is a digit
	assert(ft_isdigit('9')); // Expected: True, '9' is a digit
	assert(!ft_isdigit('a')); // Expected: False, 'a' is not a digit
	assert(!ft_isdigit('!')); // Expected: False, '!' is not a digit
	assert(!ft_isdigit(' ')); // Expected: False, ' ' is not a digit
	assert(!ft_isdigit('\0')); // Expected: False, '\0' is not a digit
	assert(!ft_isdigit(128)); // Expected: False, 128 is not a digit
}

void test_ft_isalnum() {
	assert(ft_isalnum('0')); // Expected: True, '0' is an alphanumeric character
	assert(ft_isalnum('a')); // Expected: True, 'a' is an alphanumeric character
	assert(ft_isalnum('z')); // Expected: True, 'a' is an alphanumeric character
	assert(ft_isalnum('A')); // Expected: True, 'a' is an alphanumeric character
	assert(ft_isalnum('Z')); // Expected: True, 'a' is an alphanumeric character
	assert(!ft_isalnum('!')); // Expected: False, '!' is not an alphanumeric character
	assert(!ft_isalnum(' ')); // Expected: False, ' ' is not an alphanumeric character
	assert(!ft_isalnum('\0')); // Expected: False, '\0' is not an alphanumeric character
	assert(!ft_isalnum(128)); // Expected: False, 128 is not an alphanumeric character
}

void test_ft_isascii() {
	assert(ft_isascii(0)); // Expected: True, 0 is an ASCII character
	assert(ft_isascii(127)); // Expected: True, 127 is an ASCII character
	assert(!ft_isascii(128)); // Expected: False, 128 is not an ASCII character
}

void test_ft_isprint() {
	assert(ft_isprint(32)); // Expected: True, 32 is a printable character
	assert(ft_isprint(126)); // Expected: True, 126 is a printable character
	assert(!ft_isprint(31)); // Expected: False, 31 is not a printable character
	assert(!ft_isprint(127)); // Expected: False, 127 is not a printable character
	assert(!ft_isprint(128)); // Expected: False, 128 is not a printable character
}

void test_ft_strlen() {
	assert(ft_strlen("Hello") == 5); // Expected: 5, length of "Hello" is 5
	assert(ft_strlen("") == 0); // Expected: 0, length of an empty string is 0
	assert(ft_strlen("Hello, World!") == 13); // Expected: 13, length of "Hello, World!" is 13
}

void test_ft_memset() {
	char str[10] = "Hello";
	ft_memset(str, 'a', 5);
	assert(strcmp(str, "aaaaa") == 0); // Expected: "aaaaao", first 5 characters are replaced with 'a'

	int arr[5] = {1, 2, 3, 4, 5};
	ft_memset(arr, 0, 5 * sizeof(int));
	assert(arr[0] == 0 && arr[1] == 0 && arr[2] == 0 && arr[3] == 0 && arr[4] == 0); // Expected: 0, all elements are replaced with 0

	double arr2[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
	ft_memset(arr2, 0, 5 * sizeof(double));
	assert(arr2[0] == 0 && arr2[1] == 0 && arr2[2] == 0 && arr2[3] == 0 && arr2[4] == 0); // Expected: 0, all elements are replaced with 0

	struct { int a; double b; } s[5] = {{1, 1.0}, {2, 2.0}, {3, 3.0}, {4, 4.0}, {5, 5.0}};
	ft_memset(s, 0, 5 * sizeof(s[0]));
	assert(s[0].a == 0 && s[0].b == 0 && s[1].a == 0 && s[1].b == 0 && s[2].a == 0 && s[2].b == 0 && s[3].a == 0 && s[3].b == 0 && s[4].a == 0 && s[4].b == 0); // Expected: 0, all elements are replaced with 0

	// Additional tests for negative values
    char str2[10] = "Hello";
    ft_memset(str2, -1, 5);
    assert(strcmp(str2, "\xFF\xFF\xFF\xFF\xFF") == 0); // Expected: "\xFF\xFF\xFF\xFF\xFF", first 5 characters are replaced with -1

    // Additional tests for non-zero index
    char str3[10] = "Hello";
    ft_memset(str3 + 2, 'a', 3);
    assert(strcmp(str3, "Heaaa") == 0); // Expected: "Heaaa", characters starting from index 2 are replaced with 'a'
}

void test_ft_bzero() {
    // Existing test
    char str[10] = "Hello";
    ft_bzero(str, 5);
    assert(strcmp(str, "\0\0\0\0\0o") == 0); // Expected: "\0\0\0\0\0o", first 5 characters are replaced with '\0'

    // Additional tests
    // Test 1: Check if the function works with the full length of the string
    char str1[10] = "HelloWorld";
    ft_bzero(str1, 10);
    assert(strcmp(str1, "\0\0\0\0\0\0\0\0\0\0") == 0); // Expected: "\0\0\0\0\0\0\0\0\0\0", all characters are replaced with '\0'

    // Test 2: Check if the function works with a length of 0
    char str2[10] = "HelloWorld";
    ft_bzero(str2, 0);
    assert(strcmp(str2, "HelloWorld") == 0); // Expected: "HelloWorld", no characters are replaced with '\0'

    // Test 3: Check if the function works with a string that already contains '\0'
    char str3[11] = "Hello\0World";
    ft_bzero(str3, 10);
    assert(strcmp(str3, "\0\0\0\0\0\0\0\0\0\0") == 0); // Expected: "\0\0\0\0\0\0\0\0\0\0", all characters are replaced with '\0'

    // Test 4: Check if the function works with a length greater than the length of the string
    char str4[10] = "Hello";
    ft_bzero(str4, 15);
    assert(strcmp(str4, "\0\0\0\0\0\0\0\0\0") == 0); // Expected: "\0\0\0\0\0\0\0\0\0", all characters are replaced with '\0'
}

void test_ft_strchr() {
    // Existing tests
    assert(strcmp(ft_strchr("Hello", 'e'), "ello") == 0); // Expected: "ello", 'e' is the second character in "Hello"
    assert(ft_strchr("Hello", 'x') == NULL); // Expected: NULL, 'x' is not in "Hello"

    // Additional tests
    // Test 1: Check if the function works with the first character of the string
    assert(strcmp(ft_strchr("Hello", 'H'), "Hello") == 0); // Expected: "Hello", 'H' is the first character in "Hello"

    // Test 2: Check if the function works with the last character of the string
    assert(strcmp(ft_strchr("Hello", 'o'), "o") == 0); // Expected: "o", 'o' is the last character in "Hello"

    // Test 3: Check if the function works with a character that appears multiple times in the string
    assert(strcmp(ft_strchr("Hello, hello", 'l'), "llo, hello") == 0); // Expected: "llo, hello", 'l' is the third character in "Hello, hello"

    // Test 4: Check if the function works with a string that contains '\0'
    assert(strcmp(ft_strchr("Hello\0World", 'W'), NULL) == 0); // Expected: NULL, 'W' is after '\0' in "Hello\0World"

    // Test 5: Check if the function works with '\0'
    assert(strcmp(ft_strchr("Hello", '\0'), "") == 0); // Expected: "", '\0' is the end of the string

    // Boundary and extreme tests
    // Test 6: Check if the function works with an empty string
    assert(ft_strchr("", 'H') == NULL); // Expected: NULL, 'H' is not in ""

    // Test 7: Check if the function works with a very long string
    char longStr[10000];
    memset(longStr, 'a', 9999);
    longStr[9999] = '\0';
    assert(ft_strchr(longStr, 'a') == longStr); // Expected: longStr, 'a' is the first character in longStr
    assert(ft_strchr(longStr, 'b') == NULL); // Expected: NULL, 'b' is not in longStr
}

void test_ft_strrchr() {
	// Existing tests
	assert(strcmp(ft_strrchr("Hello", 'l'), "lo") == 0); // Expected: "lo", 'l' is the last character in "Hello"
	assert(ft_strrchr("Hello", 'x') == NULL); // Expected: NULL, 'x' is not in "Hello"

	// Additional tests
	// Test 1: Check if the function works with the first character of the string
	assert(strcmp(ft_strrchr("Hello", 'H'), "Hello") == 0); // Expected: "Hello", 'H' is the first character in "Hello"

	// Test 2: Check if the function works with a character that appears multiple times in the string
	assert(strcmp(ft_strrchr("Hello, hello", 'l'), "lo") == 0); // Expected: "lo", 'l' is the last character in "Hello, hello"
}

void test_ft_strlcat() {
	// Existing tests
	char dst[10] = "Hello";
	assert(ft_strlcat(dst, " World", 10) == 11); // Expected: 11, total length of "Hello" and " World" is 11
	assert(strcmp(dst, "Hello Wor") == 0); // Expected: "Hello Wor", dst can only hold 10 characters including '\0'

	// Additional tests
	// Test 1: Check if the function works with a length of 0
	char dst1[10] = "Hello";
	assert(ft_strlcat(dst1, " World", 0) == 5); // Expected: 5, length of "Hello" is 5, no characters are appended

	// Test 2: Check if the function works with an empty string
	char dst2[10] = "";
	assert(ft_strlcat(dst2, "Hello", 10) == 5); // Expected: 5, total length of "" and "Hello" is 5
	assert(strcmp(dst2, "Hello") == 0); // Expected: "Hello", dst2 is "Hello"
}

void test_ft_strncmp() {
	// Existing tests
	assert(ft_strncmp("Hello", "Hello", 5) == 0); // Expected: 0, "Hello" and "Hello" are equal
	assert(ft_strncmp("Hello", "Hell", 5) > 0); // Expected: >0, "Hello" is greater than "Hell"
	assert(ft_strncmp("Hello", "Helloo", 6) < 0); // Expected: <0, "Hello" is less than "Helloo"

	// Additional tests
	// Test 1: Check if the function works with a length of 0
	assert(ft_strncmp("Hello", "Hello", 0) == 0); // Expected: 0, no characters are compared

	// Test 2: Check if the function works with an empty string
	assert(ft_strncmp("", "Hello", 5) < 0); // Expected: <0, "" is less than "Hello"
}

void test_ft_atoi() {
	// Whitespace handling
	assert(ft_atoi("   42") == 42); // Expected: 42, leading whitespaces are skipped

	// Empty string
	assert(ft_atoi("") == 0); // Expected: 0, empty string returns 0

	// Sign handling
	assert(ft_atoi("+42") == 42); // Expected: 42, positive sign is handled correctly
	assert(ft_atoi("-42") == -42); // Expected: -42, negative sign is handled correctly

	// Overflow and underflow
	assert(ft_atoi("2147483648") == INT_MAX); // Expected: INT_MAX, overflow is handled
	assert(ft_atoi("-2147483649") == INT_MIN); // Expected: INT_MIN, underflow is handled

	// Invalid leading characters
	assert(ft_atoi("a42") == 0); // Expected: 0, invalid leading character returns 0

	// Numbers with spaces
	assert(ft_atoi("42 ") == 42); // Expected: 42, trailing spaces are skipped
	assert(ft_atoi("+ 42") == 0); // Expected: 0, space after sign is treated as error

	// Non-numeric characters
	assert(ft_atoi("42abc") == 42); // Expected: 42, conversion stops at first non-numeric character

	// Single characters
	for (int i = 0; i <= 255; i++) {
		char str[2] = {(char)i, '\0'};
		assert(ft_atoi(str) == (isdigit(i) ? i - '0' : 0)); // Expected: i - '0' if i is a digit, 0 otherwise
	}
}

int main() {
    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_strlen();
    test_ft_memset();
    test_ft_bzero();
    test_ft_strchr();
    test_ft_strrchr();
    test_ft_strlcat();
    test_ft_strncmp();
	test_ft_atoi();

    printf("All tests passed!\n");

    return 0;
}