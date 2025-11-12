#include "ft_printf.h"


int ft_print_address(void *ptr)
{
    char *hex = "0123456789abcdef";
    int count = 0;
    unsigned long nbr = (unsigned long)ptr;

    if (nbr == 0) {
        write(1, "0x0", 3);
        return 3;
    }

    write(1, "0x", 2);
    count += 2;

    unsigned long buffer[16];
    int j = 0;
    while (nbr > 0) {
        buffer[j++] = nbr % 16;
        nbr /= 16;
    }

    for (int i = j - 1; i >= 0; i--) {
        write(1, &hex[buffer[i]], 1);
        count++;
    }

    return count;
}