#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    struct Pessoa grupo[4];

    for (int i = 0; i < 4; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(grupo[i].nome, 50, stdin);

        // remove '\n'
        int len = strlen(grupo[i].nome);
        if (grupo[i].nome[len - 1] == '\n') {
            grupo[i].nome[len - 1] = '\0';
        }

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &grupo[i].idade);
        getchar(); // consumir o ENTER do scanf
    }

    printf("\n--- Dados Cadastrados ---\n");
    for (int i = 0; i < 4; i++) {
        printf("Nome: %s | Idade: %d\n", grupo[i].nome, grupo[i].idade);
    }

    return 0;
}
