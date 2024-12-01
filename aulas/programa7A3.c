#include <stdio.h>

int main(){
    int cont=0, pontosA=0, pontosB=0, dedosA, dedosB, soma=0;

    printf("Jogo de Par e Impar (A x B)\n\n");
    do
    {
        cont++;     
        printf("Rodada %d  - ", cont);
        do
        {
            printf("Jogo AxB: ");
            scanf("%dx%d", &dedosA, &dedosB);
            if (dedosA>5 || dedosB>5 || dedosA<1 || dedosB<1)
            {
                printf("Digite novamente... ");
            }
        } while (dedosA>5 || dedosB>5 || dedosA<1 || dedosB<1);

        soma = dedosA+dedosB;
        if (soma%2==0)
        {
            pontosA++;
        }
        else
        {
            pontosB++;
        }
        
    } while (pontosA < 6 && pontosB < 6);
    
    printf("\nPontos A: %d", pontosA);
    printf("\nPontos B: %d\n", pontosB);
    if (pontosA>pontosB)
    {
        printf("A ganhou!\n");
    }
    else{
        printf("B ganhou!\n");
    }
    
    printf("Total de rodadas = %d", cont);




}