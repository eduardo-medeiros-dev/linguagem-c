

/*
Esta é a mesma ideia do desafio do dia da semana, mas trocando os números soltos
 (case 1, case 2, case 3, ....) por nomes (case Domingo, case Segunda,...).


 O enum é uma lista de constantes inteiras com nome. Por dentro, cada nome é
 só um int. O switch continua comparando por igualdade, igaul antes.
*/


#include<stdio.h>

// Cada nome vira um número. Como Domingo = 1, os outros seguem em ordem:
// Domingo = 1, Segunda = 2,.....
// Se nãa tivesse o "= 1", a contagem começaria em 0 (o padrão do enum).


 enum DiaDaSemana{Domingo,Segunda,Terca,Quarta,Quinta,Sexta, Sabado};


int main(void){

    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);



    enum DiaDaSemana dia = numero;


    switch(dia) {

        case Domingo:
          printf("Domingo\n");
          break;
        case Segunda:
          printf("Segunda-Feira\n");
          break;
        case Terca:
          printf("Terça-Feira\n");
          break;
        case Quarta:
          printf("Quarta-Feira\n");
          break;
        case Quinta:
           printf("Quinta-Feira\n");
           break;
        case Sexta:
           printf("Sexta-Feira\n");
           break;
        case Sabado:
           printf("Sábado\n");
           break;
        

        default:
           printf("Dia inválido!!!\n");

    }

    /*
    O switch com enum funciona exatamente como o switch com números. A diferença é que
     o enum dá nomes aos números, deixando o código
     legível, fácil de mudar em um só lugar e com um aviso do compilador para case esquecido.
     */


}