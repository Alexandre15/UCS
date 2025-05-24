#include <stdio.h>
/*

🧠 Exercício 9 — Ponteiro para ponteiro
Crie um programa que:

    Tenha uma variável int x = 7;

    Um ponteiro int *p = &x;

    E um ponteiro para ponteiro: int **pp = &p;

Imprima:

    O valor de x usando x, *p e **pp.

*/

int main(){
    int x = 7;
    int *p = &x;
    int **pp = &p;

    printf("Valor usando x: %d\n", x);
    printf("Valor usando *p: %d\n", *p);
    printf("Valor usando **pp: %d\n", **pp);
}