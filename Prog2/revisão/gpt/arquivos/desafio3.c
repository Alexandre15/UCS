#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char *nome;
    int idade;
    char cpf[12];
} Pessoa;

int main(){
    int i, quantidade, memoria = 0, memoria2 = 0;
    float media;
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
        printf("\033[91mNome %d: \033[0m\033[92m", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';

        p[i].nome = malloc(strlen(buffer) + 1);
        if (p[i].nome == NULL)
        {
            printf("Erro ao alocar nome.\033[0m\n");
            return 1;
        }
        strcpy(p[i].nome, buffer);

        printf("\033[91mIdade: ");
        scanf("%d", &p[i].idade);
        getchar();

        printf("CPF: ");
        fgets(p[i].cpf, sizeof(p[i].cpf), stdin);
        p[i].cpf[strcspn(p[i].cpf, "\n")] = '\0';
        getchar();
        memoria += (strlen(p[i].nome) + 1) + 16;
        memoria2 += sizeof(Pessoa) - sizeof(char*) + strlen(p[i].nome) + 1;
        media += p[i].idade / (float)quantidade;

    }
    printf("\n\033[92m--- Pessoas cadastradas ---\033[0m\n\n");
    for (i = 0; i < quantidade; i++)
    {
        printf("\033[91m%d:\033[0m \033[92m%s | \033[0m", i + 1, p[i].nome);
        printf("\033[91m%d\033[0m \033[92mAnos | \033[0m", p[i].idade);
        printf("\033[91mCPF: %s\033[0m\n", p[i].cpf);
        free(p[i].nome);
    }

    free(p);
    printf("Media de idade: %.2f Anos\n", media);
    printf("Memoria ocupada = %d bytes", memoria);
    printf("Memoria2 ocupada = %d bytes", memoria2);
    return 0;
}
