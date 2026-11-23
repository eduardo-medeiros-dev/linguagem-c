#include<stdio.h>




int main(void){

    char palavra[10];

    printf("Digite uma palavra:\n");
    scanf("%9s", palavra);


    printf("\nPalavra armazenada: %s\n", palavra);

    printf("\n Letras da palavra:\n");


    for (int i = 0; palavra[i] != '\0'; i++) {
        printf("%c\n", palavra[i]);
        // Quando encontra '\0', o loop termina.
    }

    return 0;
}