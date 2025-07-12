#include <stdio.h>

int main(){
    int i, j, cont = 0, soma = 0;
    int linhas = 4;
    int colunas = 4;

    int matriz[linhas][colunas];

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("Posi..[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            cont++;
            printf("[%d]", matriz[i][j]);
            if (matriz[i][j] > 10)
            {
                soma++;
            }
            
            if (cont == colunas)
            {
                printf("\n");
                cont = 0;
            }
            
        }
    }
    printf("Existem %d valores maior que 10!", soma);

}
