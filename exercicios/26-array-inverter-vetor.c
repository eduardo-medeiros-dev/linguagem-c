#include <stdio.h>

int main(void) {

    int vetor[8];
    int armazenar_parcial;

    printf("Digite 8 valores:\n");

    for (int i = 0; i < 8; i++) {
        printf("Digite:\n");
        scanf("%d", &vetor[i]);
    }

  
    for (int i = 0; i < 4; i++) {

        armazenar_parcial = vetor[i];

        vetor[i] = vetor[7 - i];

        vetor[7 - i] = armazenar_parcial;
    }

    printf("Vetor invertido:\n");

    for (int i = 0; i < 8; i++) {
        printf("%d - ", vetor[i]);
    }

    return 0;
}