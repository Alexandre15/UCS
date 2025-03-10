#include <stdio.h>

int main(){

int votante, voto, sim=0, nao=0;
float percentS, percentN;

printf("Ligando a monodemocracia ok\n\n");
do{
    printf("Algum votante (0 para nenhum)? ");
    scanf("%d", &votante);
    if (votante!=0)
    { 
    do
    {
        printf("Voto(0:NAO / 1:SIM)? ");
        scanf("%d", &voto);
        if (voto<0 || voto>1)
        {
            printf("Voto invalido... ");
        }
        
    } while (voto<0 || voto>1);
    if (voto==1){
        sim++;
    }
    else{
        nao++;
    }
    }
} while (votante!=0);

printf("\nApuracao\n");
percentS = (float)sim/(sim+nao)*100.0;
percentN = (float)nao/(sim+nao)*100.0;
printf("SIM: %d (%.2f%%)\n", sim, percentS);
printf("nao: %d (%.2f%%)", nao, percentN);
if (sim>nao)
{
    printf("Referendo foi aprovado!");
}
else if(nao>sim){
    printf("Referendo não reprovado!");
}
else{
    printf("Houve um empate");
}
}