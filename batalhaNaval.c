#include <stdio.h>

void exibirMatriz(int matriz[10][10], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void exibirHabilidade(int padrao[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", padrao[i][j]);
        }
        printf("\n");
    }
}

int main() {

    // ====================== NÍVEL NOVATO ======================
    printf("=== Nível Novato ===\n");

    int tabuleiroNovato[5][5] = {0};

    // Navio horizontal na linha 1 (colunas 0 a 3)
    int linhaH = 1;
    for (int col = 0; col < 4; col++) {
        tabuleiroNovato[linhaH][col] = 3;
        printf("Navio Horizontal: (%d, %d)\n", linhaH, col);
    }

    // Navio vertical na coluna 2 (linhas 0 a 3)
    int colunaV = 2;
    for (int lin = 0; lin < 4; lin++) {
        tabuleiroNovato[lin][colunaV] = 3;
        printf("Navio Vertical: (%d, %d)\n", lin, colunaV);
    }

    printf("\n");

    // ====================== NÍVEL AVENTUREIRO ======================
    printf("=== Nível Aventureiro ===\n");

    int tabuleiroAventureiro[10][10] = {0};

    // Navio horizontal na linha 2 (colunas 1 a 4)
    for (int col = 1; col <= 4; col++) {
        tabuleiroAventureiro[2][col] = 3;
    }

    // Navio vertical na coluna 7 (linhas 3 a 6)
    for (int lin = 3; lin <= 6; lin++) {
        tabuleiroAventureiro[lin][7] = 3;
    }

    // Navio diagonal principal (começa em (0,0))
    for (int i = 0; i < 4; i++) {
        tabuleiroAventureiro[i][i] = 3;
    }

    // Navio diagonal secundária (começa em (0, 9))
    for (int i = 0; i < 4; i++) {
        tabuleiroAventureiro[i][9 - i] = 3;
    }

    // Exibir tabuleiro completo
    printf("Tabuleiro 10x10:\n");
    exibirMatriz(tabuleiroAventureiro, 10, 10);
    printf("\n");

    // ====================== NÍVEL MESTRE ======================
    printf("=== Nível Mestre ===\n");

    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    printf("Habilidade: Cone\n");
    exibirHabilidade(cone);
    printf("\n");

    printf("Habilidade: Cruz\n");
    exibirHabilidade(cruz);
    printf("\n");

    printf("Habilidade: Octaedro\n");
    exibirHabilidade(octaedro);
    printf("\n");

    return 0;
}
