#include <stdio.h>
#include <stdlib.h>

int processos[2];
int tempo[3];

void preencheProcessos(){
    printf("Defina o quantum de cada processo: \n");
    printf("P1: ");
    scanf("%d", &processos[0]);
    printf("\nP2: ");
    scanf("%d", &processos[1]);
    printf("\n");
    printf("Agora defina o tempo total de execução para cada processo: \n");
    printf("P1: ");
    scanf("%d", &tempo[0]);
    printf("\nP2: ");
    scanf("%d", &tempo[1]);
    printf("\n\n\n\n");
}

void imprimeTabela () {
    tempo[2] = tempo[1] + tempo[0];
    printf("Tempo    P1    P2\n");
    for(int i = 0; i < tempo[2]; i++){
        printf("%d - %d    ##    --\n", i, i + 1);
    }
}

int main () {
    preencheProcessos();
    imprimeTabela();
    return 0;
}
