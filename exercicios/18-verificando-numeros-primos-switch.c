
#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero entre 2 e 10: ");

    if (scanf("%d", &numero) != 1) {
        printf("Valor inválido!\n");
        return 1;
    }

    switch (numero) {
        case 2:
        case 3:
        case 5:
        case 7:
            printf("O numero eh primo!\n");
            break;

        case 4:
        case 6:
        case 8:
        case 9:
        case 10:
            printf("O numero nao eh primo!\n");
            break;

        default:
            printf("Numero fora do intervalo permitido!\n");
            break;
    }

    return 0;
}