#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
 


    // Torre (usa FOR)
    int casasTorre = 5; // número de casas que a torre vai andar
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }
    printf("\n");

    // Bispo (usa WHILE)
    int casasBispo = 5; // número de casas que o bispo vai andar
    int i = 1;
    printf("Movimento do Bispo:\n");
    while (i <= casasBispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }
    printf("\n");


    // Rainha (usa DO-WHILE)
    int casasRainha = 8; // número de casas que a rainha vai andar
    int j = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= casasRainha);
    printf("\n");

    // Finalização
    printf("Simulação concluída!\n");

    return 0;
}
