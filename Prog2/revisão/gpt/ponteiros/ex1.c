#include <stdio.h>
/*
🧠 Exercício 1 — Atribuição e desreferenciação
Crie um programa que:

    Declare uma variável int x = 5;

    Crie um ponteiro p para x;

    Use o ponteiro para:

        Mostrar o valor de x;

        Alterar o valor de x para 10.
*/
int main(){
    int x = 5;
    int *p = &x;

    printf("Valor de X = %d", *p);
    *p = 10;
    printf("\nNovo valor de X = %d", *p);

}