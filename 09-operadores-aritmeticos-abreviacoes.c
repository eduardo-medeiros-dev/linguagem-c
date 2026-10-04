#include <stdio.h>

int main() {

    int e = 10;
    int f = 10;
    int g = 10;
    int h = 20;
    int i = 10;

    // e = e + 5
    e += 5;
    printf("e += 5 -> e = %d\n", e);

    // f = f - 2
    f -= 2;
    printf("f -= 2 -> f = %d\n", f);

    // g = g * 3
    g *= 3;
    printf("g *= 3 -> g = %d\n", g);

    // h = h / 4
    h /= 4;
    printf("h /= 4 -> h = %d\n", h);

    // i = i % 6
    i %= 6;
    printf("i %%= 6 -> i = %d\n", i);

    return 0;
}
