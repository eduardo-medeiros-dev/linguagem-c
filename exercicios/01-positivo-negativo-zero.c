#include<stdio.h>


int main(void){

    int number;
    printf("Digite um numero: ");
    scanf("%i", &number);

    if(number > 0){
        printf("%i é positivo\n", number);
    }else if(number < 0){
        printf("%i é negativo\n", number);
    }else{
        printf("Zero");
    }

    return 0;

}