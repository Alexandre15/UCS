#include <stdio.h>
/*

🧠 Exercício 16 — Preencher matriz 3x3 com ponteiros
Crie uma matriz int mat[3][3], preencha com números de 1 a 9 usando um ponteiro genérico (int *p = &mat[0][0]), e imprima os valores formatados.

*/

int main(){
    int mat[3][3], i;
    int *p = &mat[0][0];

    for (i = 0; i < 9; i++)
    {
        *p = i + 1;
        p++;
    }
    
    for ( i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d]", mat[i][j]);
        }
        printf("\n");
    }
    
}