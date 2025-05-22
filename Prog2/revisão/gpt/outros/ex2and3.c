#include <stdio.h>
#include <string.h>

int main(){

    char palavra[] = "Python";
    char palavraSort[50];
    int cont=0;
    int i, j=strlen(palavra);

    for (i = 0, j=strlen(palavra)-1; i <= j; i++, j--)
    {
        printf("ContA: %d\n", cont);
        palavraSort[cont++] = palavra[i];
        if (i != j)
        {
            printf("ContJ: %d\n", cont);
            palavraSort[cont++] = palavra[j];
        }
        printf("ContD: %d\n", cont);
    }

    palavraSort[cont] = '\0';

    printf("\n");
    printf("Palavra Sort: %s", palavraSort);
    
}

