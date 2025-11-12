#include "ft_printf.h"

int get_power(long nbr){

    int result;
    
    result =1;
    while(nbr >= 10){
        nbr /=10;
        result *= 10;
    }
    
    return result;

}

int get_count(long nbr){
    int i = 0;
    if (nbr == 0)
        return 1;
    while(nbr > 0){
        nbr /= 10;
        i++;
    }
    return i;
}

int ft_print_digits(int nbr){

    int digit_count;
    int power ;
    char c;
    long num;

    num = nbr;
    power =0;
    
    digit_count =0;
    
     if(nbr < 0 ){
        write(1 , "-" ,1);
        digit_count = 1;
        num = -num;
        
    }

    digit_count += get_count(num);
    power = get_power(num);

    while(power > 0){
        c = (num / power) % 10 + 48;
        write(1 , &c , 1);
        power /= 10;
    }
    
    return digit_count;

}

