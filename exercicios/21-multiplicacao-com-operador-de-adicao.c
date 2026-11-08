#include<stdio.h>

 
int main(void)
{
    int primeiro_numero, segundo_numero;
    int soma = 0;
 
    printf("Digite dois valores: ");
    if (scanf("%d %d", &primeiro_numero, &segundo_numero) != 2)
    {
        printf("Valor inválido\n");
        return 1;
    }
 
    for (int i = 1; i <= segundo_numero; i++)
    {
        soma = soma + primeiro_numero;
    }
 
    printf("Resultado: %d\n", soma);
 
    return 0;
}


