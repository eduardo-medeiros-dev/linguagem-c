#include<stdio.h>



int main(void){

    double nota;
    double media;
    double soma = 0;
    int contador = 0;
    do
    {
        printf("Digite suas notas para descobrir sua média geral:\n");
        printf("Digite 0 para encerrrar o programa!!!\n");
        if(scanf("%lf", &nota)!=1){
               printf("Valor inválido!!!");
            return 1;
    
        }
            soma+= nota;
            contador = contador + 1;
            if(nota == 0){
                contador = contador -1;
                break;
            }

    } while (nota != 0);


    media =  soma/contador;
    printf("Média final: %.2f", media);
    printf("Valor de contador: %d", contador);
    return 0;
    
}

