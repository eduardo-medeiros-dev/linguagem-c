#include <stdio.h>

int main(void) {

    int segundos, minutos, horas, valor_usuario;
  

    printf("Digite o tempo em segundos para receber a conversão em horas, minutos e segundos: ");
    scanf("%i", &valor_usuario);

    horas = valor_usuario / 3600;

    int resto = valor_usuario % 3600;

    minutos = resto / 60;
    segundos = resto % 60;

    printf("%ih %imin %iseg\n", horas, minutos, segundos);

    return 0;
}


