#include <stdio.h>

// Função para a movimentação da dama.
void dama(int damaMov) {
    if(damaMov > 0) {
        printf("Esquerda\n");
        dama(damaMov - 1);
    }
}
// Função para a movimentação da torre
void torre(int torreMov) {
    if(torreMov > 0) {
        printf("Direita\n");
        torre(torreMov - 1);
    }
}

// Função com loop aninhado para a movimentação do bispo.
void bispo(int bispoMov) {
    for(bispoMov = 5; bispoMov > 0; bispoMov--) {
        printf("Cima - ");
        for(int i = 1; i == 1; i++){
            printf("Direita\n");
        }
    }
}

int main() {
    // Impressão da movimentação do bispo.
    printf("Bispo:\n");
    bispo(5);

    // Impressão da movimentação da torre.
    printf("\nTorre:\n");
    torre(5);

    // Impressão da movimentação da dama.
    printf("\nDama:\n");
    dama(8);

    // Variáveis para a movimentação do cavalo.
    int cavaloMov, j;

    //Divisão das peças para o cavalo
    printf("---------------------------------------\n");
    // Movimentação do cavalo com loop complexo
    printf("Cavalo:\n");
    for(cavaloMov = 1, j = 1; cavaloMov <= 2  && j <= 2; cavaloMov++, j++) {
        printf("Cima - ");
    }
    printf("Direita\n");

    return 0;
}
