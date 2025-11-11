#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "header.h"



int f_printf( va_list args, int *i , char c){
	
	int counter ;

	counter=0;

			if(c == 'c')
				counter +=	ft_print_char(va_arg(args, int));
			if(c == 's')
				counter +=	ft_print_string(va_arg(args, char *));
			if(c == 'p')
				counter +=	ft_print_address(va_arg(args, unsigned long int));
			if(c == 'd' || c == 'i')
				counter +=	ft_print_digits(&i , va_arg(args, int));
			// if(c == 'x' || c == 'X')
			// 	counter +=	ft_print_hex(&i , va_arg(args, int));
			// if(c == '%')
			// 	counter +=	ft_print__format(&i , va_arg(args, int));
			// if(c == 'u')
			// 	counter +=	ft_printf_unsigend(&i , va_arg(args, int));
				
		return counter;
}


int ft_printf(const char *str , ...){

	int counter;
	int i;
	va_list args;
	va_start(args , str);
	
	i =0;
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

int main(){
	char c = 'e';
	char str[] = "hello world";
	ft_printf("%p           ddddddddddd%s\n%c\n", str , str ,c );
	printf("%p           ddddddddddd%s\n%c\n" , str , str ,c);
}
