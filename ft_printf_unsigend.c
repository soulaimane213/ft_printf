#include "ft_printf.h"
#include <unistd.h>

static int get_power(unsigned int nbr) {
    int result = 1;
    while (nbr >= 10) {
        nbr /= 10;
        result *= 10;
    }
    return result;
}

static int get_count(unsigned int nbr) {
    int i = 0;
    while (nbr > 0) {
        nbr /= 10;
        i++;
    }
    return i;
}

int ft_printf_unsigned(unsigned int nbr) {
    if (nbr == 0) {
        write(1, "0", 1);
        return 1;
    }

    int digit_count = get_count(nbr);
    int power = get_power(nbr);
    char c;

    while (power > 0) {
        c = (nbr / power) % 10 + '0';
        write(1, &c, 1);
        power /= 10;
    }

    return digit_count;
}