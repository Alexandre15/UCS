#include <stdio.h>

#define QTY 4

int main(){

    float cont=0;
    int idx, voto, maior=0, sair=1;
    int votos[4];

    for (idx = 0; idx < QTY; idx++)
    {
        votos[idx]=0;
    }
    
    while (sair!=0)
    {
        printf("\nPara quem deseja votar(0=nulo, 1 - 2 - 3)?");
        scanf("%d", &voto);
        
        while (voto>4 || voto<0)
        {
            printf("Invalido digite novamente: ");
            scanf("%d", &voto);
        }
        
        votos[voto]+=1;

        printf("\nExiste outro votante(0 para sair)");
        scanf("%d", &sair);
        if (voto!=0)
        {
            cont+=1;
        }

        voto = 0;
    }
    
    printf("\nApuracao...\n");
    printf("|------------------------------------|\n");
    for (idx=1; idx<QTY; idx++)
    {
        printf("  Candidato %d: %d votos (%.2f%%)\n", idx, votos[idx], votos[idx]/cont*100.0);  //(float)abaixo/NRPESSOAS*100.0
        if ((votos[idx]/cont*100.0) > 50)
        {
            maior = idx;
        }
        
    }
    printf("  Votos nulos = %d", votos[0]);
    if (maior!=0)
    {
        printf("  Candidato %d, teve %.2f%% dos votos\n", maior, (float)votos[maior]/cont*100.0);
    }
    
    printf("\n|------------------------------------|\n");
}