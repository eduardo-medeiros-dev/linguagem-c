#include<stdio.h>


int main(void){
    int x = 7;
    printf("%f\n", x);
    return 0;
}


 /*Estudo: avisos do compilador com -Wall e -Wextra


 
     RESUMO DO QUE APRENDI

 * Compilar assim funciona, mas o gcc fica quieto sobre muitos problemas:
      gcc main.c -o teste
 
 * Compilar assim é melhor, porque o gcc avisa sobre possíveis bugs:
    gcc -Wall -Wextra main.c -o teste

    -Wall   : avisos mais comuns (marcador do printf que não bate com o
             tipo, variável usada sem valor, variável nunca usada,
             "=" no lugar de "==", ...)
   -Wextra : avisos adicionais (parâmetro de função não usado,
            comparação suspeita entre tipos diferentes, ...)
 */
