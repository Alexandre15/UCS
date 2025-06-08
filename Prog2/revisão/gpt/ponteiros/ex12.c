#include <stdio.h>
/*

🧠 Exercício 12 — Ponteiro para ponteiro
Crie:

    Uma variável int x = 100;

    Um ponteiro int *p = &x;

    Um ponteiro para ponteiro int **pp = &p;

Imprima x usando:

    x

    *p

    **pp

*/

int main(){
    int x = 100;
    int *p = &x;
    int **pp = &p;

    printf("Usando x: %d\n", x);
    printf("Usando *p: %d\n", *p);
    printf("Usando **pp: %d\n", **pp);
    
}