#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    float nota1;
    float nota2;
} Aluno;


int main() {
    Aluno alunos[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Nome Aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        getchar();
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Media do aluno %s = %.1f\n", alunos[i].nome, (alunos[i].nota1 + alunos[i].nota2) / 2);
    }
}
