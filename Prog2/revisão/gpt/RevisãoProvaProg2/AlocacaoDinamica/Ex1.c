#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetor = malloc(n * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro ao alocar vetor!\n");
    }
    
    for (int i = 0; i < n; i++)
    {
        vetor[i] = rand() % (100 - 1 + 1) + 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Numero %d: %d\n", i + 1, vetor[i]);
    }
}
