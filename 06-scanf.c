#include <stdio.h>

int main(){


    int idade;
    float altura;
    char letra_favorita;

  printf("Qual a sua idade?\n");
  scanf("%i", &idade);
  printf("Qual a sua altura?\n");
  scanf("%f", &altura);\
  printf("E qual a sua letra favoritan\n");
  scanf(" %c", &letra_favorita);


  printf("Sua idade e: %i\n", idade);
  printf("Sua altura é: %f\n", altura);
  printf("Sua letra favorita e: %c\n", letra_favorita);

  return 0 ;

}