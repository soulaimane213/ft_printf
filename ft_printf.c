#include "ft_printf.h"



int f_printf( va_list args, int *i , char c){
	
	int counter ;

	counter=0;

			if(c == 'c')
				counter +=	ft_print_char(va_arg(args, int));
			if(c == 's')
				counter +=	ft_print_string(va_arg(args, char *));
			if(c == 'p')
				counter +=	ft_print_address(va_arg(args, void *));
			if(c == 'd' || c == 'i')
				counter +=	ft_print_digits(va_arg(args, int));
			if(c == 'x' || c == 'X')
				counter +=	ft_print_hex( va_arg(args,  unsigned int) , c);
			 if(c == '%')
				counter +=	 ft_print_format('%');
			if(c == 'u')
				counter += ft_printf_unsigned(va_arg(args, unsigned int));

				
		return counter;
}


int ft_printf(const char *str , ...){

	if(str == NULL)
		return -1;

	int counter;
	int i;
	va_list args;
	va_start(args , str);
	
	i =0;
	counter =0;
	while(str[i]){

		if(str[i] == '%'){
			i++;
			counter+= f_printf(args , &i , str[i]);
			i++;
			continue;
		}else {
			counter += ft_print_char(str[i]);
		}
		i++;
	}
	
	return counter;

}
