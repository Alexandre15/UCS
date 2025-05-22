#include <stdio.h>
/*

🧠 Exercício 8 — Função que modifica array
Crie uma função void dobrar_elementos(int *v, int n) que dobra o valor de todos os elementos de um array.

Use no main com um array de 5 inteiros.

*/

void dobrar_elementos(int *v, int n) {
    int i;

    for (i = 0; i < n; i++)
    {
        *(v + i) *= 2;
    }
}

int main(){
    int numeros[5] = {10, 20, 30, 40, 50}, i;

    dobrar_elementos(numeros, 5);

    for (i = 0; i < 5; i++)
    {
        printf("Valores: %d\n", numeros[i]);
    }
    
}