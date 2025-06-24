#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_HABILIDADE 5

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // Água
        }
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("0 "); // Água
            } else if (tabuleiro[i][j] == 3) {
                printf("3 "); // Navio
            } else if (tabuleiro[i][j] == 5) {
                printf("5 "); // Área afetada pela habilidade
            }
        }
        printf("\n");
    }
}

// Função para adicionar um navio no tabuleiro
void adicionarNavio(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int x, int y) {
    if (x >= 0 && x < TAM_TABULEIRO && y >= 0 && y < TAM_TABULEIRO) {
        tabuleiro[x][y] = 3; // Coloca o navio na posição (x, y)
    } else {
        printf("Posição inválida para o navio!\n");
    }
}

// Função para aplicar a habilidade em cone
void aplicarHabilidadeCone(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int origemX, int origemY) {
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = -i; j <= i; j++) {
            int x = origemX + i;
            int y = origemY + j;
            if (x >= 0 && x < TAM_TABULEIRO && y >= 0 && y < TAM_TABULEIRO) {
                tabuleiro[x][y] = 5; // Área afetada
            }
        }
    }
}

// Função para aplicar a habilidade em cruz
void aplicarHabilidadeCruz(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int origemX, int origemY) {
    for (int i = -TAM_HABILIDADE / 2; i <= TAM_HABILIDADE / 2; i++) {
        int x = origemX;
        int y = origemY + i;
        if (y >= 0 && y < TAM_TABULEIRO) {
            tabuleiro[x][y] = 5; // Área afetada
        }
    }
    for (int i = -TAM_HABILIDADE / 2; i <= TAM_HABILIDADE / 2; i++) {
        int x = origemX + i;
        int y = origemY;
        if (x >= 0 && x < TAM_TABULEIRO) {
            tabuleiro[x][y] = 5; // Área afetada
        }
    }
}

// Função para aplicar a habilidade em octaedro
void aplicarHabilidadeOctaedro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int origemX, int origemY) {
    for (int i = -TAM_HABILIDADE / 2; i <= TAM_HABILIDADE / 2; i++) {
        for (int j = -TAM_HABILIDADE / 2; j <= TAM_HABILIDADE / 2; j++) {
            if (abs(i) + abs(j) <= TAM_HABILIDADE / 2) {
                int x = origemX + i;
                int y = origemY + j;
                if (x >= 0 && x < TAM_TABULEIRO && y >= 0 && y < TAM_TABULEIRO) {
                    tabuleiro[x][y] = 5; // Área afetada
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];
    inicializarTabuleiro(tabuleiro);

    // Adicionando um navio na posição 
    adicionarNavio(tabuleiro, 4, 4);
    adicionarNavio(tabuleiro, 4, 3);
    adicionarNavio(tabuleiro, 4, 2);
    adicionarNavio(tabuleiro, 0, 3);
    adicionarNavio(tabuleiro, 0, 4);
    // Aplicando habilidades
        aplicarHabilidadeCone(tabuleiro, 9, 9); // Cone na posição (0, 2)
        aplicarHabilidadeCruz(tabuleiro, 0, 9); // Cruz na posição (4, 4)
        aplicarHabilidadeOctaedro(tabuleiro, 2, 2); // Octaedro na posição (2, 2)

    // Exibindo o tabuleiro
    printf("Tabuleiro com Habilidades:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
