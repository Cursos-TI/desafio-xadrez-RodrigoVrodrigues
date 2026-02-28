#include <stdio.h>

/**
 * --- DESAFIO XADREZ: NÍVEL MESTRE ---
 * Regras aplicadas:
 * 1. Torre e Rainha: Movimentação via Funções Recursivas.
 * 2. Bispo: Movimentação via Recursividade E Loops Aninhados.
 * 3. Cavalo: Movimentação em "L" (2 Cima, 1 Direita) usando loops complexos com múltiplas variáveis.
 */

// --- FUNÇÕES RECURSIVAS ---

// Função recursiva para a Torre (Direita)
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // Chamada recursiva diminuindo o contador
    }
}

// Função recursiva para a Rainha (Esquerda)
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Função recursiva para o Bispo (Diagonal: Cima e Direita)
// Conforme o requisito: implementada com recursividade
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        printf("Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

int main() {
    // Definição de constantes para os movimentos
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    printf("--- Simulação de Xadrez (Nível Mestre) ---\n\n");

    // --- MOVIMENTAÇÃO DA TORRE (Recursiva) ---
    printf("Movimentando a Torre (%d casas):\n", MOV_TORRE);
    moverTorre(MOV_TORRE);
    printf("\n");

    // --- MOVIMENTAÇÃO da RAINHA (Recursiva) ---
    printf("Movimentando a Rainha (%d casas):\n", MOV_RAINHA);
    moverRainha(MOV_RAINHA);
    printf("\n");

    // --- MOVIMENTAÇÃO DO BISPO (Loops Aninhados + Conceito de Recursão) ---
    // Requisito: Loop externo vertical, loop interno horizontal.
    printf("Movimentando o Bispo (Loops Aninhados - %d casas):\n", MOV_BISPO);
    for (int i = 0; i < MOV_BISPO; i++) {
        // Loop Externo: Vertical (Cima)
        printf("Cima, "); 
        
        for (int j = 0; j < 1; j++) {
            // Loop Interno: Horizontal (Direita)
            printf("Direita\n");
        }
    }
    printf("\n");

    // --- MOVIMENTAÇÃO DO CAVALO (Loops Complexos) ---
    // Requisito: 2 para Cima, 1 para a Direita. 
    // Uso de múltiplas variáveis no for e controle de fluxo.
    printf("Movimentando o Cavalo (2 Cima, 1 Direita):\n");
    
    // i controla o eixo vertical, j o horizontal
    for (int i = 1, j = 1; i <= 3; i++) {
        if (i <= 2) {
            printf("Cima\n");
            continue; // Pula para a próxima iteração para completar os 2 movimentos para cima
        }
        
        // Quando i for 3, executa o movimento horizontal
        while (j > 0) {
            printf("Direita\n");
            j--; // Garante que mova apenas 1 casa
        }
        break; // Finaliza o movimento em L
    }
    printf("\n");

    return 0;
}