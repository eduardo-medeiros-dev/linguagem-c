#include <stdio.h>

int main(void)
{
    int numero_usuario;
    int contador = 1;

    printf("Digite um número inteiro: ");
    if (scanf("%d", &numero_usuario) != 1)
    {
        printf("Valor inválido\n");
        return 1;
    }

    while (contador <= numero_usuario)
    {
        printf("%d\n", contador);
        contador++;
    }

    return 0;
}