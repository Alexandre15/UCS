#include <stdio.h>

#define TAMVETORA 5
#define TAMVETORB 9

int main(){

    float vetA[TAMVETORA], vetB[TAMVETORB], resultados[9];
    int idx, idx2, valor, cont, cont2;

    printf("Entrada de dados A...\n");
    for (idx = 0; idx < TAMVETORA; idx++)
    {
        printf("Idx %d - Valor? ", idx);
        scanf("%d", &valor);
        vetA[idx]=valor;
    }

    printf("\nEntrada de dados B...\n");
    for (idx = 0; idx < TAMVETORB; idx++)
    {
        printf("Idx %d - Valor? ", idx);
        scanf("%d", &valor);
        vetB[idx]=valor;
    }

    printf("\nVERIFICAR\n");
    cont=0;
    cont2=0;

    for (idx=0; idx < TAMVETORA; idx++)
    {
        for (idx2=0; idx2 < TAMVETORB; idx2++)
        {
            if (vetA[idx]==vetB[idx2])
            {
                cont++;
                resultados[cont2]=vetB[idx2];
                cont2++;
            }
            
        }
        
    }
    

    printf("Numeros iguais nos dois vetores = %d\n", cont);
    for (idx = 0; idx < cont2; idx++)
    {
        printf("%.2f\n", resultados[idx]);        /* code */
    }
    
}