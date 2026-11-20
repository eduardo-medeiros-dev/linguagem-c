#include <stdio.h>

int main(void)
{

    int totalDePessoas = 0;

    printf("Quantidade de pessoas para cadastrar? (máximo: 10)\n");
    if (scanf("%d", &totalDePessoas) != 1)
    {
        printf("Valor inválido!!!\n");
        return 1;
    }

    while (totalDePessoas < 1 || totalDePessoas > 10)
    {
        printf("Valor digitado não atende aos requisitos!!!\n");
        printf("Digite novamente: ");
        if (scanf("%d", &totalDePessoas) != 1)
        {
            printf("Valor inválido!\n");
            return 1;
        }
    }
    char nomes_das_pessoas[totalDePessoas][50];
    // Cria matriz de strings para armazenar até 10 nomes

    for (int i = 0; i < totalDePessoas; i++)
    {
        printf("Insira o nome da pessoa:\n");
        scanf("%49s", nomes_das_pessoas[i]);
        //Aplica scanf com limite de caracteres (%49s)
    }

    printf("Nomes cadastrados:\n");
    for (int i = 0; i < totalDePessoas; i++)
    {
        printf("%s\n", nomes_das_pessoas[i]);
    }

    return 0;
}