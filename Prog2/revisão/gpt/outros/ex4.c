#include <stdio.h>
#include <string.h>

void cript(char entrada[], char saida[]){

    char palavraSort[50];
    int cont=0;
    int i, j=strlen(entrada);

    for (i = 0, j=strlen(entrada)-1; i <= j; i++, j--)
    {
        palavraSort[cont++] = entrada[i];
        if (i != j)
        {
            palavraSort[cont++] = entrada[j];
        }
    }

    palavraSort[cont] = '\0';
    strcpy(saida, palavraSort);
}


int main(){

    char palavra[] = "Abacate";
    char resultado[50];

    cript(palavra, resultado);

    printf("Palavra = %s\n", palavra);
    printf("Resultado = %s\n", resultado);
}
