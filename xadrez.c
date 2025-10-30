#include <stdio.h>

/*
=========================================================
    PROJETO: Teste de Movimentação de Peças - MateCheck
    AUTOR: Equipe de Testes
    DESCRIÇÃO:
        Este programa demonstra o uso de estruturas de repetição
        para simular movimentos de peças de xadrez (Bispo, Torre e Rainha)
        dentro das limitações do jogo, utilizando apenas quatro direções:
        - Cima
        - Baixo
        - Esquerda
        - Direita
=========================================================
*/

// Constantes de movimentação
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    int i; // variável de controle para os loops

    // ============================================
    // MOVIMENTAÇÃO DO BISPO (Diagonal Superior Direita)
    // ============================================
    printf("=== Movimento do Bispo (Diagonal Superior Direita) ===\n");
    /*
        Como o Bispo se move na diagonal, ele precisa
        mover-se uma casa para cima e uma para a direita
        simultaneamente, por isso usamos dois printf dentro do loop.
    */
    for (i = 1; i <= MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("============================================\n\n");

    // ============================================
    // MOVIMENTAÇÃO DA TORRE (5 casas para a direita)
    // ============================================
    printf("=== Movimento da Torre (5 casas para a Direita) ===\n");
    /*
        Exemplo com loop WHILE.
    */
    i = 1;
    while (i <= MOV_TORRE) {
        printf("Direita\n");
        i++;
    }
    printf("============================================\n\n");

    // ============================================
    // MOVIMENTAÇÃO DA RAINHA (8 casas para a Esquerda)
    // ============================================
    printf("=== Movimento da Rainha (8 casas para a Esquerda) ===\n");
    /*
        Exemplo com loop DO-WHILE.
    */
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= MOV_RAINHA);
    printf("============================================\n\n");

    // Encerramento
    printf("Movimentos finalizados com sucesso!\n");

    return 0;
}
