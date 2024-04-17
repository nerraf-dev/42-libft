#include "../libft.h"

// Tests return 0 on success, 1 on failure
int test_ft_isalnum() {
    for (int i = 0; i < 10; i++) {
        if (!ft_isalnum('0' + i)) {
            return 1;
        }
    }

    for (char c = 'a'; c <= 'z'; c++) {
        if (!ft_isalnum(c)) {
            return 1;
        }
    }

    for (char c = 'A'; c <= 'Z'; c++) {
        if (!ft_isalnum(c)) {
            return 1;
        }
    }

    if (ft_isalnum(' ')) {
        return 1;
    }

    if (ft_isalnum('\t')) {
        return 1;
    }

    if (ft_isalnum('\n')) {
        return 1;
    }

    if (ft_isalnum('\v')) {
        return 1;
    }

    if (ft_isalnum('\f')) {
        return 1;
    }

    if (ft_isalnum('\r')) {
        return 1;
    }

    return 0;
}