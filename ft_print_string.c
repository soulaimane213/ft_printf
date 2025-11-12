#include "ft_printf.h"


int ft_print_string(char *str){

    int i ;
    int count;
    
    i =0;
    count =0;
    while(str[i]){
        write(1 , &str[i], 1);
        i++;
        count++;
    }

    return count;
}