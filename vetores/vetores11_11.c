#include <stdio.h>
#define TAMVETOR 6

int main(){

    float vetA[TAMVETOR], vetB[TAMVETOR], resultado[TAMVETOR];
    int idx;

    printf("Entrada de dados A...\n");
    for (idx = 0; idx < TAMVETOR; idx++)
    {
        printf("Idx %d - Valor? ", idx);
        scanf("%f", &vetA[idx]);
    }
    printf("Entrada de dados B...\n");
    for (idx = 0; idx < TAMVETOR; idx++)
    {
        printf("Idx %d - Valor? ", idx);
        scanf("%f", &vetB[idx]);
    }
    printf("Calculando...\n");
    for (idx = 0; idx < TAMVETOR; idx++)
    {
        resultado[idx] = vetA[idx] - vetB[idx];
    }
    printf("RESULTADOS\n");
    for (idx = 0; idx < TAMVETOR; idx++)
    {
        printf("%.2f - %.2f = %.2f\n", vetA[idx], vetB[idx], resultado[idx]);
    }
    printf("INVERSO\n");
    for (idx = TAMVETOR-1; idx >= 0; idx--)
    {
        printf("%.2f\n", resultado[idx]);
    }
    
}