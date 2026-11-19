#include <stdio.h>

int main(void) {

    char str[50];

    printf("Digite uma string: ");

    // scanf(" %s", str);
    // Não armazena espaços entre palavras.

    // gets(str);
    // FORA DO PADRÃO ATUAL (C11 em diante).
    // Não armazena a tecla Enter (\n).
    // Exemplo: palavra\0

    fgets(str, 50, stdin);
    // Armazena espaços e a quebra de linha (\n), se houver espaço.
    // Exemplo: palavra\n\0

    printf("A string digitada foi: %s", str);

    return 0;
}