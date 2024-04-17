#include "../libft/libft.h"

// Tests return 0 on success, 1 on failure
int test_ft_isalpha() {
    if (ft_isalpha('A') != 1) {
        return 1;
    }
    if (ft_isalpha('1') != 0) {
        return 1;
    }
    if (ft_isalpha('0') != 0) {
        return 1;
    }
    if (ft_isalpha('9') != 0) {
        return 1;
    }
    if (ft_isalpha('a') != 1) {
        return 1;
    }
    if (ft_isalpha('Z') != 1) {
        return 1;
    }
    if (ft_isalpha('z') != 1) {
        return 1;
    }
    if (ft_isalpha('!') != 0) {
        return 1;
    }
    if (ft_isalpha('@') != 0) {
        return 1;
    }
    if (ft_isalpha('[') != 0) {
        return 1;
    }
    if (ft_isalpha('`') != 0) {
        return 1;
    }
    if (ft_isalpha('{') != 0) {
        return 1;
    }
    
    return 0;
}