#include <stdio.h>

int main(void)
{

    // Maneira 1

    // int a[4];
    // a[0] = 1;
    // a[1] = 4;
    // a[2] = 9;
    // a[2] = 16;

    // maneira 2

    //  int a[] = {1, 2, 4, 9, 16};

    // Maneira 3
    int a[4];
    for (int i = 1; i <= 4; i++)
    {

            a[i - 1] = i * 1;
    }

    // Imprimir
    for (int i = 0; i < 4; i++)
    {
        printf("Array posição %d valor: %d\n", i, a[i]);
    }

    return 0;
}