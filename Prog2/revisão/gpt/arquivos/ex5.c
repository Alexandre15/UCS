#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void normalizar(char *s){
    int len = strlen(s);
    int start = 0, end = len - 1;

    while (start < len && !isalpha((unsigned char)s[start]))
    {
        start++;
    }

    while (end >= 0 && !isalpha((unsigned char)s[end]))
    {
        end--;
    }
    
    if (start > end)
    {
        s[0] = '\0';
        return;
    }
    
    int j = 0, i;
    for (i = start; i <= end; i++)
    {
        s[j++] = tolower((unsigned char)s[i]);
    }
    s[j] = '\0';
    
}

int main(){

    FILE *arq = fopen("Baskerville.txt", "r");
    if (arq == NULL)
    {
        printf("Erroa ao abrir arquivo.\n");
        return 1;
    }

    char token[256];
    int cont = 0;

    while (fscanf(arq, "%255s", token) == 1)
    {
        normalizar(token);

        if (strcmp(token, "holmes") == 0)
        {
            cont++;
        }
        
    }
    fclose(arq);

    printf("A palavra holmes aparece %d vezes no texto.\n", cont);
    return 0;
    
}
