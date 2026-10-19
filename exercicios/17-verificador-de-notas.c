#include <stdio.h>

int main(void)
{

    int nota;

    printf("Digite sua nota: ");
    if (scanf("%d", &nota) != 1)
    {
        printf("Valor inválido!!!\n");
        return 1;
    }

    if (nota < 0 || nota > 100)
    {
        printf("Nota inválida!!!\n");
        return 1;
    }

    if (nota >= 60 && nota <= 69)
    {
        printf("Nota: D\n");
    }
    else if (nota >= 70 && nota <= 79)
    {
        printf("Nota: C\n");
    }
    else if (nota >= 80 && nota <= 89)
    {
        printf("Nota: B\n");
    }
    else if (nota >= 90 && nota <= 100)
    {
        printf("Nota: A\n");
    }
    else
    {
        printf("Nota: F\n");
    }

    return 0;
}