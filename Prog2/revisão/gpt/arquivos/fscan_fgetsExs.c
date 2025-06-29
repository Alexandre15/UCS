#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    /*

    Crie um programa que leia um arquivo chamado teste.txt com o seguinte formato:

    Carlos Henrique dos Santos
    10.0   9.5      8.0
    Ana Maria
    7.0  5.0     4.5
    Paulo
    3.0         3.0 2.0

    Seu programa deve:

    1 - Ler corretamente os nomes usando fgets

    2 - Ler corretamente as 3 notas usando fscanf

    3 - Calcular e imprimir a média de cada aluno

    4 - Mostrar o nome e a média formatada com 2 casas decimais

    */

    FILE *arq = fopen("teste1.txt", "r");
    if (arq == NULL)
    {
        printf("ERRO\n");
        return 1;
    }
    
    char nome[50];
    float n1, n2, n3, media;

    while (fgets(nome, sizeof(nome), arq) != NULL)
    {
        if (fscanf(arq, "%f %f %f", &n1, &n2, &n3) == 3)
        {
            media = (n1 + n2 + n3) / 3.0;
            nome[strcspn(nome, "\n")] = '\0';
            printf("%s: Media: %.2f\n", nome, media);
        }
        
    }
    fclose(arq);
}