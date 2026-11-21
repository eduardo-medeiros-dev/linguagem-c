#include <stdio.h>

int main(void)
{


    int numeros_do_usuario[10];
  

    printf("Digite 10 números aqui: \n");
    
    for(int i = 0; i < 10; i++){
        printf("Digite:\n");
        scanf("%d", &numeros_do_usuario[i]);
        printf("Valor armazenado!!!\n");
    }
      int maior_valor = numeros_do_usuario[0];
      int menor_valor = numeros_do_usuario[0];


    for(int i = 1; i < 10; i++){
        if(numeros_do_usuario[i] > maior_valor){
            maior_valor = numeros_do_usuario[i];
        }

    }

    for(int i = 1; i < 10; i++){
        if(numeros_do_usuario[i] < menor_valor){
            menor_valor = numeros_do_usuario[i];
        }
    }
    printf("O maior valor dentro do array eh: %d\n", maior_valor);
    printf("O menor valor dentro do array eh: %d\n", menor_valor);


   printf("Valores armazenados:\n");
    for(int i = 0; i < 10; i++){
        printf("%d - ", numeros_do_usuario[i]);
    }

    return 0;
}