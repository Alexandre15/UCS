#include <stdio.h>

int main(){

int pontos, soma, rodada, rodadas, contador=0, contmais=0, maior=0;
float media;
soma = 0;

printf("Quantas rodadas: ");
scanf("%d", &rodadas);

for(rodada=1; rodada<=rodadas; rodada+=1)                           //(inicio; condição; passo;)
{
    printf("\nRodada %d", rodada);
    printf(" - Quantos pontos? ");
    scanf("%d", &pontos);
    if (rodada == 1)
    {
        maior=pontos;
    }
    else
        if (pontos>maior)
        {
        maior=pontos;
        }
    
    if (pontos<6)
    {
        contador += 1;
        printf("... contei mais um menor (parcial = %d)", contador);
    }
    if (pontos>4)
    {
        contmais += 1;
        printf("... contei mais um maior (parcial = %d)", contador);
    }

    soma += pontos;
}
media=soma/rodadas;
printf("\nPontos = %d", soma);
printf("\nRodadas com pontuação menor que 6 = %d", contador);
printf("\nRodadas com pontuação maior que 4 = %d", contmais);
printf("Media = %.2f", media);

}
