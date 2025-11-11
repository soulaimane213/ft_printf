#include "header.h"


int ft_print_address(unsigned long nbr ){

    char hex[] = "0123456789abcdef";
    int count;

    count =0;    

    if(nbr >= 16){ 
        ft_print_address(nbr / 16);
    }
    if(nbr < 16){
    write(1 , "0x" ,2);


    }

    write(1 ,&hex[nbr % 16],1 );
    count++;

}