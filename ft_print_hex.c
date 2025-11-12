#include "ft_printf.h"

int ft_print_hex(unsigned int nbr, char spec) {
    char *hex = (spec == 'x') ? "0123456789abcdef" : "0123456789ABCDEF";
    int count = 0;

    if (nbr >= 16)
        count += ft_print_hex(nbr / 16, spec);

    char c = hex[nbr % 16];
    write(1, &c, 1);
    count++;

    return count;
}