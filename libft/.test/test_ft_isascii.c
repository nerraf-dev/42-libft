#include "../libft.h"

// Tests return 0 on success, 1 on failure
int test_ft_isascii() {
    if (ft_isascii('A') != 1) {
        return 1;
    }
    if (ft_isascii('1') != 1) {
        return 1;
    }
    if (ft_isascii('0') != 1) {
        return 1;
    }
    if (ft_isascii('9') != 1) {
        return 1;
    }
    if (ft_isascii('a') != 1) {
        return 1;
    }
    if (ft_isascii('Z') != 1) {
        return 1;
    }
    if (ft_isascii('z') != 1) {
        return 1;
    }
    if (ft_isascii('!') != 1) {
        return 1;
    }
    if (ft_isascii('@') != 1) {
        return 1;
    }
    if (ft_isascii('[') != 1) {
        return 1;
    }
    if (ft_isascii('`') != 1) {
        return 1;
    }
    if (ft_isascii('{') != 1) {
        return 1;
    }
    if (ft_isascii('\t') != 1) {
        return 1;
    }
    if (ft_isascii('\n') != 1) {
        return 1;
    }
    if (ft_isascii('\v') != 1) {
        return 1;
    }
    if (ft_isascii('\f') != 1) {
        return 1;
    }
    if (ft_isascii('\r') != 1) {
        return 1;
    }
    if (ft_isascii(' ') != 1) {
        return 1;
    }
    if (ft_isascii(0) != 1) {
        return 1;
    }
    if (ft_isascii(127) != 1) {
        return 1;
    }
    if (ft_isascii(128) != 0) {
        return 1;
    }
    if (ft_isascii(255) != 0) {
        return 1;
    }   
    return 0;
}