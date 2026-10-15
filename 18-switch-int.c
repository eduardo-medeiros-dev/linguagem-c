#include<stdio.h>

int main(void){

  int opcao;

  printf("Digite 1 ou 2: ");
  scanf("%d", &opcao);
  // opção deve ser do tipo: int, char, ou enum


  switch(opcao){
    case 1: 
      printf("Você digitou 1 \n");
    break;
    case 2:
      printf("Você digitou 2 \n");
    break;
    default:
      printf("Você não digitou 1 nem 2 \n");

  }

  return 0;
  
   
}