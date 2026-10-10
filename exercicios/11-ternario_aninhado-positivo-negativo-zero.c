
#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    int resultado = numero > 0 ? 1 : numero < 0 ? -1 : 0;

    printf("Resultado: %d\n", resultado);

    return 0;
}