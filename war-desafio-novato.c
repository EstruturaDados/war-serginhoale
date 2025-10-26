#include <stdio.h>
#include <string.h>

// Definição da estrutura Territorio
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    // Vetor para armazenar 5 territórios
    Territorio territorios[5];

    printf("==========================================\n");
    printf("    WAR ESTRUTURADO - CADASTRO INICIAL  \n");
    printf("==========================================\n\n");
    printf("Vamos cadastrar os 5 territorios iniciais do nosso mundo.\n\n");

    // entrada de dados
    for (int i = 0; i < 5; i++) {
        printf("\n--- Cadastrando Territorio %d ---\n", i + 1);

        printf("Nome do Territorio: ");
        scanf(" %29[^\n]", territorios[i].nome);

        printf("Cor do Exercito: ");
        scanf(" %9s", territorios[i].cor);

        printf("Numero de tropas: ");
        scanf("%d", &territorios[i].tropas);      
    }
       
    // exibe  as informações cadastradas
    printf("\n=============================================\n");
    printf("    MAPA DO MUNDO - ESTADO ATUAL    \n");
    printf("=============================================\n");

    for (int i = 0; i < 5; i++) {
        printf("\nTerritorio %d:\n", i + 1);
        printf("- Nome: %s\n", territorios[i].nome);
        printf("- Dominado por: Exercito %s\n", territorios[i].cor);
        printf("- Tropas: %d\n", territorios[i].tropas);
    }

    printf("\nCadastro concluído com sucesso!\n");

    return 0;
}