#include <stdio.h>
#include <locale.h>

int processos[2], tempo[3], prioridade[2], duracao[10], tempoEspera[10];

void preencheProcessos();
void imprimeTabela();

int main () {
    preencheProcessos();
    imprimeTabela();
    return 0;
}

void preencheProcessos(){
    setlocale(LC_ALL, "Portuguese");
    printf("\n");
    
    //Escolher o quantum do programa
    printf("Defina o quantum(Intervalo de tempo) entre os processamentos: \n");
    printf("Processo 1: ");
    scanf("%d" ,&processos[0]);
    printf("\n");
    printf("Processo 2: ");
    scanf("%d", &processos[1]);
    printf("\n"); 
	
	//Define o tempo de execução de cada processo
	printf("Defina o tempo de execução para os processos: \n");
	printf("Processo 1: ");
	scanf("%d", &tempo[0]);
	printf("\n");
	printf("Processo 2: ");
	scanf("%d", &tempo[1]);
	
	//Define a prioridade de cada processo
	printf("Defina a prioridade de cada processo: \n");
	printf("Processo 1: ");
	scanf("%d", &prioridade[0]);
	printf("\n");
	printf("Processo 2: ");
	scanf("%d", &prioridade[1]);
	printf("\n");
}
void imprimeTabela(){
	
	tempo[2] = tempo[1] + tempo[0];
    
    if(prioridade[0] < prioridade[1]){
    	
    	printf("O processo 1 tem prioridade!\n");
    	printf("Duração do processo 1: %d \n", tempo[0]);
		printf("Duração do processo 2: %d \n", tempo[1]);
		printf("Tempo de chegada do processo 1: Já está sendo executado! \n");
		printf("Tempo de chegada do processo 2: %d \n", tempo[0]);
		printf("\n");
		printf("Quantum sendo executado:  ##\n");
    	printf("Quantum não executado: --\n\n");
		printf("Tempo    P1    P2\n");
	    for(int i = 0; i < tempo[2]; i++){
	    	
	            for(int k = processos[0]; k > 0; k--){
	            	
	                if(tempo[0] > 0){
	                    printf("%d - %d    ##    --\n", i, i + 1);
	                    i++;
	                    tempo[0]--;
	                }
	            }
	            for(int k = processos[1]; k > 0; k--){
	            	
	                if(tempo[1] > 0){
	                    printf("%d - %d    --    ##\n", i, i + 1);
	                    i++;
	                    tempo[1]--;
	                    
	                } else {
	                	
	                    i--;
	                }
	            }
	    }
	}else{
		printf("O processo 2 tem prioridade!\n");
		printf("Duração do processo 1: %d \n", tempo[0]);
		printf("Duração do processo 2: %d \n", tempo[1]);
		printf("Tempo de chegada do processo 1: %d \n", tempo[1]);
		printf("Tempo de chegada do processo 2: Já está sendo executado!\n");
		printf("\n");
		printf("Quantum sendo executado:  ##\n");
    	printf("Quantum não executado: --\n\n");
		printf("Tempo    	P1    P2\n");
		for(int i = 0; i < tempo[2]; i++){
			
	            for(int k = processos[0]; k > 0; k--){
	                if(tempo[0] > 0){
	                    printf("%d - %d    	--    ##\n", i, i + 1);
	                    i++;
	                    tempo[0]--;
	                }
	            }
	            for(int k = processos[1]; k > 0; k--){
	            	
	                if(tempo[1] > 0){
	                    printf("%d - %d    	##    --\n", i, i + 1);
	                    i++;
	                    tempo[1]--;
	                    
	                } else {
	                    i--;
	                }
	            }
	    }
	    
	}
}
