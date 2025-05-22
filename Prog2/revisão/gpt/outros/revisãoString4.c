#include <stdio.h>
#include <string.h>

int main(){

    int i;
    char palavra[50];

    char *ptr = palavra;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    for (i = 0; palavra[i] != '\0'; i++)
    {
        if (*ptr != ' ')
        {
            printf("%c ", *ptr);
        }
        ptr++;
        
    }
    
}
