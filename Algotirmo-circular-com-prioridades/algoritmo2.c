#include <stdio.h>
#include <locale.h>

typedef struct processo
{
    int tamanho;
    int prioridade;
    int tempoDeExecucao;
}P;

int criaProcesso(){
    
    return 0;
};


int main(){
    setlocale(LC_ALL,"");
    printf("__________________________________________________________________\n");
    printf("| Bem Vindo ao simulador de algoritmo round bobin com prioridade |\n");
    printf("__________________________________________________________________\n\n\n\n");
    printf("Defina o número de processos a serem inseridos no algorítmo: ");
    int i;
    scanf("%i", &i);
    printf("Simulação Finalizada!!!");
    return 0;
}
