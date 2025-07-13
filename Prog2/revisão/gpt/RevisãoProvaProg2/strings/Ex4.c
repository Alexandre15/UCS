#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[5][50];
    int maior = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome %d: ", i + 1);
        fgets(nome[i], sizeof(nome[i]), stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';
    }
    
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(nome[i], nome[maior]) > 0)
        {
            maior = i;
        }
        
    }
    
    printf("\nO maior em ordem alfabetica e '%s'", nome[maior]);
    
}