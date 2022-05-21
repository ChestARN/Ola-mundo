#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int processos[2];
int tempo[3];

void preencheProcessos(){
    setlocale{LC_ALL, "Portuguese"}
    printf("Defina o quantum de cada processo: \n");
    printf("P1: ");
    scanf("%d", &processos[0]);
    printf("P2: ");
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
    printf("Executando no quantum : ##\n");
    printf("Não executando no quantum: --\n\n");
    printf("Tempo    P1    P2\n");
    for(int i = 0; i < tempo[2]; i++){
            for(int j = processos[0]; j > 0; j--){
                if(tempo[0] > 0){
                    printf("%d - %d    ##    --\n", i, i + 1);
                    i++;
                    tempo[0]--;
                }
            }
            for(int j = processos[1]; j > 0; j--){
                if(tempo[1] > 0){
                    printf("%d - %d    --    ##\n", i, i + 1);
                    i++;
                    tempo[1]--;
                } else {
                    i--;
                }
            }
    }
}

int main () {
    preencheProcessos();
    imprimeTabela();
    return 0;
}
