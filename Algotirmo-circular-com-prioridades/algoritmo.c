#include<stdio.h>

/*
Variáveis necessárias:
processos(1, 2, 3, 4, 5){
 devem ter:
  tamanho
  prioridade
  posição na fila
}
*/
typedef struct processo
{
 int tamanho;
 int prioridade;
 int posicaoNaFila;
}P;

void imprimeDados(P processo)
{
 printf("Tempo necessário de Processo: %i\n", processo.tamanho);
 printf("Prioridade do Processo: %i\n", processo.prioridade);
 if(processo.tamanho < processo.prioridade)
  {
    processo.prioridade = processo.tamanho;
  }
 while (processo.prioridade >= 1)
 {
   printf("Tempo de execução: %i\n", processo.prioridade);
   processo.prioridade--;
 }
}

int main()
{
 P p1 = {13, 3, 1};
 while(p1.tamanho >= 0)
 {
  imprimeDados(p1);
  p1.tamanho = p1.tamanho - p1.prioridade;
 }
 if(p1.tamanho < 0)
  {
  p1.tamanho = 0;
  }
 printf("%i", p1.tamanho);
 return 0;
}
