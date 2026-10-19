#include <stdio.h>

enum NivelAcesso {
    ACESSO_VISITANTE,
    ACESSO_USUARIO,
    ACESSO_MODERADOR,
    ACESSO_ADMINISTRADOR
};

int main(void) {
    int numero;

    printf("Informe seu nível de acesso:\n");
    printf("  %d - Visitante\n", ACESSO_VISITANTE);
    printf("  %d - Usuário\n", ACESSO_USUARIO);
    printf("  %d - Moderador\n", ACESSO_MODERADOR);
    printf("  %d - Administrador\n", ACESSO_ADMINISTRADOR);

    printf("Digite o nível: ");
    if (scanf("%d", &numero) != 1) {
        printf("Valor inválido.\n");
        return 1;
    }

    if (numero < ACESSO_VISITANTE || numero > ACESSO_ADMINISTRADOR) {
        printf("Nível inválido.\n");
        return 1;
    }

    enum NivelAcesso nivel = numero;

    switch (nivel) {
        case ACESSO_VISITANTE:
            printf("Bem-vindo, visitante!\n");
            break;
        case ACESSO_USUARIO:
            printf("Bem-vindo, usuário!\n");
            break;
        case ACESSO_MODERADOR:
            printf("Bem-vindo, moderador!\n");
            break;
        case ACESSO_ADMINISTRADOR:
            printf("Bem-vindo, administrador!\n");
            break;
    }

    printf("Permissões:\n");
    printf("  Pode ler\n");

    if (nivel >= ACESSO_USUARIO) {
        printf("  Pode comentar\n");
    }

    if (nivel >= ACESSO_MODERADOR) {
        printf("  Pode apagar comentários\n");
    }

    if (nivel >= ACESSO_ADMINISTRADOR) {
        printf("  Pode gerenciar usuários\n");
    }

    return 0;
}