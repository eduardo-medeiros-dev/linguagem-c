#include<stdio.h>

int main(void){

    //Caracteres
    char nome_da_variavel = 'a'; //-127 a 127
    unsigned char variavel4 = 1; // 0 a 255
    printf("Imprimindo a variavel do tipo char: %c\n", nome_da_variavel);
    printf("Imprimindo duas variaveis no mesmo print: %c %c\n", nome_da_variavel, variavel4);
    //Números inteiros
    short int nome_da_variavel2 = 100;
    int nome_da_variavel3 = 200;
    long int nome_da_variavel4 = 300;
    printf("short int: %i\n", nome_da_variavel2);
    printf("int: %i\n", nome_da_variavel3);
    printf("long: %li\n", nome_da_variavel4);

    unsigned short int variavel1 = 400;
    unsigned int variavel2 = 500;
    unsigned long int variavel3 = 600;
    printf("u short int: %i\n", variavel1);
    printf("u int: %i\n", variavel2);
    printf("u long int: %lu\n", variavel3);
    //Números reais

    float nome_da_variavel5 = 600.5f;
    double nome_da_variavel6 = 700.5;
    long double nome_da_variavel7 =  3.9e-23L; 
    printf("float: %f\n", nome_da_variavel5);
    printf("double: %f\n", nome_da_variavel6);
    //Problema
    //Deveriamos converter o conteudo da variavel 7 para uma string, sequencia de caracteres
    printf("long double: %e\n", (double)nome_da_variavel7);
    //demostração de uso de uma string
    char nome[] = "Eduardo";
    printf("Impressao de string: %s\n", nome);


    //Constante nomeada

    const int MAX = 100;
    printf("const int: %i", MAX);


    /*Este é um comentário de mais de uma linha
    ....*/
    return 0;
}