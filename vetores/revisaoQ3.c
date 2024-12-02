#include <stdio.h>

#define TAMANHO 6

int main(){
    int idx, vacinas[TAMANHO], corte;

    for (idx = 0; idx < TAMANHO; idx++)
    {
        printf("Digite a data do Lote %d: ", idx+1);
        scanf("%d", &vacinas[idx]);
    }
    printf("Digite a data de corte: ");
    scanf("%d", &corte);
    
    for (idx = 0; idx < TAMANHO; idx++)
    {
        printf("Vacinas: %d\n", vacinas[idx]);
    }
    


}