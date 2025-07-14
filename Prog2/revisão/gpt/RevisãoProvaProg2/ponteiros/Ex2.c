#include <stdio.h>

int maior(int *vetor, int tam){
    int maior = vetor[0];
    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int vetor[] = {12,4,8,2,5};

    printf("O maior valor = %d", maior(vetor, 5));
}
