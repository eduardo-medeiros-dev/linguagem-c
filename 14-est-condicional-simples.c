#include <stdio.h>

int main(void) {
    int x;

    printf("Digite um inteiro: ");
    scanf("%d", &x);


    if (x % 2 == 0) {
        // Sentença subordinada ao if: só executa se a condição for verdadeira.
        // Se for falsa, o C pula este bloco e executa o else.
        printf("%d eh par\n", x);
    } else {
         // Sentença subordinada ao else: só executa se a condição for falsa.
        printf("%d eh impar\n", x);
       
    }

    return 0;
}
