#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    float salario;
} Funcionario;

void reajustarSalario(Funcionario *p, float percent){
    printf("Reajustando %s...+%.2f%% de %.2f -> ", p->nome, percent, p->salario);
    p->salario += p->salario * (percent / 100.0);
    printf("R$%.2f\n", p->salario);
}

int main(){

    int i, tam = 3;

    Funcionario *f = malloc(tam * sizeof(Funcionario));
    if (f == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    

    for (i = 0; i < 3; i++)
    {
        printf("Funcionario %d: ", i + 1);
        fgets(f[i].nome, sizeof(f[i].nome), stdin);
        f[i].nome[strcspn(f[i].nome, "\n")] = '\0';

        printf("Salario: R$");
        scanf("%f", &f[i].salario);
        getchar();
    }
    
    for (i = 0; i < 3; i++)
    {
        printf("Nome: %s", f[i].nome);
        printf(" -> Salario: R$%.2f\n", f[i].salario);
    }
    
    reajustarSalario(&f[0], 15.0);
    reajustarSalario(&f[0], 30.0);
    
    for (i = 0; i < 3; i++)
    {
        printf("Nome: %s", f[i].nome);
        printf(" -> Salario: R$%.2f\n", f[i].salario);
    }
}
