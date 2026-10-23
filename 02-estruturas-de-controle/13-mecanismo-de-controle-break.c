#include <stdio.h>

int main(void)
{

    int entrada;
    do
    {
        printf("Digite um número inteiro positvo para ser eh par ou impar\n"
               "ou um número negativo para sair do programa:  ");
        scanf("%d", &entrada);
        if (entrada < 0)
            break;
        if (entrada % 2 == 0)
            printf("%d eh par \n", entrada);
        else
            printf("%d eh impar\n", entrada);

    } while (1);

    return 0;
    /*O do-while executa o bloco ao menos uma vez, e com while (1) a condição é sempre verdadeira, então o laço só termina pelo break
    . Aqui o break encerra o laço na hora, sem rodar o resto do bloco, quando o usuário digita um número negativo.
     Enquanto o número for positivo, o programa diz se ele é par ou ímpar com entrada % 2 == 0.*/
}