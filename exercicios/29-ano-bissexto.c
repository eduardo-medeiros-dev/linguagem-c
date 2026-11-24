
#include <stdio.h>

int main(void) {

    int anoDeNascimento;

    printf("Digite o ano do seu nascimento:\n");

    if (scanf("%d", &anoDeNascimento) != 1) {
        printf("Valor invalido!\n");
        return 1;
    }

    if (anoDeNascimento % 400 == 0) {
        printf("%d eh bissexto!\n", anoDeNascimento);
    }
    else if (anoDeNascimento % 100 == 0) {
        printf("%d nao e bissexto!\n", anoDeNascimento);
    }
    else if (anoDeNascimento % 4 == 0) {
        printf("%d e bissexto!\n", anoDeNascimento);
    }
    else {
        printf("%d nao e bissexto!\n", anoDeNascimento);
    }

    return 0;
}
