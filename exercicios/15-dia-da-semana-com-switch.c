#include <stdio.h>

int main(void)
{

   int numero;

   printf("Digite um valor do 1 ao 7: ");

   if (scanf("%d", &numero) != 1)
   {
      printf("Valor inválido!!!\n");
      return 1;
   }

   switch (numero)
   {

   case 1:
      printf("Segunda-Feira\n");
      break;
   case 2:
      printf("Terça-feira\n");
      break;
   case 3:
      printf("Quarta-feira\n");
      break;
   case 4:
      printf("Quinta-feira\n");
      break;
   case 5:
      printf("Sexta-feira\n");
      break;
   case 6:
      printf("Sábado\n");
      break;
   case 7:
      printf("Domingo\n");
      break;

   default:
      printf("Dia inválido!!!\n");
   }
   return 0;
}