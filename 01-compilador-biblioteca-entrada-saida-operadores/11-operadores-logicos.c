#include<stdio.h>

int main(void){

    // Operador relacional retorna verdadeiro ou falso
    int relacional = 1 == 1;
   // Operador de negação inverte verdadeiro e falso
    int a = !relacional;

    //resultado
    printf("!a ou !verdadeiro = %i\n", a);


    //Operador E
    // Operadores relacionais que retornam verdadeiro ou falso
    int relacional2 = (5>3);
    int relacional3 = (5>4);
    printf("5 > 3? %i\n", relacional2);
    printf("5 > 4? %i\n", relacional3);

    int comparacao_e = relacional2 && relacional3;
    printf("%i E %i = %i\n", relacional2, relacional3, comparacao_e);
    printf("1 E 0 = %i\n", (5 > 3) && (5 > 7));

    //Operador OU
    int comparacao_ou = (5>8) || (5>7);
    printf("5 > 8 OU 5 > 7: %i", comparacao_ou);





    return 0;



}