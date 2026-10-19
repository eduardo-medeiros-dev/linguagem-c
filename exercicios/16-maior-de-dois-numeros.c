#include <stdio.h>

int main(void)
{
    int primeiro_numero;
    int segundo_numero;

    printf("Digite dois valores: ");
    if (scanf("%d %d", &primeiro_numero, &segundo_numero) != 2)
    {
        printf("Valor inválido\n");
        return 1;
    }

    if (primeiro_numero > segundo_numero)
    {
        printf("%d\n", primeiro_numero);
    }
    else if (primeiro_numero < segundo_numero)
    {
        printf("%d\n", segundo_numero);
    }
    else
    {
        printf("=\n");
    }

    return 0;
}
