#include<stdio.h>

int main(void){

int primeiro_numero;
int segundo_numero;


printf("Digite 2 valores: ");

scanf("%i", &primeiro_numero);
scanf("%i", &segundo_numero);
if(primeiro_numero == segundo_numero){
     printf("Os dois números são iguais!");
    return 0;
}

if(primeiro_numero > segundo_numero){
    printf("%i éh maior!\n", primeiro_numero );
}else{
    printf("%i éh maior!\n", segundo_numero);
}
return 0;

}