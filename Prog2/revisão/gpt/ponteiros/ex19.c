#include <stdio.h>
/*

🧠 Exercício 19 — Alocar e preencher vetor dinamicamente
Use malloc para alocar um vetor de n inteiros (com valor informado pelo usuário).
Preencha com valores digitados e imprima os elementos.

*/

int main(){
    int n, i;
    printf("Qual é o tamanho do vetor: ");
    scanf("%d", &n);

    int *inteiros = (int *)malloc(n * sizeof(int));

    if (inteiros == NULL) {
        printf("Erro de alocação!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Digite os numeros: ");
        scanf("%d", &inteiros[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("[ %d ]", inteiros[i]);
    }
    
}