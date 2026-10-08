#include <stdio.h>

int main(void) {

    int age;
    float salario;
    const int JUROS = 10;
    float divida, parcelas, emprestimo_pessoal = 5000.0;
  

    printf("BANCO DA CIDADE\n");

    printf("Qual sua idade? ");
    scanf("%d", &age);

    if (age < 18) {
        printf("Sua idade nao atende ao criterio de credito.\n");
        return 0;
    }

    printf("Qual e o seu salario? R$ ");
    scanf("%f", &salario);

    printf("\nAnalisando seu emprestimo...\n");
    printf("Aguarde...\n\n");

    if (salario >= 3000) {

        printf("Parabens! Seu emprestimo de R$ %.2f foi aprovado!\n",
               emprestimo_pessoal);

        
        divida = emprestimo_pessoal;
        divida = divida + (JUROS * divida) / 100;

        parcelas = divida / 12;

        printf("Juros aplicados: %d%%\n", JUROS);
        printf("Valor total com juros: R$ %.2f\n", divida);
        printf("Pagamento: 12x de R$ %.2f\n", parcelas);

    } else {
        printf("Sinto muito, seu salario nao atende aos requisitos "
               "para um emprestimo.\n");
    }

    return 0;
}

