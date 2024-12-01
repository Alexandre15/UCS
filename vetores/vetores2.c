#include <stdio.h>
#define TAMANHO 8

int main(){
    int numero;
    int idx, sorteio[TAMANHO], achei;

    for (idx=0; idx<TAMANHO; idx++)
    {
        printf("Numero? ");
        scanf("%d", &numero);
        sorteio[idx] = numero;
    }

    printf("Numero: ");
    scanf("%d", &numero);
    achei=0;
    for (idx=0; idx<TAMANHO; idx++){
        if (numero==sorteio[idx])
        {
            printf("Na posicao %d tem o numero.\n", idx+1);
            achei = 1;
        }
        
    }
    if (achei==0)
    {
        printf("Numero não encontrado...");
    }
    
}