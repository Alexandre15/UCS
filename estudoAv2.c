#include <stdio.h>

int main(){

    int D2=0, D3=0, opcao;

    while (D3!=10 || D2!=10)
    {
        printf("Opção 2D(0) 3D(1): ");
        scanf("%d", &opcao);

        if (opcao == 0)
        {
            D2++;
            if (D2 == 10)
            {
                printf("Manter 2D!!!");
            }
            
        }
        else if (opcao == 1)
        {
            D3++;
            if (D3 == 10)
            {
                printf("Manter 2D!!!");
            }
        }
    }
}