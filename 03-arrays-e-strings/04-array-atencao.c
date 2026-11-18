#include<stdio.h>


int main(void){


    int a[4] = {1 , 2, 3, 4};
    int b[] = {5,6,7,8};
    int c[4];

// Atenção, não é possivel somar dois arrays: c = a + b
    for(int i = 0; i<=4; i++){
        c[i] = a[i] + b[i];
    }
}