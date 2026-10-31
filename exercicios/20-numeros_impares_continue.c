#include<stdio.h>



int main(void){


    int numero = 0;

    while(numero < 10){
        numero++;


        if(numero % 2 == 0){
            continue;
        }

        printf("%d\n", numero);
    }
    

    return 0;
}