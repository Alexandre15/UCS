#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char *nome;
    int idade;
    char cpf[12];
} Pessoa;

int main(){
    int i, quantidade, memoria = 0;
    char buffer[100];

    printf("Quantas pessoas deseja cadastrar: ");
    scanf("%d", &quantidade);
    getchar();

    Pessoa *p = malloc(quantidade * sizeof(Pessoa));
    if (p == NULL)
    {
        printf("Erro ao alocar vetor Pessoa.\n");
    }
    
    for (i = 0; i < quantidade; i++)
    {
        printf("Nome %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';

        p[i].nome = malloc(strlen(buffer) + 1);
        if (p[i].nome == NULL)
        {
            printf("Erro ao alocar nome.\n");
            return 1;
        }
        strcpy(p[i].nome, buffer);

        printf("Idade: ");
        scanf("%d", &p[i].idade);
        getchar();

        printf("CPF: ");
        fgets(p[i].cpf, sizeof(p[i].cpf), stdin);
        p[i].cpf[strcspn(p[i].cpf, "\n")] = '\0';
        getchar();
        memoria += (strlen(p[i].nome) + 1) + 16;

    }
    printf("--- Pessoas cadastradas ---\n");
    for (i = 0; i < quantidade; i++)
    {
        printf("Nome %d = %s\n", i + 1, p[i].nome);
        printf("Idade: %d\n", p[i].idade);
        printf("CPF = %s\n", p[i].cpf);
        free(p[i].nome);
    }

    free(p);
    printf("Memoria ocupada = %d", memoria);
    return 0;
}
