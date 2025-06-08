#include <stdio.h>
/*

🧠 Exercício 11 — Soma e produto por função com ponteiros
Crie uma função:

void operacoes(int a, int b, int *soma, int *produto)

Que receba dois inteiros a e b, e preencha *soma com a + b e *produto com a * b.

*/

void operacoes(int a, int b, int *soma, int *produto) {
    *soma = a + b;
    *produto = a * b;
}

int main(){
    int a = 23;
    int b = 34;
    int somaT, produtoT;
    int *pS = &somaT;
    int *pP = &produtoT;

    operacoes(a, b, pS, pP);

    printf("\033[92mSoma\033[0m: \033[94m%d\033[0m\n", *pS);
    printf("\033[92mProduto:\033[0m \033[94m%d\033[0m\n", *pP);
    
}