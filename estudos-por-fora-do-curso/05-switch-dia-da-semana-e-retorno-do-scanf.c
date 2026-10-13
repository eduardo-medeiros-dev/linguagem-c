#include<stdio.h>

int main(void){

    int number;

    printf("Digite um número inteiro: ");
   
     /* - O teclado entrega caracteres ('4' e '5'), não números.
           - O scanf converte lendo os dígitos da esquerda para direita:
              acumulado = acumulado * 10 + dígito
              (0*10+4 = 4, depois 4*10+5 = 45)
            O "acumulado" é uma variável interna do scanf, e o resultado final só é gravado
            em number no fim, pelo endereço (&).
           - O scanf devolve quantos valores leu com sucesso:
               1 -> leu número
               0 -> não leu (ex: o usuário digitou uma letra)


               if (scanf("%d", &number) != 1):
           - Não testa o número digitado (2, 3, 7...). Testa se a leitura deu certo.
           - Se devolveu algo diferente de 1, a entrada é inválida e o programa encerra.
           - Quem decide o que fazer com o número é o switch, mais abaixo.
        */
    if(scanf("%d", &number) != 1){ 
        printf("Entrada inválida.\n");
        return 1;
    }

    switch(number){
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-Feira\n");
        break;
    case 3:
        printf("Terça-Feira\n");
        break;
    case 4:
        printf("Quarta-Feira\n");
        break;
    case 5:
        printf("Quinta-Feira\n");
        break;
    case 6:
        printf("Sexta-Feira\n");
        break;
    case 7:
        printf("Sábado\n");
        break;

    default:
        printf("Dia inválido!!!\n");
    }

    return 0;
}