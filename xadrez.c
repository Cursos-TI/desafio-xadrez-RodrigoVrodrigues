#include <stdio.h>

/**
 * REGRAS DE MOVIMENTAÇÃO:
 * Bispo: 5 casas (Diagonal Superior Direita) -> Cima e Direita
 * Torre: 5 casas (Direita)
 * Rainha: 8 casas (Esquerda)
 */

int main() {
    // Definição de constantes para facilitar a manutenção e legibilidade
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    printf("--- Simulação de Movimentação de Peças de Xadrez ---\n\n");

    // --- Movimentação do Bispo ---
    // Estrutura utilizada: FOR
    // O Bispo se move na diagonal, combinando "Cima" e "Direita"
    printf("Movimentando o Bispo (%d casas):\n", MOV_BISPO);
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // --- Movimentação da Torre ---
    // Estrutura utilizada: WHILE
    // A Torre se move apenas para a "Direita"
    printf("Movimentando a Torre (%d casas):\n", MOV_TORRE);
    int t = 0;
    while (t < MOV_TORRE) {
        printf("Direita\n");
        t++;
    }
    printf("\n");

    // --- Movimentação da Rainha ---
    // Estrutura utilizada: DO-WHILE
    // A Rainha se move para a "Esquerda"
    printf("Movimentando a Rainha (%d casas):\n", MOV_RAINHA);
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < MOV_RAINHA);
    printf("\n");

    return 0;
}