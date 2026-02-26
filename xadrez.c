#include <stdio.h>

/**
 * REGRAS DE MOVIMENTAÇÃO:
 * Bispo: 5 casas (Diagonal Superior Direita)
 * Torre: 5 casas (Direita)
 * Rainha: 8 casas (Esquerda)
 * Cavalo: 2 casas para Baixo, 1 para a Esquerda (Movimento em L)
 */

int main() {
    // Definição de constantes para facilitar a manutenção e legibilidade
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;
    
    // Constantes para o Cavalo
    const int CAVALO_BAIXO = 2;
    const int CAVALO_ESQUERDA = 1;

    printf("--- Simulação de Movimentação de Peças de Xadrez ---\n\n");

    // --- Movimentação do Bispo ---
    printf("Movimentando o Bispo (%d casas):\n", MOV_BISPO);
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // --- Movimentação da Torre ---
    printf("Movimentando a Torre (%d casas):\n", MOV_TORRE);
    int t = 0;
    while (t < MOV_TORRE) {
        printf("Direita\n");
        t++;
    }
    printf("\n");

    // --- Movimentação da Rainha ---
    printf("Movimentando a Rainha (%d casas):\n", MOV_RAINHA);
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < MOV_RAINHA);
    printf("\n");

    // --- Movimentação do Cavalo (Nível Intermediário) ---
    // O Cavalo se move em "L". Usaremos loops aninhados para simular a sequência.
    printf("Movimentando o Cavalo:\n");

    

    // Loop externo 'for' controla a execução do movimento completo em L
    for (int i = 0; i < 1; i++) {
        int j = 0;
        
        // Loop interno 'while' executa a parte vertical (2 casas para baixo)
        while (j < CAVALO_BAIXO) {
            printf("Baixo\n");
            j++;
        }
        
        // Após o loop vertical, executamos a parte horizontal (1 casa para a esquerda)
        // Como o requisito pede loops aninhados, a lógica horizontal está dentro do 'for'
        int k = 0;
        while (k < CAVALO_ESQUERDA) {
            printf("Esquerda\n");
            k++;
        }
    }
    printf("\n");

    return 0;
}
