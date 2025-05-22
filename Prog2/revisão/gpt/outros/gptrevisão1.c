#include <stdio.h>

int main(){
    int matriz[3][3], i, j;
    int soma = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
        
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
    printf("A soma de todos os numeros = %d", soma);
}