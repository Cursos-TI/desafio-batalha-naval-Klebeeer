#include <stdio.h>

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // Nível Novato 
    // Criando o tabuleiro 5x5 e inicializando com 0
    int tabuleiro5x5[5][5] = {0};

    // Posicionando um navio vertical (3 posições)
    tabuleiro5x5[0][1] = 3;
    tabuleiro5x5[1][1] = 3;
    tabuleiro5x5[2][1] = 3;

    // Posicionando um navio horizontal (3 posições)
    tabuleiro5x5[4][0] = 3;
    tabuleiro5x5[4][1] = 3;
    tabuleiro5x5[4][2] = 3;

    printf("Nível Novato - Tabuleiro 5x5 com dois navios:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro5x5[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro 
    int tabuleiro[10][10] = {0}; // Tabuleiro 10x10

    // Navio horizontal (linha 0)
    for (int j = 0; j < 4; j++) {
        tabuleiro[0][j] = 3;
    }

    // Navio vertical (coluna 9)
    for (int i = 5; i < 9; i++) {
        tabuleiro[i][9] = 3;
    }

    // Navio diagonal (\)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio diagonal (/)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    printf("\nNível Aventureiro - Tabuleiro 10x10 com quatro navios:\n");
    exibirTabuleiro(tabuleiro);

    // Nível Mestre
    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    // Preenchendo Cone (ponta para baixo)
    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            cone[i][j] = 1;
        }
    }

    // Preenchendo Cruz
    for (int i = 0; i < 5; i++) {
        cruz[2][i] = 1; // linha central
        cruz[i][2] = 1; // coluna central
    }

    // Preenchendo Octaedro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 2 && (j == 1 || j == 2 || j == 3)) ||
                (j == 2 && (i == 1 || i == 2 || i == 3)))
                octaedro[i][j] = 1;
        }
    }

    printf("Nível Mestre - Habilidade Cone:\n");
    exibirTabuleiro(cone);

    printf("Nível Mestre - Habilidade Cruz:\n");
    exibirTabuleiro(cruz);

    printf("Nível Mestre - Habilidade Octaedro:\n");
    exibirTabuleiro(octaedro);

    return 0;
}
