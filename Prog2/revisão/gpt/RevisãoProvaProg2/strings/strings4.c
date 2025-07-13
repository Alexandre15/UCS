#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[50];

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);

    nome[strcspn(nome, "\n")] = '\0';

    int tam = strlen(nome);
    for (int i = tam - 1; i >= 0; i--) {
        printf("%c", nome[i]);
    }
}
