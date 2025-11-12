
#include "ft_printf.h"

int ft_print_char(char c ){

    int count ;
    count =0;

    write(1 , &c, 1);
    count++;
    return count;

}
