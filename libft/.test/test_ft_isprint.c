#include "../libft/libft.h"

// Tests return 0 on success, 1 on failure
int test_ft_isprint() {
    for (int i = 0; i < 128; i++) {
        if (i >= 32 && i <= 126) {
            if (ft_isprint(i) != 1) {
                return 1;
            }
        } else {
            if (ft_isprint(i) != 0) {
                return 1;
            }
        }
    }
    for (int i = 128; i <= 255; i++) {
        if (ft_isprint(i) != 0) {
            return 1;
        }
    }
    return 0;
}
