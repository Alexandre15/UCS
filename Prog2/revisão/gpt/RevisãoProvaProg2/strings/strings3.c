#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int vogais = 0;
    char nome[50];

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);

    nome[strcspn(nome, "\n")] = '\0';
    for (int i = 0; nome[i] != '\0'; i++) {
        char c = tolower(nome[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }
    }
    printf("Vogais: %d", vogais);
}
