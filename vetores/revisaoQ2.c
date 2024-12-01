#include <stdio.h>

#define TAMANHOR 3
#define TAMANHOB 6

int main(){

    int droga[TAMANHOR], drogaboa[TAMANHOB], idx, idx2, unidade, soma;

    for (idx = 0; idx < TAMANHOR; idx++)
    {
        printf("Lotes bixados %d: ", idx+1);
        scanf("%d", &droga[idx]);
    }   

    printf("Unidade: ");
    scanf("%d", &unidade);  

    while (unidade!=0)
    {
        soma=0;
        for (idx = 0; idx < TAMANHOB; idx++)
        {
            printf("Lote %d: ", idx+1);
            scanf("%d", &drogaboa[idx]);  
        }

        for (idx = 0; idx < TAMANHOB; idx++)
        {
            for (idx2 = 0; idx2 < TAMANHOR; idx2++)
            {
                if (drogaboa[idx] == droga[idx2])
                {
                    soma ++;
                }  
            }  
        }

        printf("\nUnidade Nro %d\n", unidade);
        printf("Total de Lotes a Recolher = %d\n\n", soma);

        printf("Unidade: ");
        scanf("%d", &unidade);
    }
}
