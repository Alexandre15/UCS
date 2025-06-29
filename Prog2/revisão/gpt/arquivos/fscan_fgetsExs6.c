#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    /*
    Desafio 4 — Nome com espaços + nota (linha separada)

    📄 Arquivo: pessoas.txt
        Maria da Penha
        10.0
        Lucas Silva
        8.0
        Zuleide de Matos
        4.5
    🎯 Objetivo:
        Para cada pessoa:
            Leia o nome com fgets
            Leia a nota com fscanf
            Informe se a nota é maior ou menor que 7
    */
    FILE *arq = fopen("teste5.txt", "r");
    if (arq == NULL)
    {
        printf("ERRO\n");
    }

    char nome[50];
    float nota = 0;;

    while (fgets(nome, sizeof(nome), arq) != NULL)
    {

        nome[strcspn(nome, "\n")] = '\0';
        printf("\033[1;92;107m %s  -> \033[0m", nome);
        while (fscanf(arq, "%f", &nota) == 1)
        {
            if (nota <= 7)
            {
                printf("\033[107m%.2f -> \033[0m\033[107;91mPrecisa melhorar\033[0m\n", nota);
            }
            else if (nota > 7 && nota < 10)
            {
                printf("\033[107m%.2f -> \033[0m\033[107;94mMuito bom!\033[0m\n", nota);
            }
            else
            {
                printf("\033[107m%.2f -> \033[0m\033[107;92mExcelente!!!\033[0m\n", nota);
            }
        }  
    }

    fclose(arq);

}