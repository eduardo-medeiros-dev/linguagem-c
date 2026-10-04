#include <stdio.h>

int main(void) {

    /*Como em C não existe um tipo booleano, a condição do comando if
    considera que 0 é falso e qualquer coisa diferente disso é verdadeiro.
    */

    int x;

    printf("Digite um inteiro: ");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("%d eh par", x);
    }else{
        printf("%d eh impar", x);
    }

    return 0;
}
