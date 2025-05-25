#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo

// Movimentação do Bispo usando 'for'
printf("Movimentação do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Movimentação da torre usando 'while'
  printf("Movimentação da Torre:\n");
    int i = 0;
    while (i < 5) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Movimentação da torre usando 'do-while'
    printf("Movimentação da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);
    printf("\n");


    return 0;
}
