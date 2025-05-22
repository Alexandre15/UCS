#include <stdio.h>
/*

🧠 Exercício 6 — Soma de elementos de array via ponteiro
Crie uma função int somar(int *v, int tamanho) que recebe um ponteiro para array e retorna a soma de seus elementos.

*/

int somar(int *v, int tamanho) {
    int somar=0, i;

    for (i = 0; i < tamanho; i++)
    {
        somar += *(v + i);
    }
    
    return somar;
}

int main(){
    int array[5] = {10, 20, 30, 40, 50};
    int *p = array;
    printf("Soma do array: %d\n", somar(p, 5));

}