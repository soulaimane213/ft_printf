#include "header.h"



int print_digits(int nbr){

    int count;

    
    if(nbr == -2147483648){
        write( 1, "-2147483648" ,11);
        return 11;
    }
    if(nbr < 0){
        count = 1;
        nbr *= -1;
    }

    count = get_count(nbr);


    


}

