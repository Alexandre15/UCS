#include <stdio.h>
#include <string.h>
/*

🧠 Exercício 17 — Struct com ponteiro
Crie uma struct Pessoa com char nome[50] e int idade.
Faça uma função:

void mostrar(struct Pessoa *p)

Que recebe o ponteiro para a struct e imprime os dados.

*/
typedef struct People
    {
        char nome[50];
        int idade;
    } People;


void mostrar(struct People *p){
    printf("Nome: %s\n", p->nome);
    printf("Idade: %d\n", p->idade);
}


int main(){

    People alexandre = {"Alexandre Fagundes", 23};

    mostrar(&alexandre);
    
}