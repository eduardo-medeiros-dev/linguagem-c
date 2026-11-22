
#include <stdio.h>

int main(void)
{

    int vetor[10];
    int vetor_par[10];
    int vetor_impar[10];

    int contador_par = 0;
    int contador_impar = 0;

    printf("Digite 10 numeros inteiros:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor:\n");
        scanf("%d", &vetor[i]);
        printf("Valor armazenado!\n");
    }
    for (int i = 0; i < 10; i++)
    {

        if (vetor[i] % 2 == 0)
        {

            vetor_par[contador_par] = vetor[i];
            contador_par++;
        }
        else
        {

            vetor_impar[contador_impar] = vetor[i];
            contador_impar++;
        }
    }

    printf("\nValores pares:\n");

    for (int i = 0; i < contador_par; i++)
    {
        printf("%d ", vetor_par[i]);
    }

    printf("\nValores impares:\n");

    for (int i = 0; i < contador_impar; i++)
    {
        printf("%d ", vetor_impar[i]);
    }

    
    printf("\n\nQuantidade de pares: %d", contador_par);
    printf("\nQuantidade de impares: %d\n", contador_impar);

    return 0;
}
