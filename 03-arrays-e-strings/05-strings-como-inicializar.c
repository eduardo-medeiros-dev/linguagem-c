#include<stdio.h>




// Array, sequência de variaveis (tamanho definido)
// String, sequência de variaveis do tipo char (tamanho definido)
// Vetor, sequência de variaveis sem tamanho definido

int main(void){

    // Possiveeis maneiras de inicializar uma string;
    //maneira 1
    char str[10];
    str[0] = 'O';
    str[1] = 'i';
    str[2] = '!';
    str[3] = '\0';


    // Maneira 2
    char str2[] = {'O', 'i'. '!', '\0'};


    // Maneira 3
    char str3[] = "Oi!";

return 0;

}