#include <stdio.h>
#include <stdlib.h>

//int processos[2];
int tempo[3];

int main () {
    imprimeTabela();
    return 0;
}

void imprimeTabela () {
    tempo[1] = 3;
    tempo[0] = 2;
    tempo[2] = tempo[1] + tempo[0];
    printf("Tempo    P1    P2\n");
    for(int i = 0; i < tempo[2]; i++){
        printf("%d - %d\n", i, i + 1);
    }
}
