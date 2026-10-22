#include <stdio.h>

int main(void)
{

    int entrada, verifica;
   
    do
    {
        printf("Digite um número inteiro: \n");
        scanf("%d", &entrada);
        if (entrada % 2 == 0)
            printf("O número eh par\n");
        else
            printf("O número eh impar\n");
        printf("Gostaria de digitar um novo número? 1 = Inserir novo número -1 Encerra programa\n");
        scanf("%d", &verifica);
    } while (verifica != -1);
}