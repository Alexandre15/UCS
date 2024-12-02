#include <stdio.h>

#define GABARITO 10
int main(){

    int idx, op=0, soma, gabarito[GABARITO], respostas[10];

    for (idx = 0; idx < GABARITO; idx++)
    {
        printf("GABARITO - Questao %d: ", idx+1);
        scanf("%d", &gabarito[idx]);
    }

    while (op!=1)
    {
        soma = 0;
        for (idx = 0; idx < GABARITO; idx++)
        {
            printf("Resposta questao %d(1 a 5): ", idx+1);
            scanf("%d", &respostas[idx]);
            if (respostas[idx]==gabarito[idx])
            {
                soma++;
            }
        }
        printf("Nota = %d\n", soma);
        printf("continuar SIM(0) NAO(1)?");
        scanf("%d", &op);
    }
}