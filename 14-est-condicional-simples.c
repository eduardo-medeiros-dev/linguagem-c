#include <stdio.h>

int main(void) {
    int x;

    printf("Digite um inteiro: ");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("%d eh par", x);
    }

    return 0;
}
