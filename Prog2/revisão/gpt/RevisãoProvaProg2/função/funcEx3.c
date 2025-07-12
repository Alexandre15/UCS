#include <stdio.h>

float media(int *valores){
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma += valores[i];
    }
    return soma / 5.0;
}

int main(){
    int valores[] = {10, 15, 41, 12, 24};

    printf("A media do vetor valores = %.1f", media(valores));
}
