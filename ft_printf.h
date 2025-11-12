#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <unistd.h>
#include <unistd.h>

int ft_print_char(char c );
int ft_print_string(char *str);
int ft_print_address(void *ptr);
int ft_print_digits(int nbr);
int ft_print_hex(unsigned int nbr , char spec );
int ft_print_format(char c);
int ft_printf_unsigned(unsigned int nbr);
int ft_printf(const char *str , ...);




#endif 