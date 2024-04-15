#include "../libft/libft.h"

// Tests return 0 on success, 1 on failure
int test_ft_isdigit() {
    for (int i = 0; i < 10; i++) {
        if (!ft_isdigit('0' + i)) {
            return 1;
        }
    }

    if (ft_isdigit('a')) {
        return 1;
    }

    if (ft_isdigit(' ')) {
        return 1;
    }

    if (ft_isdigit('\t')) {
        return 1;
    }

    if (ft_isdigit('\n')) {
        return 1;
    }

    if (ft_isdigit('\v')) {
        return 1;
    }

    if (ft_isdigit('\f')) {
        return 1;
    }

    if (ft_isdigit('\r')) {
        return 1;
    }

    return 0;
}