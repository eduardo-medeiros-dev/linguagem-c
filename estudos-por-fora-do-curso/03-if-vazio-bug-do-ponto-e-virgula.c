#include<stdio.h>


int main(void){

    int x = 100;
    if (x > 5);        // a sentença subordinada é o ";" (vazia)
{
    printf("A\n"); // bloco solto: não pertence ao if
}

return 0;
}