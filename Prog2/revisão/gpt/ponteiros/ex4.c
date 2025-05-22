#include <stdio.h>
/*

🧠 Exercício 4 — Incremento via ponteiro
Crie uma função void incrementar(int *n) que incremente a variável passada por parâmetro. Teste no main com diferentes valores.

*/

void incrementar(int *n) {
    (*n)++;
}

int main(){
    int a = 10;
    int *p = &a;

    printf("Valor de A = %d\n", a);
    incrementar(p);
    printf("Novo valor de A = %d\n", a);

}