#include <stdio.h>

int main(void) {

   /* O C original não tinha tipo booleano. Por isso, na condição do if,
   0 é falso e qualquer valor diferente de 0 é verdadeiro.
   (Desde o C99 existe o tipo bool em <stdbool.h>, mas a regra continua a mesma.) */

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
