 #include<stdio.h>

 int main(void){
    int x, y, maior;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    maior = x > y ? x : y;
    printf("Maior: %d", maior);
    return 0;
   


 }