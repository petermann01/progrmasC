#include <stdio.h>

// Constantes para o número de casas a serem movidas (definido no código)
#define TORRE_CASAS 3
#define BISPO_CASAS 4
#define RAINHA_CASAS 5
#define CAVALO_MOVIMENTOS 3 // Número de movimentos do cavalo
#define BISPO_LOOP_EXTERNO 3 // Número de movimentos verticais do bispo
#define BISPO_LOOP_INTERNO 3 // Número de movimentos horizontais do bispo

// Funções recursivas para Torre, Bispo e Rainha
void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima\n"); // Exemplo: Movimento para cima
        moverTorreRecursivo(casas - 1);
    }
}

void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Diagonal Superior Direita\n"); // Exemplo: Diagonal superior direita
        moverBispoRecursivo(casas - 1);
    }
}

void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n"); // Exemplo: Movimento para a direita
        moverRainhaRecursivo(casas - 1);
    }
}

// Função para o movimento do Cavalo com loops aninhados
void moverCavalo() {
    printf("Movimentos do Cavalo:\n");
    for (int i = 0; i < CAVALO_MOVIMENTOS; i++) {
        for (int j = 0; j < 2; j++) { // Movimento em "L" (2 para cima e 1 para a direita)
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

// Função para o movimento do Bispo com loops aninhados
void moverBispoComLoops() {
    printf("\nMovimentos do Bispo com Loops:\n");
    for (int i = 0; i < BISPO_LOOP_EXTERNO; i++) { // Loop externo (vertical)
        for (int j = 0; j < BISPO_LOOP_INTERNO; j++) { // Loop interno (horizontal)
            printf("Diagonal Superior Direita\n"); // Exemplo: Diagonal superior direita
        }
    }
}

int main() {
    printf("Movimentos da Torre (Recursivo):\n");
    moverTorreRecursivo(TORRE_CASAS);

    printf("\nMovimentos do Bispo (Recursivo):\n");
    moverBispoRecursivo(BISPO_CASAS);

    printf("\nMovimentos da Rainha (Recursivo):\n");
    moverRainhaRecursivo(RAINHA_CASAS);

    moverCavalo();

    moverBispoComLoops();

    return 0;
}
