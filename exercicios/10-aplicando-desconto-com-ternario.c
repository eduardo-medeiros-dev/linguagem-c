#include<stdio.h>

int main(void){

    float valor_produto;
    int desconto;

    printf("Digite o valor do produto: \n");
    scanf("%f", &valor_produto);

    desconto = valor_produto > 100? 10 : 0;

    valor_produto =  valor_produto -(desconto * valor_produto)/100;

    printf("Valor final: %.2f", valor_produto);

    return 0;


}