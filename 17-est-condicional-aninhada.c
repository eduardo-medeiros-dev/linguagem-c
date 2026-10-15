#include <stdio.h>

int main(void){

    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    if(x > 0)
       if(x % 2 == 0)
          printf("%d eh par. \n", x);
        else
          printf("%d eh impar.\n", x);


          return 0;
}