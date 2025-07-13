#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[50];

    printf("Digite seu nome: ");
    fgets(nome, "%s", stdin);

    nome[strcspn(nome, "\n")] = '\0';

    for (int i = 0; i < strlen(nome); i++)
    {
        nome[i] = toupper(nome[i]);
    }

    printf("Bem vindo %s", nome);

}
