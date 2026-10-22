#include<stdio.h>



int main(void){

  int i = 0;
  int entrada;

  do
  {
    printf("O valor de i eh : %d\n", i);
    i++;
    printf("Você gostaria de sair do programa?\n"
        "0 - Finalizar programa\n"
        "1 - Continuar programa\n");
    scanf(" %d", &entrada);
  } while (entrada != 0);

  return 0;
  
}