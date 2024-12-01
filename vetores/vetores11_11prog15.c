#include <stdio.h>

#define STD 8
#define STD2 6

int main(){
    int vetoracerto[STD], vetorsorteado[STD2], idx, idx2, cont;

    printf("\nCASA DE APOSTAS CNEVERWIN\n");
    for (idx = 0; idx < STD; idx++)
    {
        printf("Digite seus numeros: ");
        scanf("%d", &vetoracerto[idx]);
    }

    printf("\nRESULTADO DO SORTEIO\n");
    for (idx = 0; idx < STD2; idx++)
    {
        printf("Digite numeros sorteados: ");
        scanf("%d", &vetorsorteado[idx]);
    }

    cont=0;

    for (idx = 0; idx < STD2; idx++)
    {
        for (idx2 = 0; idx2 < STD; idx2++)
        {
            if (vetorsorteado[idx]==vetoracerto[idx2])
            {
                cont++;
            }
            
        }
    }

    printf("ACERTOS = %d\n", cont);
    if (cont>=6)
    {
        printf("Acerto ne miseravi!!!");
    }
    else if (cont==4 || cont==5)
    {
        printf("Ate que deu uma grana legal seu saco de vacilo");
    }
    else
    {
        printf("Como sempre um fracassado parabens otario!!!");
    }
}