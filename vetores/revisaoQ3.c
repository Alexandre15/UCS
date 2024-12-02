#include <stdio.h>

#define TAMANHO 6

int main(){
    int idx, idx2, vacinas[TAMANHO], corte, aux;

    for (idx = 0; idx < TAMANHO; idx++)
    {
        printf("Digite a data do Lote %d: ", idx+1);
        scanf("%d", &vacinas[idx]);
    }
    printf("\nDigite a data de corte: ");
    scanf("%d", &corte);
    
    for (idx = 0; idx < TAMANHO; idx++)
    {
        for (idx2 = 0; idx2 < TAMANHO-1; idx2++)
        {
            if (vacinas[idx2]>vacinas[idx2+1])
            {
                aux=vacinas[idx2+1];
                vacinas[idx2+1]=vacinas[idx2];
                vacinas[idx2]=aux;
            }
            
        }
        
    }


    for (idx = 0; idx < TAMANHO; idx++)
    {
        if (vacinas[idx]<=corte)
        {
            printf("\nData de Corte %d: %d\n", idx+1, vacinas[idx]);
        }
    }
}