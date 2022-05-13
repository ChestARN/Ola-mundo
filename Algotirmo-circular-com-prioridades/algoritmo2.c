#include <stdio.h>
#include <locale.h>

typedef struct processo
{
    int tamanho;
    int prioridade;
    int tempoDeExecucao;
}P;

P criaProcesso(){
    P proccess;
    scanf("Insira o tamanho do algoritmo: %i/n", &proccess.tamanho);
    scanf("Insira a prioridade do algoritmo: %i/n", &proccess.prioridade);
    scanf("Insira o tempo de execução necessário para o algoritmo: %i/n/n/n/n", &proccess.tempoDeExecucao);
    return proccess;
};


int main(){
    setlocale(LC_ALL,"");
    printf("__________________________________________________________________\n");
    printf("| Bem Vindo ao simulador de algoritmo round bobin com prioridade |\n");
    printf("__________________________________________________________________\n\n\n\n");
    printf("Defina o número de processos a serem inseridos no algorítmo: ");
    int j;
    scanf("%i", &j);
    P Vprocessos[j];
    //int i = 0;
    //for (i = 0; i > j; i++)
    //{
        Vprocessos[0] = criaProcesso();
    //}
    
    printf("Simulação Finalizada!!!");
    return 0;
}
