#include<stdio.h>


int main(void){


    const int qt = 10;
    float array[qt];
    float media = 0;

    for(int i = 0; i < qt; i++){
        printf("Digite um número:\n");
        scanf(" %f", &array[i]);
        media+= array[i];

    }

    media = media / qt;
    printf("  Média: %.2f", media);

    return 0;
}