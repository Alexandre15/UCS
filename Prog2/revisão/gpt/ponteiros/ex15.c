#include <stdio.h>
/*

🧠 Exercício 15 — Contar elementos maiores que X
Crie uma função:

int contar_maiores(int *v, int n, int x)

Que retorna quantos elementos de um array de n inteiros são maiores que x, usando apenas ponteiros.

*/
int contar_maiores(int *v, int n, int x){
    int cont = 0;
    int inteiros = 0;
    while (cont < n)
    {
        if(*v > x){
            inteiros++;
        }
        printf("%d\n", *v);
        v++;
        cont++;
    }
    return inteiros;
}



int main(){
    int x = 0;
    int tamanho = 5;
    int valores[] = {1, 2, 4, 25, 23};
    int *valoresP = valores;

    printf("Inteiros maiores que %d: %d", x, contar_maiores(valoresP, tamanho, x));
}