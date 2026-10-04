#include<stdio.h>


int main(void){


    int number;
  
    printf("Digite um numero: ");

    scanf("%i", &number);

    if(number % 2 == 0){
        printf("%i é par");
    }else{
        printf("%i é impar");
    }

    return 0;
}