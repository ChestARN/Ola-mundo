#include<stdio.h>


int main() {
    int numero_frames, numero_paginas, frames[10], paginas[30], temp[10], aux1, aux2, aux3, i, j, k, pos, max, falhas = 0;
    printf("Insira o numero de frames: ");
    scanf("%d", &numero_frames);
    
    printf("\nInsira o numero de paginas: ");
    scanf("%d", &numero_paginas);
    
    printf("\nInsira o valor da memória para cada página: \n"); 
    
    for(i = 0; i < numero_paginas; ++i){
        scanf("%d", &paginas[i]);
    }
    
    for(i = 0; i < numero_frames; ++i){
        frames[i] = -1;
    }
    
    for(i = 0; i < numero_paginas; ++i){
        aux1 = aux2 = 0;
        
        for(j = 0; j < numero_frames; ++j){
            if(frames[j] == paginas[i]){
                   aux1 = aux2 = 1;
                   break;
               }
        }
        
        if(aux1 == 0){
            for(j = 0; j < numero_frames; ++j){
                if(frames[j] == -1){
                    falhas++;
                    frames[j] = paginas[i];
                    aux2 = 1;
                    break;
                }
            }    
        }
        
        if(aux2 == 0){
         aux3 =0;
        
            for(j = 0; j < numero_frames; ++j){
             temp[j] = -1;
            
             for(k = i + 1; k < numero_paginas; ++k){
                if(frames[j] == paginas[k]){
                    temp[j] = k;
                    break;
                }
             }
            }
            
            for(j = 0; j < numero_frames; ++j){
                if(temp[j] == -1){
                    pos = j;
                    aux3 = 1;
                    break;
                }
            }
            
            if(aux3 ==0){
             max = temp[0];
             pos = 0;
            
             for(j = 1; j < numero_frames; ++j){
                if(temp[j] > max){
                    max = temp[j];
                    pos = j;
                    }
                }            
            }
        frames[pos] = paginas[i];
        falhas++;
        }
        
        printf("\n");
        
        for(j = 0; j < numero_frames; ++j){
            printf("%d\t", frames[j]);
        }
    } 
    printf("\n\nTotal de falhas = %d", falhas);
    
    return 0;
}
/*
Valores a serem simulados: 2 3 4 2 1 3 7 5 4 3
Número de páginas a serem simuladas: 10
Número de frames a serem simulados: 3
*/