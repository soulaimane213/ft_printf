#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>


int ft_printf(const char *format, ...){

	int i =0;
	int flag =0;
	
	va_lsit args;
	va_start(args , format);


	while( format[i] != 0){	 
		if(format[i] == '%'  && format[i + 1] != '%'){
			if(format[i + 1] == 'c')
				ft_print_char(format[i + 1] , &i , );
			if(format[i + 1] == 's')
				ft_print_string(format[i + 1]);
			if(format[i + 1] == 'd')
				ft_printf_decimale(format[i + 1]);
			if(format[i + 1] == 'i')
				ft_print_integer(format[i + 1]);
			if(format[i + 1] == 'p')
				ft_print_address(format[i + 1]);
			if(format[i + 1] == 'x')
				ft_print_lower_hex(format[i + 1]);
			if(format[i + 1] == 'X')
				ft_printf_upper_hex(format[i + 1]);
		}else if(format[i] == '%' && format[i + 1] == '%' ){
			write(1 , "%"  , 1);
		}else{
			write(1 , &fromat[i] , 1);
		}
		i++;
	}

}






int main(){

	char var_c = 'f';
	ft_printf("%c" , var_c);



}
