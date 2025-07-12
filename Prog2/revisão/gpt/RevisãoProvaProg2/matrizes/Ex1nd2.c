#include <stdio.h>

int main(){
    int i, j, cont = 0;
    int linhas = 3;
    int colunas = 3;

    int matriz[linhas][colunas];

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("Digite um valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            cont++;
            if (i + j == colunas - 1)
            {
                printf("\033[92m");
                printf("[%d]", matriz[i][j]);
                printf("\033[0m");
            }
            else
            {
                printf("[%d]", matriz[i][j]);
            }
            //printf("[%d]", matriz[i][j]);
            
            if (cont == colunas)
            {
                printf("\n");
                cont = 0;
            }
            
        }
    }
}