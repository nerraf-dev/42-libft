#include "../libft.h"

// Tests return 0 on success, 1 on failure
int test_ft_strlen() {
    if (ft_strlen("Hello") != 5) {
        return 1;
    }
    if (ft_strlen("") != 0) {
        return 1;
    }
    if (ft_strlen("1234567890") != 10) {
        return 1;
    }
    if (ft_strlen("a") != 1) {
        return 1;
    }
    if (ft_strlen(" ") != 1) {
        return 1;
    }
    if (ft_strlen("\t\n\v\f\r ") != 6) {
        return 1;
    }
    if (ft_strlen("GitHub Copilot") != 14) {
        return 1;
    }
    
    return 0;
}