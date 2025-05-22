#include <stdio.h>
/*

🧠 Exercício 3 — Troca de valores com função
Escreva uma função void trocar(int *a, int *b) que troque os valores de duas variáveis. Teste no main.

*/

void trocar(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int a = 10, b = 20;

    printf("Variavel A = %d\n", a);
    printf("Variavel B = %d\n", b);

    trocar(&a, &b);
    
    printf("Variavel A = %d\n", a);
    printf("Variavel B = %d\n", b);
}