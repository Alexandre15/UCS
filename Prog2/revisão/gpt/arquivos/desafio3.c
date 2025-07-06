#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *nome;
} Pessoas;


int main(){
    int i;
    int quantidade;
    char buffer[200];
    int memoria = 0;

    printf("Quantidades de pessoas: ");
    scanf("%d", &quantidade);
    getchar();

    Pessoas *p = malloc(quantidade * sizeof(Pessoas));
    if (p == NULL)
    {
        printf("Erro ao alocar vetor Pessoas.\n");
        return 1;
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
        memoria += (strlen(p[i].nome) + 1);
        
    }
    printf("--- Nomes cadastrados ---\n");
    for (i = 0; i < quantidade; i++)
    {
        printf("Nome: %s\n", p[i].nome);
    }
    printf("Memoria usado de %d Bytes", memoria);
    
    for (i = 0; i < quantidade; i++) {
        free(p[i].nome); // libera cada nome individual
    }
    free(p);
    return 0;
}
