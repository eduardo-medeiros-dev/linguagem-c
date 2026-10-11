#include<stdio.h>


int main(void){


    int primeiro_numero, segundo_numero;

    printf("Digite dois números: ");
    scanf("%d %d", &primeiro_numero, &segundo_numero);

    int soma, subtracao, mult;
    float divisao;



    soma = primeiro_numero + segundo_numero;
    printf("Soma: %2d\n", soma);
    subtracao = primeiro_numero - segundo_numero;
    printf("Subtração: %2d\n", subtracao);
    mult = primeiro_numero * segundo_numero;
    printf("mult %2d\n", mult);
   
    if(segundo_numero != 0){
        divisao =  (float)primeiro_numero / segundo_numero;
        printf("Divisão: %.2f", divisao);
    }else{
        printf("Não é possível dividir por zero.");
    }

    return 0;



}