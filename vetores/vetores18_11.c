#include <stdio.h>

#define TAMANHO 6

int main(){
    int idx, origem[TAMANHO], posicao, destino[TAMANHO], idxmenor;

    printf("Entrada dos numeros: \n");
    for (idx = 0; idx < TAMANHO; idx++);
    {
        printf("Idx %d Numero? ", idx);
        scanf("%d", origem[idx]);
    }

    for (posicao = 0; posicao < (TAMANHO-posicao); posicao++)
    {
        // encontrar o menor na origem
        idxmenor=0;
        for (idx = 1; idx < (TAMANHO-posicao); idx++)
        {
            if (origem[idx]<origem[idxmenor])
            {
                idxmenor=idx;
            }
            
        }
        
        // inserir no destino
        destino[posicao]=origem[idxmenor];

        // tirar o numero do vetor origem

        for (idx = idxmenor; idx < (TAMANHO-posicao)-1; idx++)
        {
            origem[idx]=origem[idx+1];
        }
        
    }
    
    


}