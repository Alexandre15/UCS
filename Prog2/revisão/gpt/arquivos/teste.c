#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

void preencherPessoa(Pessoa *p) {
    printf("Nome: ");
    fgets(p->nome, sizeof(p->nome), stdin);
    printf("Idade: ");
    scanf("%d", &p->idade);
    getchar();
}

void mostrarPessoa(Pessoa *p) {
    printf("Nome: %sIdade: %d\n", p->nome, p->idade);
}

int main() {
    Pessoa joao;

    preencherPessoa(&joao); // Passando ponteiro
    mostrarPessoa(&joao);

    return 0;
}
