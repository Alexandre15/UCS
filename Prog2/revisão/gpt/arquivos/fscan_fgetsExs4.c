#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
/*
Desafio 3 — Alternância: nome + nota na mesma linha

📄 Arquivo: alunos.txt
    Maria 8.5
    Pedro 7.2
    Joana 9.4
🎯 Objetivo:
    Leia o nome e a nota (float) de cada aluno e diga se está aprovado (média ≥ 7).
*/

FILE *arq = fopen("teste4.txt", "r");
if (arq == NULL)
{
    printf("ERRo\n");
}

char nome[50];
float nota;

while(fscanf(arq, "%s %f", nome, &nota) == 2)
{
    printf("%s -> %.1f\n", nome, nota);
}
fclose(arq);
}