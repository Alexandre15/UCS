#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char **nomes;
    int qty=5, i;
    int max_len = 100;

    nomes = malloc(qty * sizeof(char));
    if (nomes == NULL)
    {
        printf("Erroa ao alocar memória!");
        return 1;
    }

    for (i = 0; i < qty; i++)
    {
        nomes[i] = malloc(max_len * sizeof(char));
        if (nomes == NULL)
        {
            printf("Erroa ao alocar memória!");
            return 1;
        }
    }
    

    for (i = 0; i < qty; i++)
    {
        printf("Digite o %d nome: ", i + 1);
        if (fgets(nomes[i], max_len, stdin) == NULL) {
            printf("Erro ao ler o nome.\n");
            return 1;
        }

        // Remove o '\n' do final, se houver
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    for (i = 0; i < qty; i++)
    {
        printf("%d nome = %s\n", i + 1, nomes[i]);
    }

    for (i = 0; i < qty; i++)
    {
        free(nomes[i]);
    }
    
    free(nomes);
    
}