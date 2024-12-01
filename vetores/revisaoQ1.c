#include <stdio.h>

#define TAMANHO 6

int main(){

    int medicamentos[TAMANHO], idx, soma=0, aux=0;
    float media;

    for (idx = 0; idx < TAMANHO; idx++)
    {
        printf("Quantidade de medicamentos no mes %d: ", idx+1);
        scanf("%d", &medicamentos[idx]);
    }

    for (idx = 0; idx < TAMANHO; idx++)
    {
        if (medicamentos[idx]>0)
        {
            soma += medicamentos[idx];
            aux++;
        }   
    }

    media = (float)soma / aux;

    printf("Media de compras no periodo: %.2f\n", media);

    for (idx = 0; idx < TAMANHO; idx++)
    {
        printf("\nMes %d: %d * ", idx+1, medicamentos[idx]);
        if (medicamentos[idx]>media)
        {
            printf("Compra acima da media\n");
        }
    }
}