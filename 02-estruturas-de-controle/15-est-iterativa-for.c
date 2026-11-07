#include<stdio.h>



int main(void){



    //CONTADOR
    //1.Contador é a variavel que conta a quantidade de iterações
    //2.Pode ser indicado mais de uma variavel
    //3.Quase sempre a variavel dentro de uma estrutura, seja como contador, ou nas sentenças
    //faz com que essa variavel só exista durante a execução dessa estrutura
    //CONDIÇÃO
    //1.Em geral é aplicada sobre a variavel do contador
    //2.Operações se encerram quando a condição for falsa(zero)
    //3.E se nenhuma condição for definida, a estrutura funciona como um laço infinito
    //Sendo necessario medidas de controle dentro das sentenças subordinadas
    
    for(int i = 0; i <= 10; i++){
        printf("Contagem:  %d\n", i);
    }
    


    return 0;
}