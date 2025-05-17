// Incluindo a biblioteca
#include <stdio.h>

// Função recursiva para o movimento da torre
void moverTorre(int passo, int limite) {
    if (passo > limite) return;
    printf("Torre: Direita\n");
    moverTorre(passo + 1, limite);
}

// Função recursiva com loop aninhado para o movimento do bispo
void moverBispo(int passo, int limite) {
    if (passo > limite) return;

    for (int i = 1; i <= 1; i++) {
        printf("Bispo: Cima, Direita\n");
    }

    moverBispo(passo + 1, limite);
}

// Função recursiva para o movimento da rainha
void moverRainha(int passo, int limite) {
    if (passo > limite) return;
    printf("Rainha: Esquerda\n");
    moverRainha(passo + 1, limite);
}

// Movimento do cavalo
void moverCavalo() {
    for (int i = 1; i <= 2; i++) {  // Duas casas para cima
        printf("Cavalo: Cima\n");
    }

    for (int j = 1; j <= 1; j++) {  // Uma casa para direita
        printf("Cavalo: Direita\n");
    }
}

int main() {
    // Torre: direita por 5 casas
    moverTorre(1, 5);
    printf("\n");

    // Bispo: 5 movimentos diagonais
    moverBispo(1, 5);
    printf("\n");

    // Rainha: esquerda por 8 casas
    moverRainha(1, 8);
    printf("\n");

    // Cavalo: Movimento em L
    moverCavalo();
    printf("\n");

    return 0;
}