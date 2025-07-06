#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
        char cpf[20];
        char nome[50];
        float salario;
        char departamento[50];
    } Funcionario;

int main(){

    Funcionario *f;
    int n, i, j;

    FILE *arq = fopen("ex3.txt", "r");
    if (arq == NULL)
    {
        printf("Arquivo não encontrado!");
    }

    fscanf(arq, "%d\n", &n);

// Alocação dinâmica dessa vez kk
    f = (Funcionario *) malloc(n * sizeof(Funcionario));
    if (f == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    

    for (i = 0; i < n; i++)
    {
        fgets(f[i].cpf, sizeof(f[i].cpf), arq);
        fgets(f[i].nome, sizeof(f[i].nome), arq);
        fscanf(arq, "%f\n", &f[i].salario);
        fgets(f[i].departamento, sizeof(f[i].departamento), arq);

        f[i].cpf[strcspn(f[i].cpf, "\n")] = '\0';
        f[i].nome[strcspn(f[i].nome, "\n")] = '\0';
        f[i].departamento[strcspn(f[i].departamento, "\n")] = '\0';
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            
            if (strcmp(f[i].nome, f[j].nome) > 0)
            {
                Funcionario temp = f[i];
                f[i] = f[j];
                f[j] = temp;
            }   
        }
    }

    FILE *out = fopen("saidaNew.txt", "w");
    if (out == NULL)
    {
        printf("Erro ao criar arquivo de output");
        free(f);
        return 1;
    }
    
    for (i = 0; i < n; i++)
    {
        fprintf(out, "%s %s R$%.2f %s\n", f[i].cpf, f[i].nome, f[i].salario, f[i].departamento);
        printf("%s %s %.2f %s\n", f[i].cpf, f[i].nome, f[i].salario, f[i].departamento);
    }

    fclose(arq);
    fclose(out);
    free(f);

    printf("Arquivo gerado com sucesso!");
    return 0;
}
