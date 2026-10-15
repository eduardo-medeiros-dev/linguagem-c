#include<stdio.h>

int main(void){

  char opcao;

  printf("Digite 'a' ou 'b': ");
  scanf("%c", &opcao);


  switch(opcao){
    case 'a': 
      printf("Você digitou a \n");
    break;
   case 'b':
      printf("Você digitou b \n");
      break;
    case 'c':
      printf("Você digitou c.");
      break;


  return 0;
  
  }
}