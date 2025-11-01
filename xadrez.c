#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


/*
   A torre aqui vai andar sempre para a DIREITA.
   A recursão vai diminuindo o número de casas até chegar a zero.
*/
void moverTorre(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) {
        return; 
    }

    printf("Direita (%d)\n", passoAtual);


    moverTorre(passoAtual + 1, totalPassos);
}


/*
   O bispo anda na diagonal: CIMA + DIREITA.
   A instrução pediu duas coisas:
    usar loops aninhados, sendo o de fora o vertical e o de dentro o horizontal
   Então: a cada chamada recursiva eu "simulo" o movimento vertical e horizontal
   com dois for pequenininhos (1x1), mas mantendo o formato pedido.
*/
void moverBispo(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) {
        return; // caso base
    }


    for (int v = 1; v <= 1; v++) {         
        for (int h = 1; h <= 1; h++) {          
            printf("Cima, Direita (%d)\n", passoAtual);
        }
    }


    moverBispo(passoAtual + 1, totalPassos);
}


/*
   Vamos fazer a rainha andar para a ESQUERDA.
   Parecido com a torre, mas mudando a direção.
*/
void moverRainha(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) {
        return;
    }

    printf("Esquerda (%d)\n", passoAtual);

    moverRainha(passoAtual + 1, totalPassos);
}

/* ===================== CAVALO (LOOPS ANINHADOS + CONTINUE/BREAK) ===================== */
/*
   Nova regra do desafio:
   - cavalo agora vai para CIMA e para a DIREITA, em "L"
   - ou seja: 2 casas para cima, 1 para a direita
   - queremos usar loops aninhados e mostrar controle de fluxo

   
*/
void moverCavalo(int qtdMovimentos) {
    printf("Movimento do Cavalo:\n");

    for (int mov = 1; mov <= qtdMovimentos; mov++) {

        // primeiro: subir 2 casas
        int subiu = 0;
        while (subiu < 2) {
            subiu++;
            
            if (subiu > 2) {
                break;
            }
            printf("Cima (mov %d, passo vertical %d)\n", mov, subiu);
        }

        // agora: ir 1 pra direita
        for (int dir = 1; dir <= 1; dir++) {
            if (dir < 0) {
                continue;
            }
            printf("Direita (mov %d)\n", mov);
        }

        // só pra mostrar controle: se o movimento for maior que 10, para tudo (proteção)
        if (mov > 10) {
            printf("Cavalo: limite de movimentos atingido, parando...\n");
            break;
        }
    }

    printf("\n");
}

int main() {


    int casasTorre  = 5;  
    int casasBispo  = 5; 
    int casasRainha = 8;  
    int movimentosCavalo = 3; 

    /*TORRE*/
    printf("Movimento da Torre:\n");
    moverTorre(1, casasTorre);
    printf("\n");

    /*  BISPO  */
    printf("Movimento do Bispo:\n");
    moverBispo(1, casasBispo);
    printf("\n");

    /*  RAINHA  */
    printf("Movimento da Rainha:\n");
    moverRainha(1, casasRainha);
    printf("\n");

    /*  CAVALO  */
    moverCavalo(movimentosCavalo);

    printf("Simulação concluída!\n");

    return 0;
}