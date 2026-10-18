#include <stdio.h>

enum StatusPedido {
    PEDIDO_CRIADO,
    PEDIDO_PAGO,
    PEDIDO_ENVIADO,
    PEDIDO_ENTREGUE,
    PEDIDO_CANCELADO
};

int main(void) {
    int numero;

    printf("Status do pedido:\n");
    printf("  %d - Criado\n", PEDIDO_CRIADO);
    printf("  %d - Pago\n", PEDIDO_PAGO);
    printf("  %d - Enviado\n", PEDIDO_ENVIADO);
    printf("  %d - Entregue\n", PEDIDO_ENTREGUE);
    printf("  %d - Cancelado\n", PEDIDO_CANCELADO);

    printf("Digite o status atual: ");
    if (scanf("%d", &numero) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    if (numero < PEDIDO_CRIADO || numero > PEDIDO_CANCELADO) {
        printf("Status inválido.\n");
        return 1;
    }

    enum StatusPedido status = numero;

    switch (status) {
        case PEDIDO_CRIADO:
            printf("Pedido criado: aguardando o pagamento.\n");
            break;
        case PEDIDO_PAGO:
            printf("Pagamento confirmado: separando os itens.\n");
            break;
        case PEDIDO_ENVIADO:
            printf("Pedido enviado: a caminho do cliente.\n");
            break;
        case PEDIDO_ENTREGUE:
            printf("Pedido entregue: compra concluída.\n");
            break;
        case PEDIDO_CANCELADO:
            printf("Pedido cancelado.\n");
            break;
    }

    if (status == PEDIDO_CRIADO || status == PEDIDO_PAGO) {
        printf("Ainda é possível cancelar o pedido.\n");
    } else if (status == PEDIDO_CANCELADO) {
        printf("O pedido já foi cancelado.\n");
    } else {
        printf("Não é mais possível cancelar o pedido.\n");
    }

    return 0;
}