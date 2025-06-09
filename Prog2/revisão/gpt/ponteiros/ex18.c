#include <stdio.h>
/*

🧠 Exercício 18 — Modificar struct via ponteiro
Crie uma função:

void atualizar_idade(struct Pessoa *p, int nova_idade)

Que atualiza a idade da pessoa.

*/
typedef struct Pessoa
{
    char nome[50];
    int age;
} Pessoa;


void att_age(struct Pessoa *p, int n_age)
{
    p->age = n_age;
};


int main(){

    Pessoa Alex = {"Alexandre", 18};
    printf("Alex1: %s, %d Anos\n", Alex.nome, Alex.age);
    att_age(&Alex, 23);
    printf("Alex2: %s, %d Anos\n", Alex.nome, Alex.age);
    
}