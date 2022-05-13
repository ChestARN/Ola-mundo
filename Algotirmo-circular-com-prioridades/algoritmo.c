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

/*int maiorTam(int tam1, int tam2)
{
  if(tam1 > tam2){
   return tam1;
  } else {
   return tam2;
  }
}*/

int main()
{
 P p1 = {13, 3, 1};
 P p2 = {20, 2, 1};
 int maior = p1.tamanho + p2.tamanho;
 while(maior >= 0)
 {
   if(p1.tamanho > 0){
   imprimeDados(p1);
   p1.tamanho = p1.tamanho - p1.prioridade;
   maior = maior - p1.prioridade;
  }
  imprimeDados(p2);
  p2.tamanho = p2.tamanho - p2.prioridade;
  maior = maior - p2.prioridade;
 }
 if(p1.tamanho < 0)
  {
  p1.tamanho = 0;
  }
 printf("%i\n", p1.tamanho);
 printf("%i\n", p2.tamanho);
 return 0;
}
