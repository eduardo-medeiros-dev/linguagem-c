#include<stdio.h>


int main(void){

    int lido_com_d, lido_com_i;

    int n = 100;

    // printf -> %d e %i dão exatamente o mesmo resultado

    printf("printf com %%d: %d \n", n);
    printf("printf com %%i: %i \n", n);


    //scanf -> Aqui %d e %i podem se comportar diferente
    // teste digitando 10, depois 010 (zero à esquerda)

    printf("Digite o mesmo número nas duas leituras \n");

    printf("Leitura com %%d: ");
    if (scanf("%d", &lido_com_d) != 1){
        printf("Entrada inválida \n");
        return 1;
    }

       printf("Leitura com %%i: ");
    if (scanf("%i", &lido_com_i) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    // Os dois valores são impressos em decimal (%d) para comparar.
    printf("\nResultado:\n");
    printf("  %%d guardou: %d\n", lido_com_d);
    printf("  %%i guardou: %d\n", lido_com_i);
    //O motivo do 8: o scanf("%i") vê o 0 no início e interpreta o número como octal (base 8). Em octal, os dígitos vão só
    // de 0 a 7, e cada posição vale uma potência de 8:
 
    // Com a entrada 010, a saída esperada é:
    //   %d guardou: 10
    //   %i guardou: 8

    //O %i reconhece mais de uma base, e não só octal:

    //sem zero na frente (10): decimal, igual ao %d;
   //com zero na frente (010): octal;
  //com 0x na frente (0x1F): hexadecimal.
 
   

    return 0;
}




