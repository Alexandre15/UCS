#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[20];
    float preco;
    int quantidade;
} Produto;

int main() {
    float soma = 0;
    Produto produtos[3];
    
    printf("\n =--- LOJA ---= \n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n --- Produto %d --- \n", i + 1);
        printf("Nome: ");
        fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';
        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        soma += produtos[i].quantidade * produtos[i].preco;
        getchar();
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n%s total = %.2f\n", produtos[i].nome, produtos[i].quantidade * produtos[i].preco);
    }
    
    
    printf("\nValor total gasto = R$%.2f", soma);
    
}
