#include <stdio.h>

#define TAMANHO 6

int main(){
    int idx, flag=TAMANHO, aux, iteracao, vetor[TAMANHO], parae=1;

    printf("Entrada dos numeros: \n");
    for (idx = 0; idx < TAMANHO; idx++)
    {
        printf("Idx %d Numero? ", idx);
        scanf("%d", &vetor[idx]);
    }

    for (iteracao = 1; iteracao < flag; iteracao++)
    {
        while (parae!=0)
        {
            for (idx = 0; idx < (TAMANHO-iteracao); idx++)
            {
                if (vetor[idx]>vetor[idx+1])
                {
                    aux=vetor[idx+1];
                    vetor[idx+1]=vetor[idx];
                    vetor[idx]=aux;
                    printf("Danone %d", idx);
                }
            }

            for (idx = 0; idx < TAMANHO; idx++)
            {
                if (vetor[idx]<vetor[idx+1])
                {
                    parae=0;
                    flag=1;
                }
                
            }
            
        }
        
        printf("Danone %d", idx);
    }

    for (idx = 0; idx < TAMANHO; idx++)
    {
        printf("\nVetor %d: %d\n", idx, vetor[idx]);
    }
}