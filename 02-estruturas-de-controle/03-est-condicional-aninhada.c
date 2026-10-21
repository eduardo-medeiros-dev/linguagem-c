#include<stdio.h>

int main(void){

    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    if(x < 0)
    printf("%d eh negativo!", x);
    else
    {
        if(x == 0)
        printf("%d eh zero!", x);
        else
        printf("%d eh positivo");
    }

    // if (condicao) sentença;
    // if (condicao) sentença else sentença

}