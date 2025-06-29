#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    /*
    🧩 Desafio 5 — Nomes com espaços + 2 notas por pessoa

    📄 Arquivo: pessoas.txt
        João da Silva
        7.5 8.0
        Carla Mendes
        9.0 6.5
        Thiago
        5.0 4.0
    🎯 Objetivo:
        Ler o nome (fgets)
        Ler as duas notas (fscanf)
        Calcular média e dizer se passou (média ≥ 6)
    */

    FILE *arq = fopen("teste6.txt", "r");
    if (arq == NULL)
    {
        printf("ERRO\n");
    }
   
    char nome[50];
    float n1, n2, media;

    while (fgets(nome, sizeof(nome), arq) != NULL)
    {
        nome[strcspn(nome, "\n")] = '\0';

        if (fscanf(arq, "%f %f", &n1, &n2))
        {
            printf("%s -> ", nome);
            media = (n1 + n2) / 2.0;
            printf("Media: %.2f -> ", media);
            if (media >= 6)
            {
                printf("\033[1;92mAprovado!!!\033[0m\n");
            }
            else
            {
                printf("\033[1;91mReprovado!!!\033[0m\n");
            }
            
        }
        
    }
    
}