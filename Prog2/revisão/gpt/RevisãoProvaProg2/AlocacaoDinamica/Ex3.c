#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    int n;

    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    Produto *prod = malloc(n * sizeof(Produto));

    for (int i = 0; i < n; i++)
    {
        printf("Produto %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", prod[i].nome);
        printf("Valor: ");
        scanf("%f", &prod[i].preco);
        printf("Quantidade: ");
        scanf("%d", &prod[i].quantidade);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\033[92mProduto %d\n", i + 1);
        printf("%s\n", prod[i].nome);
        printf("%.2f\n", prod[i].preco);
        printf("%d\n\n", prod[i].quantidade);
    }
    printf("\033[0m");
    free(prod);
}
