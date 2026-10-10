#include<stdio.h>


int main(void){

    int numero;
    printf("Digite um número: \n");
    scanf("%d", &numero);

    int resultado = numero % 2 == 0? 1 : 0; 

    
    if(resultado == 1){
        printf("par\n");
    }else{
        printf("impar\n");
    }

    return 0;

    /*  Alternativa usando o ternário diretamente:
    
    numero % 2 == 0? printf("par\n") : printf("impar\n");
    */


}

