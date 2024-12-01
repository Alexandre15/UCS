#include <stdio.h>

#define QTY 9

int main(){

    int idx;
    float notas=0, m[9], media, soma, maior, menor;

    for (idx = 0; idx < QTY; idx++)
    {
        printf("Digite a nota: ");
        scanf("%f", &notas);
        while (notas<1.2 || notas>9.81)
        {
            printf("Digite a nota novamente: ");
            scanf("%f", &notas);
        }

        m[idx] = notas;
    }
    soma=0.0;
    maior=m[0];
    menor=m[0];

    for (idx = 0; idx < QTY; idx++)
    {

        soma += m[idx];
        if (m[idx]<menor)
        {
            menor=m[idx];
        }
        if (m[idx]>maior)
        {
            maior=m[idx];
        }
    }

    media=(soma-(menor+maior)) / (QTY-2);

    printf("\nMenor = %.2f\n", menor);
    printf("Maior = %.2f\n", maior);
    printf("Pontuacao do Atleta = %.2f", media);
}