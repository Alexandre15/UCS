// Como prencher um vetor com dados e exibir
#include <stdio.h>

int main(){
    int numero;
    int idx, pos, sorteio[7];

    for (idx=0; idx<7; idx++)
    {
        printf("Numero? ");
        scanf("%d", &numero);
        sorteio[idx] = numero;
    }

    for (idx=0; idx<7; idx++){
        printf("vetor: %d\n", sorteio[idx]);
    }

    printf("Posicao: ");
    scanf("%d", &pos);
    printf("Numero: ");
    scanf("%d", &numero);
    while (pos<1 || pos > 7)
    {
        printf("Posicao invalida!!!. Digite novamente: ");
        scanf("%d", &pos);
    }
    sorteio[pos-1] = numero;
    printf("New data...");
    for (idx=0; idx<7; idx++){
        printf("vetor: %d\n", sorteio[idx]);
    }

    printf("Posicao: ");
    scanf("%d", &pos);
    while (pos<1 || pos > 7)
    {
        printf("Posicao invalida!!!. Digite novamente: ");
        scanf("%d", &pos);
    }
    printf("Numero na posicao %d = %d\n", pos, sorteio[pos-1]);

}

