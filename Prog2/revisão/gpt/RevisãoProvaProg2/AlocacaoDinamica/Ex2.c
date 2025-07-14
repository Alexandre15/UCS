#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media(int *vetor, int tam){
    float soma = 0;
    for (int i = 0; i < tam; i++)
    {
        soma += vetor[i];
    }

    return soma / tam;
    
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetorMedia = malloc(n * sizeof(float));
    if (vetorMedia == NULL)
    {
        printf("Erro\n");
    }

    for (int i = 0; i < n; i++)
    {
        vetorMedia[i] = i * 2.5;
        printf("Valor %d: %d\n", i+1, vetorMedia[i]);
    }
    
    printf("A media dos valores = %.1f\n", media(vetorMedia, n));
    free(vetorMedia);
    
}
