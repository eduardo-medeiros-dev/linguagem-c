#include <stdio.h>

// Calculando a média de 3 números sem o uso de array

int main(void)
{

    // Tamanho do array (3) * tamanho do tipo de dado (float)
    // Quando reservamos 3 espaços, o primeirp é acessado pelo indice 0
    //  O segundo pelo indice 1 e o terceiro pelo indice 2
    //  OBSERVE QUE O INDICE 3 NÃO EXISTE

    float n[3];
    printf("Digite 3 números: ");
    scanf("%f %f %f", &n[0], &n[1], &n[2]);
    float media = (n[0] + n[1] + n[2]) / 3;
    printf("A média dos números eh: %.2f\n", media);

    return 0;
}