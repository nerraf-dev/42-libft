/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:36:19 by sfarren           #+#    #+#             */
/*   Updated: 2024/04/11 15:36:49 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "libft.h"

void test_ft_isalnum() {
    assert(ft_isalnum('a') >=1);
    assert(ft_isalnum('z') >=1);
    assert(ft_isalnum('A') >=1);
    assert(ft_isalnum('Z') >=1);
    assert(ft_isalnum('0') >=1);
    assert(ft_isalnum('9') >=1);
    assert(ft_isalnum('@') == 0);
    assert(ft_isalnum('[') == 0);
    assert(ft_isalnum('`') == 0);
    assert(ft_isalnum('{') == 0);
}

void test_ft_isdigit() {
    assert(ft_isdigit('0') >=1);
    assert(ft_isdigit('9') >=1);
    assert(ft_isdigit('a') == 0);
    assert(ft_isdigit('@') == 0);
    assert(ft_isdigit('[') == 0);
    assert(ft_isdigit('`') == 0);
    assert(ft_isdigit('{') == 0);
}

void test_ft_isalpha() {
    assert(ft_isalpha('a') >=1);
    assert(ft_isalpha('z') >=1);
    assert(ft_isalpha('A') >=1);
    assert(ft_isalpha('Z') >=1);
    assert(ft_isalpha('0') == 0);
    assert(ft_isalpha('@') == 0);
    assert(ft_isalpha('[') == 0);
    assert(ft_isalpha('`') == 0);
    assert(ft_isalpha('{') == 0);
}

void test_ft_isascii() {
    assert(ft_isascii(0) ==1);
    assert(ft_isascii(127) ==1);
    assert(ft_isascii(128) == 0);
    assert(ft_isascii(255) == 0);
}

void test_ft_isprint() {
    assert(ft_isprint(32) ==1);
    assert(ft_isprint(126) ==1);
    assert(ft_isprint(31) == 0);
    assert(ft_isprint(127) == 0);
}

void test_ft_strlen() {
    assert(ft_strlen("") == 0);
    assert(ft_strlen("a") == 1);
    assert(ft_strlen("abc") == 3);
}

void test_ft_memset() {
    char buffer[10];

    ft_memset(buffer, 'a', 10);
    for (int i = 0; i < 10; i++) {
        assert(buffer[i] == 'a');
    }
}

void test_ft_bzero() {
    char buffer[10] = "abcdefghij";

    ft_bzero(buffer, 10);
    for (int i = 0; i < 10; i++) {
        assert(buffer[i] == '\0');
    }
}

int main() {
    test_ft_isalnum();
    test_ft_isdigit();
    test_ft_isalpha();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_strlen();
    test_ft_memset();
    test_ft_bzero();

    printf("All tests passed!\n");

    return 0;
}