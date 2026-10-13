#include<stdio.h>



int main(void){

int x;

printf("Digite um inteiro: ");
scanf("%d", &x);


/* Na condição de um if, não precisa haver uma comparação;
  - valor 0   -> falso
  - qualquer valor diferente -> Verdadeiro
  */

if(x){
    printf("if (x): VERDADEIRO");
}else{
    printf("if (x): FALSO");
}
return 0;

}