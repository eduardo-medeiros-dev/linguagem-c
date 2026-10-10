#include<stdio.h>


int main(void){

    int number;
    int soma_de_gauss;

    printf("Digite um número positivo:\n");
    scanf("%i", &number);


     soma_de_gauss = (1 + number) * number / 2;

    printf("Soma de gauss com o valor positivo do usúario: %i\n", soma_de_gauss);
    return 0;

    
}