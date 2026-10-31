#include <stdio.h>
 
int main(void)
{
    int entrada;
 
    do
    {
        printf("Digite um número inteiro positivo para ver se eh par ou impar\n"
               "ou um número negativo para sair do programa: ");
        if (scanf("%d", &entrada) != 1)
        {
            printf("Valor inválido\n");
            return 1;
        }
 
        if (entrada < 0)
            continue;
 
        if (entrada % 2 == 0)
            printf("%d eh par\n", entrada);
        else
            printf("%d eh impar\n", entrada);
 
    } while (entrada >= 0);
 
    return 0;
}
 