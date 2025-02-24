#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Declaração da variável para a repetição.
    int i = 1;
    printf("Bispo:\n");
    // while para imprimir a movimentação do bispo 5 vezes.
    while (i <= 5) {
        printf("Cima - Direita\n");
        i++;
    }

    printf("\nTorre:\n");
    // for para imprimir a movimentação da torre 5 vezes, o i está recebendo o valor de 1 para reiniciar a contagem
    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\nDama:\n");
    // i novamente recebendo o valor de 1 para reiniciar a contagem;
    i = 1;
    // do-while para imprimir a movimentação da dama 8 vezes.
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);


    return 0;
}
