#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);

    // Remover o \n do final se estiver presente
    if (nome[strlen(nome) - 1] == '\n') {
        nome[strlen(nome) - 1] = '\0';
    }

    printf("Olá, %s!\n", nome);
    printf("Seu nome tem %lu letras\n", strlen(nome));

    return 0;
}
