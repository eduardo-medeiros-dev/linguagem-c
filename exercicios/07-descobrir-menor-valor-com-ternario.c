#include<stdio.h>


int main(void){

    int primeiro_numero;
    int segundo_numero;

    printf("Digite dois números:");
    scanf("%d %d", &primeiro_numero, &segundo_numero);


    int menor_valor = primeiro_numero < segundo_numero ? primeiro_numero : segundo_numero;

    printf("Resultado:  %d\n", menor_valor);

    return 0;
}