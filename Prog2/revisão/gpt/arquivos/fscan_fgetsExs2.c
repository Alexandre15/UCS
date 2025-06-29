#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
/*

 Desafio — Leitura de nomes com fgets e contagem de caracteres

    João da Silva
    Ana Beatriz de Souza
    Carlos

*/
FILE *arq = fopen("teste2.txt", "r");
if (arq == NULL)
{
    printf("ERRO\n");
}


char nome[50];
int cont;

while (fgets(nome, sizeof(nome), arq) != NULL)
{
    cont = 0;

    nome[strcspn(nome, "\n")] = '\0';
    cont = strlen(nome);
    printf("%s ( %d caracteres )\n", nome, cont);
}
printf("Conta os espacos entre nome e sobrenome!");

}