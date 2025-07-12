#include <stdio.h>

int main(){

    int linhas = 2, colunas = 3;

    int matriz[linhas][colunas];
    int i, j, cont = 0;

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz digitada: \n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            cont++;
            printf("[%d]", matriz[i][j]);
            if (cont == 3)
            {
                printf("\n");
                cont = 0;
            }
        }
    } 
}